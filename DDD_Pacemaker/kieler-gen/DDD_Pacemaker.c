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
char stop_AEI;
char start_LRI;
char Vsense;
char Asense;
char AVI_ex;
char PVARP_ex;
char AEI_ex;
char VRP_ex;
char LRI_ex;
char stop_LRI;
char start_AVI;
char stop_AVI;
char Vpace;
char start_PVARP;
char start_AEI;
char Apace;
char start_VRP;
char g0;
char g1;
char g2;
char g3;
char PRE_g3;
char g4;
char g5;
char g6;
char PRE_g6;
char g7;
char g8;
char g9;
char g10;
char g11;
char g12;
char g13;
char g14;
char g15;
char PRE_g15;
char g16;
char g16b;
char g17;
char g18;
char PRE_g18;
char g19;
char g20;
char PRE_g20;
char g21;
char g22;
char g23;
char g24;
char g25;
char g26;
char g27;
char g28;
char g29;
char PRE_g29;
char g30;
char g31;
char g32;
char PRE_g32;
char g33;
char g34;
char g35;
char g36;
char g37;
char g38;
char PRE_g38;
char g39;
char g40;
char g41;
char PRE_g41;
char g42;
char g43;
char g44;
char g45;
char g46;
char g47;
char PRE_g47;
char g48;
char g49;
char g50;
char PRE_g50;
char g51;
char g52;
char PRE_g52;
char g53;
char g54;
char g55;
char g56;
char g57;
char g58;
char g59;
char g60;
char g61;
char PRE_g61;
char g62;
char g63;
char PRE_g63;
char g64;
char g65;
char g66;
char g67;
char g68;
char g69;
char PRE_g69;
char g70;
char g71;
char g72;
char _GO;
char _cg11;
char _cg4;
char _cg9;
char _cg7;
char _cg25;
char _cg16;
char _cg19;
char _cg23;
char _cg21;
char _cg33;
char _cg34;
char _cg30;
char _cg42;
char _cg43;
char _cg39;
char _cg57;
char _cg48;
char _cg51;
char _cg55;
char _cg53;
char _cg65;
char _cg62;
char g13_e1;
char g27_e2;
char g36_e3;
char g45_e4;
char g59_e5;
char g66_e6;
char g67_e1;
char g71_e2;
int _PRE_GO;
void reset(){
   _GO = 1;
   _PRE_GO = 0;
   PRE_g3 = 0;
   PRE_g6 = 0;
   PRE_g15 = 0;
   PRE_g18 = 0;
   PRE_g20 = 0;
   PRE_g29 = 0;
   PRE_g32 = 0;
   PRE_g38 = 0;
   PRE_g41 = 0;
   PRE_g47 = 0;
   PRE_g50 = 0;
   PRE_g52 = 0;
   PRE_g61 = 0;
   PRE_g63 = 0;
   PRE_g69 = 0;
   return;
}
void tick(){
   if(_PRE_GO == 1){
      _GO = 0;
   }
   {
      g0 = _GO;
      g1 = g0;
      g2 = g1;
      g70 =(PRE_g69);
      g68 = g0;
      g69 =(g70||g68);
      if(g69){
         start_AVI = 0;
         stop_AVI = 0;
         Vpace = 0;
         start_PVARP = 0;
         start_AEI = 0;
         Apace = 0;
         start_VRP = 0;
         start_LRI = 0;
      }
      g7 =(PRE_g6);
      _cg7 = Vsense;
      g9 =(g7&&(!(_cg7)));
      _cg9 = AVI_ex;
      g10 =(g9&&_cg9);
      if(g10){
         Vpace =(Vpace||1);
      }
      g21 =(PRE_g20);
      _cg21 = Asense;
      g23 =(g21&&(!(_cg21)));
      _cg23 = AEI_ex;
      g24 =(g23&&_cg23);
      if(g24){
         Apace =(Apace||1);
      }
      g4 =(PRE_g3);
      _cg4 = Asense;
      g11 =(g4&&(!(_cg4)));
      _cg11 = Apace;
      g8 =(g7&&_cg7);
      if(g8){
         stop_AVI =(stop_AVI||1);
      }
      g3 =(g10||(g11&&(!(_cg11)))||g8||g2);
      g5 =(g4&&_cg4);
      if(g5){
         start_AVI =(start_AVI||1);
      }
      g12 =(g11&&_cg11);
      if(g12){
         start_AVI =(start_AVI||1);
      }
      g6 =(g12||g5||(g9&&(!(_cg9))));
      g14 = g1;
      g22 =(g21&&_cg21);
      if(g22){
         stop_AEI =(stop_AEI||1);
      }
      g53 =(PRE_g52);
      _cg53 = Vsense;
      g55 =(g53&&(!(_cg53)));
      _cg55 = LRI_ex;
      g56 =(g55&&_cg55);
      if(g56){
         Vpace =(Vpace||1);
      }
      g16 =(PRE_g15);
      g16b = g16;
      _cg16 = Vpace;
      g25 =(g16b&&(!(_cg16)));
      _cg25 = Vsense;
      g15 =(g22||g14||g24||(g25&&(!(_cg25))));
      g17 =(g16b&&_cg16);
      if(g17){
         start_AEI =(start_AEI||1);
      }
      g19 =(PRE_g18);
      _cg19 = PVARP_ex;
      g26 =(g25&&_cg25);
      if(g26){
         start_AEI =(start_AEI||1);
      }
      g18 =(g17||(g19&&(!(_cg19)))||g26);
      g20 =((g19&&_cg19)||(g23&&(!(_cg23))));
      g28 = g1;
      g30 =(PRE_g29);
      _cg30 = Vsense;
      g34 =(g30&&(!(_cg30)));
      _cg34 = Vpace;
      g33 =(PRE_g32);
      _cg33 = PVARP_ex;
      g29 =(g28||(g34&&(!(_cg34)))||(g33&&_cg33));
      g31 =(g30&&_cg30);
      if(g31){
         start_PVARP =(start_PVARP||1);
      }
      g35 =(g34&&_cg34);
      if(g35){
         start_PVARP =(start_PVARP||1);
      }
      g32 =(g31||g35||(g33&&(!(_cg33))));
      g37 = g1;
      g42 =(PRE_g41);
      _cg42 = VRP_ex;
      g39 =(PRE_g38);
      _cg39 = Vsense;
      g43 =(g39&&(!(_cg39)));
      _cg43 = Vpace;
      g38 =(g37||(g42&&_cg42)||(g43&&(!(_cg43))));
      g40 =(g39&&_cg39);
      if(g40){
         start_VRP =(start_VRP||1);
      }
      g44 =(g43&&_cg43);
      if(g44){
         start_VRP =(start_VRP||1);
      }
      g41 =(g40||(g42&&(!(_cg42)))||g44);
      g46 = g1;
      g54 =(g53&&_cg53);
      if(g54){
         stop_LRI =(stop_LRI||1);
      }
      g48 =(PRE_g47);
      _cg48 = Vsense;
      g57 =(g48&&(!(_cg48)));
      _cg57 = Vpace;
      g47 =(g54||g56||(g57&&(!(_cg57)))||g46);
      g49 =(g48&&_cg48);
      if(g49){
         start_LRI =(start_LRI||1);
      }
      g51 =(PRE_g50);
      _cg51 = VRP_ex;
      g58 =(g57&&_cg57);
      if(g58){
         start_LRI =(start_LRI||1);
      }
      g50 =(g49||(g51&&(!(_cg51)))||g58);
      g52 =((g51&&_cg51)||(g55&&(!(_cg55))));
      g60 = g1;
      g62 =(PRE_g61);
      _cg62 = Vsense;
      g65 =(g62&&(!(_cg62)));
      _cg65 = Vpace;
      g61 =((g65&&(!(_cg65)))||g60);
      g64 =(PRE_g63);
      g63 =((g65&&_cg65)||g64||(g62&&_cg62));
      g13_e1 =(!((g4||g7)));
      g27_e2 =(!((g16||g19||g21)));
      g36_e3 =(!((g30||g33)));
      g45_e4 =(!((g39||g42)));
      g59_e5 =(!((g48||g51||g53)));
      g66_e6 =(!((g62||g64)));
      g67_e1 =(!((g4||g16||g30||g39||g48||g62||g64||g7||g19||g33||g42||g51||g21||g53)));
      g71_e2 =(!(g70));
   }
   PRE_g3 = g3;
   PRE_g6 = g6;
   PRE_g15 = g15;
   PRE_g18 = g18;
   PRE_g20 = g20;
   PRE_g29 = g29;
   PRE_g32 = g32;
   PRE_g38 = g38;
   PRE_g41 = g41;
   PRE_g47 = g47;
   PRE_g50 = g50;
   PRE_g52 = g52;
   PRE_g61 = g61;
   PRE_g63 = g63;
   PRE_g69 = g69;
   _PRE_GO = _GO;
   return;
}
