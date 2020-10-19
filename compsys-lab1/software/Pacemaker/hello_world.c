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

#include <stdio.h>
#include <altera_avalon_pio_regs.h>
#include "sys/alt_alarm.h"

#include"system.h"
#include "FSM.h"

#include <time.h> // REMOVE THIS

# define AVI_VALUE 200 	//ws
# define AEI_VALUE 800  // s
# define PVARP_VALUE 50 // s
# define VRP_VALUE 150  // s
# define LRI_VALUE 950  // s
# define URI_VALUE 900  //s

char *timer_start_flags[6];
char *timer_state_flags[6];
char *timer_expired_flags[6];
int timer_fist_timeStamp_Value[6] = {0,0,0,0,0,0};
int timer_timeout_values[6] = {
			AVI_VALUE,
			PVARP_VALUE,
			VRP_VALUE,
			AEI_VALUE,
			LRI_VALUE,
			URI_VALUE
	};

/* timeout_checker(int first_timeStamp , int timeout ,char *output):
 *
 * This function determines if a timer has timeout out.
 * it returns "1" for timer has timed out and "0" if timer
 * is still counting.
 *
 * inputs
 *
 * 	fist_tiimeStamp - the value of alt_n_ticks when the timer is started.
 * 	timer_state - "0" for timer done counting and "1" for timer still counting.
 * 	timeout - the amount of time (ms) the timer has to count.
 * 	timer_expired_flag - the address of the timer variable that represent an input on the sccharts
 * 			 will modify the value of the passed outputput to "1" for timer timeout
 * 			 and "0" for timer still counting.
 */
void timeout_checker(int first_timeStamp , int timeout ,char *timer_expired_flag)
{

	// calculates the elapsed time
	int time_diff = alt_nticks() - first_timeStamp;

	if(time_diff >= timeout)
	{
		//printf("timeoutvalue %d \n",time_diff);

		(*timer_expired_flag) = 1; // timer expired
	}
}

//REMOVE THIS
void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}


int main()
{
	// Initialize the FSM
	reset();

	// Store the timers "timer start" flags
	timer_start_flags[0] = &start_AVI;
	timer_start_flags[1] = &start_PVARP;
	timer_start_flags[2] = &start_VRP;
	timer_start_flags[3] = &start_AEI;
	timer_start_flags[4] = &start_LRI;
	timer_start_flags[5] = &start_URI;

	// Store the timer state (counting = 1 idle = 0)
	timer_state_flags[0] = &AVI_counting;
	timer_state_flags[1] = &PVARP_counting;
	timer_state_flags[2] = &VRP_counting;
	timer_state_flags[3] = &AEI_counting;
	timer_state_flags[4] = &LRI_counting;
	timer_state_flags[5] = &URI_counting;

	// Store the SCCHARTS OUTPUT variables
	timer_expired_flags[0] = &AVI_ex;
	timer_expired_flags[1] = &PVARP_ex;
	timer_expired_flags[2] = &VRP_ex;
	timer_expired_flags[3] = &AEI_ex;
	timer_expired_flags[4] = &LRI_ex;
	timer_expired_flags[5] = &URI_ex;

	//Force a Vsense TODO: Remove this later
	IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, 0);
	int c = 0;
  while(1)
  {
	  if(c == 1)
	  {
		  Vsense = 1;
	  }
	  else
	  {
		  Vsense = 0;
	  }


	  printf("Vsense value  %d\n" , Vsense);
	  printf("-----------------------\n");

	  /*
	  printf("AVI_ex   %d \n",*timer_expired_flags[0]);
	  printf("PVARP_ex %d \n",*timer_expired_flags[1]);
	  printf("VRP_ex   %d \n",*timer_expired_flags[2]);
	  printf("AEI_ex   %d \n",*timer_expired_flags[3]);
	  printf("LRI_ex   %d \n",*timer_expired_flags[4]);
	  printf("URI_ex   %d \n",*timer_expired_flags[5]);
	  printf("-------------------------- \n");
	  */
	  printf("AVI_start   %d \n",*timer_start_flags[0]);
	  printf("PVARP_start %d \n",*timer_start_flags[1]);
	  printf("VRP_start   %d \n",*timer_start_flags[2]);
	  printf("AEI_start   %d \n",*timer_start_flags[3]);
	  printf("LRI_start   %d \n",*timer_start_flags[4]);
	  printf("URI_start   %d \n",*timer_start_flags[5]);
	  printf("-------------------------- \n");
	  printf("-------------------------- \n");

	  //delay(10000); // Remove this

	  //printf("AEI_ex   %d \n",*timer_expired_flags[3]);
	  //printf("PVARP_ex   %d \n",*timer_expired_flags[1]);
	  for(int i = 0; i < 6 ; i++)
	  {
		  if((*timer_start_flags[i])) // check if a timer is started
		  {
			  // get the time stamp when start timer flag is set
			  timer_fist_timeStamp_Value[i] = alt_nticks();
		  }

		  if((*timer_state_flags[i])) // check if a timer is still counting
		  {
			  /* check if a timer has timed out
			   * and outputs a timer expire flag to
			   * intput into sccharts
			   */
			  timeout_checker(timer_fist_timeStamp_Value[i],
			                  timer_timeout_values[i],
			                  timer_expired_flags[i]);
		  }
		  else
		  {
			  *timer_expired_flags[i] = 0; // timer is idle or counting
		  }

	  }


	  // run the FSM
	  tick();


	  if(Apace)
	  {
		  IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, 0x3FFFF);
	  }
	  else
	  {
		  IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, 0);
	  }

	  if(Vpace)
	  {
		  IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0x3FFFF);
	  }
	  else
	  {
		  IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0);
	  }

	  c++;


  }

  return 0;

}

