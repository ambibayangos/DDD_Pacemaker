/*****************************************************************************/
/*                 G E N E R A T E D       C    C O D E                      */
/*****************************************************************************/
/* KIELER - Kiel Integrated Environment for Layout Eclipse RichClient        */
/*                                                                           */
/* http://www.informatik.uni-kiel.de/rtsys/kieler/                           */
/* Copyright 2014 by                                                         */
/* + Kiel University                                                         */
/*   + Department of Computer Science                                        */
/*     + Real-Time and Embedded Systems Group                                */
/*                                                                           */
/* This code is provided under the terms of the Eclipse Public License (EPL).*/
/*****************************************************************************/
char A;
char B;
char R;
char O;
char g0;
char g1;
char g2;
char g3;
char PRE_g3;
char g4;
char g5;
char g6;
char g7;
char g8;
char PRE_g8;
char g9;
char g10;
char g11;
char g12;
char g13;
char g14;
char PRE_g14;
char g15;
char g16;
char _GO;
char _cg12;
char _cg15;
char _cg6;
char _cg4;
char _cg11;
char _cg9;
char g5_e1;
char g10_e2;
int _PRE_GO;
void reset(){
   _GO = 1;
   _PRE_GO = 0;
   PRE_g3 = 0;
   PRE_g8 = 0;
   PRE_g14 = 0;
   return;
}
void tick(){
   if(_PRE_GO == 1){
      _GO = 0;
   }
   {
      g0 = _GO;
      if(g0){
         O = 0;
      }
      g4 =(PRE_g3);
      g5_e1 =(!(g4));
      _cg4 = R;
      g6 =(g4&&(!(_cg4)));
      _cg6 = A;
      g5 =((g4&&_cg4)||(g6&&_cg6));
      g9 =(PRE_g8);
      g10_e2 =(!(g9));
      _cg9 = R;
      g11 =(g9&&(!(_cg9)));
      _cg11 = B;
      g10 =((g11&&_cg11)||(g9&&_cg9));
      g12 =((g5_e1||g5)&&(g10_e2||g10)&&(g5||g10));
      _cg12 = R;
      g15 =(PRE_g14);
      _cg15 = R;
      g1 =((g12&&_cg12)||g0||(g15&&_cg15));
      if(g1){
         O = 0;
      }
      g2 = g1;
      g3 =(g2||(g6&&(!(_cg6))));
      g7 = g1;
      g8 =(g7||(g11&&(!(_cg11))));
      g13 =(g12&&(!(_cg12)));
      if(g13){
         O = 1;
      }
      g14 =((g15&&(!(_cg15)))||g13);
   }
   PRE_g3 = g3;
   PRE_g8 = g8;
   PRE_g14 = g14;
   _PRE_GO = _GO;
   return;
}
