/*
 * FSM.h
 *
 *  Created on: 17/10/2020
 *      Author: ambib
 */

#ifndef FSM_H_
#define FSM_H_

//Funtions
void reset();
void tick();


//Inputs
extern char Vsense;
extern char Asense;
extern char AVI_ex;
extern char PVARP_ex;
extern char AEI_ex;
extern char VRP_ex;
extern char LRI_ex;
extern char URI_ex;

//Outpus
extern char stop_URI;
extern char stop_VRP;
extern char stop_PVARP;
extern char stop_AVI;
extern char start_AVI;
extern char stop_LRI;
extern char stop_AEI;
extern char Vpace;
extern char start_PVARP;
extern char start_AEI;
extern char Apace;
extern char start_VRP;
extern char start_LRI;
extern char start_URI;
extern char AVI_counting;
extern char PVARP_counting;
extern char VRP_counting;
extern char AEI_counting;
extern char LRI_counting;
extern char URI_counting;



#endif /* FSM_H_ */
