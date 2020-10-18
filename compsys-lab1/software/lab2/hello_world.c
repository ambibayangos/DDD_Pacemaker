/*
 * "Hello World" example.
 *
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example
 * designs. It runs with or without the MicroC/OS-II RTOS and requires a STDOUT
 * device in your system's hardware.
 * The memory footprint of this hosted application is ~69 kbytes by default
 * using the standard reference design.
 *
 * For a reduced footprint version of this template, and an explanation of how
 * to reduce the memory footprint for a given application, see the
 * "small_hello_world" template.
 *
 */


#include<stdio.h>
#include <system.h>
#include <altera_avalon_pio_regs.h>
#include <string.h>
#include <alt_types.h>
#include <sys/alt_irq.h>
#include "sys/alt_alarm.h"
#include "gencode.h";


//-------------------------------------------------------------------- Button Interupt
/*
void button_interrupts_function(void* context, alt_u32 id)
{
int* temp = (int*) context; // need to cast the context first before using it
(*temp) = IORD_ALTERA_AVALON_PIO_EDGE_CAP(BUTTONS_BASE);
// clear the edge capture register
IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BUTTONS_BASE, 0);
printf("button: %i\n", *temp);
}

int main()
{
	int buttonValue = 1;
	void* context_going_to_be_passed = (void*) &buttonValue;

	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BUTTONS_BASE, 0);

	IOWR_ALTERA_AVALON_PIO_IRQ_MASK(BUTTONS_BASE, 0x7);

	alt_irq_register(BUTTONS_IRQ,context_going_to_be_passed,
	button_interrupts_function);
	while(1);
	return 0;
}
*/


//------------------------------------------------------------Timer ISR
/*
#include <stdio.h>
#include "sys/alt_alarm.h"
alt_u32 timer_isr_function(void* context)
{
int *timeCount = (int*) context;
(*timeCount)++;
printf("time:%d\n", *timeCount);
return 1000; // the next time out will be 1000 milli-seconds
}
int main()
{
alt_alarm timer;
int timeCountMain = 0;
void* timerContext = (void*) &timeCountMain;
// start the timer, with timeout of 1000 milli-seconds
alt_alarm_start(&timer, 1000, timer_isr_function, timerContext);
while(1)
{
if ( timeCountMain == 10)
{
alt_alarm_stop(&timer);
usleep(1000000);
alt_alarm_start(&timer, 1000, timer_isr_function, timerContext);
usleep(1500000);
}
}
return 0;
}
*/

// Polling
/*
int main(void)
{
int buttonValue = 1;
while(1)
{
buttonValue = IORD_ALTERA_AVALON_PIO_DATA(BUTTONS_BASE);

printf("button: %i\n", buttonValue);

}
return 0;
}
*/

//------------------------------------------------------ Linked List
/*
typedef struct linkedlist_struct {
int value;
struct linkedlist_struct* next;
} linkedlist;
int main(void)
{
	linkedlist* firstNode = (linkedlist*)malloc(sizeof(linkedlist));

	(*firstNode).value = 1;

	linkedlist* tempNode = (linkedlist*)malloc(sizeof(linkedlist)); // create node 2
	(*tempNode).value = 2; // value for node 2

	(*firstNode).next = tempNode; // linked 1->2

	tempNode = (linkedlist*)malloc(sizeof(linkedlist)); // 3rd node
	(*tempNode).value = 3; // value for 3rd node

	(*(*firstNode).next).next = tempNode; // connect 2->3

	tempNode = (linkedlist*)malloc(sizeof(linkedlist)); // 4th node
	(*tempNode).value = 4; // value for 3rd node

	(*(*(*firstNode).next).next).next = tempNode; // connect 3->4


	tempNode = (linkedlist*)malloc(sizeof(linkedlist)); // 5th node
	(*tempNode).value = 5; // value for 5rd node

	(*(*(*(*firstNode).next).next).next).next = tempNode; // connect 4->5

	(*tempNode).next = firstNode;
	tempNode = firstNode;

	while((*tempNode).next != 0)
	{
		printf("%d\n",(*tempNode).value);
				tempNode = (*tempNode).next;
				usleep(1000);
	}
}
*/

//Exercise ---------------------------------------------------------------------7

alt_alarm timer;
int count = 0;


// Timer ISR
alt_u32 timer_isr_function(void* context)
{

	int button = IORD_ALTERA_AVALON_PIO_DATA(BUTTONS_BASE);

	if(!(button & (1<<1)))
	{
		// increment & print
		printf("button: %i\n", ++count);
	}

return 500; // the next time out will be 500 milli-seconds
}

// first we write our interrupt function
void button_interrupts_function(void* context, alt_u32 id)
{
	int button = IORD_ALTERA_AVALON_PIO_DATA(BUTTONS_BASE);
	if(!(button & (1<<0)))
	{
		int* temp = (int*) context; // need to cast the context first before using it
		(*temp) = IORD_ALTERA_AVALON_PIO_EDGE_CAP(BUTTONS_BASE);
		// clear the edge capture register
		IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BUTTONS_BASE, 0);
		printf("button: %i\n", ++count);
	}
	else if(!(button & (1<<1)))
	{
		printf("TIMER STARTED\n");
		alt_alarm_stop(&timer);
		//void* timerContext = (void*) &timeCountMain;
		// start the timer, with timeout of 500 milli-seconds
		alt_alarm_start(&timer, 500, timer_isr_function, NULL);
		IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BUTTONS_BASE, 0);
	}

}


int main()
{
	int buttonValue = 1;
	void* context_going_to_be_passed = (void*) &buttonValue;

	// clears the edge capture register
	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BUTTONS_BASE, 0);
	// enable interrupts for all buttons
	IOWR_ALTERA_AVALON_PIO_IRQ_MASK(BUTTONS_BASE, 0x7);

	// register the ISR
	alt_irq_register(BUTTONS_IRQ,context_going_to_be_passed,
	button_interrupts_function);

	FILE* fp;

	fp = fopen(LCD_NAME, "w");
	int file_opened_fine = 0;
	if (fp != NULL)
	{
		fprintf(fp, "BUTTON VALUE: %d\n",count);
		file_opened_fine = 1;
	}
	int prevcount = 0;

	while(1)
	{
		if(file_opened_fine)
		{
			if(prevcount != count)
			{
				fprintf(fp, "BUTTON VALUE: %d\n",count);
				printf("BUTTON VALUE: %d\n",count);

				prevcount = count;
			}

		}
		else
		{

			printf("err------------------- could not open LCD file");

		}

	}

	fclose(fp);
	return 0;
}





//---------------------------------------------------------------- ABRO

/*
int main()
{

	reset();

	while(1)
	{
		// Fetch button inputs
		int button = IORD_ALTERA_AVALON_PIO_DATA(BUTTONS_BASE);

		if(!(button & (1<<0)))
		{

			printf("Reset\n");
			R = 1;
		}
		else
		{
				R = 0;
		}

		if(!(button & (1<<1)))
		{
			printf("B\n");
			B = 1;
		}
		else
		{
			B = 0;
		}

		if(!(button & (1<<2)))
		{
			printf("A\n");
			A = 1;
		}
		else
		{
			A = 0;
		}


		// A is Key 2, B is Key 1, R is Key 0
		// Remember that keys are active low
		// Do a tick!
		tick();

		if(O)
		{
			// Output O to Red LED
			printf("Ouput - led on\n");
			IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, 0x3FFFF);
			IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0x3FFFF);
		}
		else
		{
			// Output O to Red LED
			printf("Ouput - led off\n");
			IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, 0);
			IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0);


		}


	}

	return 0;
}
*/



