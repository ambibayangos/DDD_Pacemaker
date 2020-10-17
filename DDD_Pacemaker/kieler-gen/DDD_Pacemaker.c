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
char URI_ex;
char LRI_stop;
char Vsense;
char Asense;
char AVI_ex;
char PVARP_ex;
char AEI_ex;
char VRP_ex;
char LRI_ex;
char stop_LRI;
char stop_AEI;
char stop_URI;
char stop_VRP;
char stop_PVARP;
char stop_AVI;
char start_AVI;
char Vpace;
char start_PVARP;
char start_AEI;
char Apace;
char start_VRP;
char start_LRI;
char start_URI;
char _DDD_pacemaker_local__term;
int _DDD_pacemaker_local_URI_TO;
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
char PRE_g10;
char g11;
char g12;
char g13;
char g14;
char PRE_g14;
char g15;
char g16;
char g17;
char g18;
char g19;
char g19b;
char g20;
char PRE_g20;
char g21;
char g22;
char g23;
char g24;
char g25;
char g26;
char g27;
char PRE_g27;
char g28;
char g28b;
char g29;
char g30;
char PRE_g30;
char g31;
char g32;
char PRE_g32;
char g33;
char g34;
char g35;
char g36;
char g37;
char g38;
char g39;
char g40;
char g41;
char PRE_g41;
char g42;
char g43;
char g44;
char PRE_g44;
char g45;
char g46;
char g47;
char g48;
char g49;
char g50;
char PRE_g50;
char g51;
char g52;
char g53;
char PRE_g53;
char g54;
char g55;
char g56;
char g57;
char g58;
char g59;
char PRE_g59;
char g60;
char g61;
char g62;
char PRE_g62;
char g63;
char g64;
char PRE_g64;
char g65;
char g66;
char g67;
char PRE_g67;
char g68;
char g68b;
char g69;
char g70;
char g71;
char g72;
char g73;
char PRE_g73;
char g74;
char g75;
char g76;
char PRE_g76;
char g77;
char g78;
char g79;
char g80;
char g81;
char g82;
char g83;
char g84;
char g85;
char g86;
char PRE_g86;
char g87;
char g88;
char g89;
char _GO;
char _cg4;
char _cg7;
char _cg11;
char _cg18;
char _cg15;
char _cg23;
char _cg21;
char _cg37;
char _cg28;
char _cg31;
char _cg35;
char _cg33;
char _cg45;
char _cg46;
char _cg42;
char _cg54;
char _cg55;
char _cg51;
char _cg60;
char _cg63;
char _cg69;
char _cg65;
char _cg77;
char _cg78;
char _cg74;
char g12_e1;
char g17_e2;
char g25_e1;
char g39_e2;
char g48_e3;
char g57_e4;
char g71_e5;
char g80_e6;
char g84_e1_fix;
char g84_e1;
char g88_e2;
int _PRE_GO;
void reset(){
   _GO = 1;
   _PRE_GO = 0;
   PRE_g3 = 0;
   PRE_g6 = 0;
   PRE_g10 = 0;
   PRE_g14 = 0;
   PRE_g20 = 0;
   PRE_g27 = 0;
   PRE_g30 = 0;
   PRE_g32 = 0;
   PRE_g41 = 0;
   PRE_g44 = 0;
   PRE_g50 = 0;
   PRE_g53 = 0;
   PRE_g59 = 0;
   PRE_g62 = 0;
   PRE_g64 = 0;
   PRE_g67 = 0;
   PRE_g73 = 0;
   PRE_g76 = 0;
   PRE_g86 = 0;
   return;
}
void tick(){
   if(_PRE_GO == 1){
      _GO = 0;
   }
   {
      g0 = _GO;
      g1 = g0;
      if(g1){
         _DDD_pacemaker_local_URI_TO = 0;
      }
      g2 = g1;
      if(g2){
         _DDD_pacemaker_local__term = 0;
      }
      g4 =(PRE_g3);
      _cg4 = Asense;
      g3 =((g4&&(!(_cg4)))||g2);
      g85 = g0;
      g87 =(PRE_g86);
      g86 =(g85||g87);
      if(g86){
         stop_URI = 0;
         stop_VRP = 0;
         stop_PVARP = 0;
         stop_AVI = 0;
         start_AVI = 0;
         Vpace = 0;
         start_PVARP = 0;
         start_AEI = 0;
         Apace = 0;
         start_VRP = 0;
         start_LRI = 0;
         start_URI = 0;
         LRI_stop = 0;
      }
      g5 =(g4&&_cg4);
      if(g5){
         start_AVI =(start_AVI||1);
      }
      g33 =(PRE_g32);
      _cg33 = Asense;
      g35 =(g33&&(!(_cg33)));
      _cg35 = AEI_ex;
      g36 =(g35&&_cg35);
      if(g36){
         Apace =(Apace||1);
      }
      g21 =(PRE_g20);
      _cg21 = Asense;
      g23 =(g21&&(!(_cg21)));
      _cg23 = Apace;
      g24 =(g23&&_cg23);
      if(g24){
         start_AVI =(start_AVI||1);
      }
      g22 =(g21&&_cg21);
      if(g22){
         start_AVI =(start_AVI||1);
      }
      g7 =(PRE_g6);
      _cg7 = VRP_ex;
      g6 =(g24||g22||g5||(g7&&(!(_cg7))));
      g8 =(g7&&_cg7);
      if(g8){
         _DDD_pacemaker_local__term = 1;
      }
      g9 = g8;
      g11 =(PRE_g10);
      _cg11 = URI_ex;
      g10 =(g9||(g11&&(!(_cg11))));
      g12 =(g11&&_cg11);
      g13 = g8;
      g15 =(PRE_g14);
      _cg15 = Vsense;
      g18 =(g15&&(!(_cg15)));
      _cg18 = AVI_ex;
      g14 =((g18&&(!(_cg18)))||g13);
      g16 =(g15&&_cg15);
      if(g16){
         stop_AVI =(stop_AVI||1);
      }
      g17 =(g16||(g18&&_cg18));
      g12_e1 =(!(g11));
      g17_e2 =(!(g15));
      g19 =((g12_e1||g12)&&(g17_e2||g17)&&(g12||g17));
      g19b = g19;
      if(g19b){
         Vpace =(Vpace||1);
         _DDD_pacemaker_local__term = 0;
      }
      g20 =(g19b||(g23&&(!(_cg23))));
      g26 = g1;
      g34 =(g33&&_cg33);
      if(g34){
         stop_AEI =(stop_AEI||1);
      }
      g65 =(PRE_g64);
      _cg65 = LRI_ex;
      g66 =(g65&&_cg65);
      if(g66){
         Vpace =(Vpace||1);
      }
      g28 =(PRE_g27);
      g28b = g28;
      _cg28 = Vpace;
      g37 =(g28b&&(!(_cg28)));
      _cg37 = Vsense;
      g27 =(g34||(g37&&(!(_cg37)))||g26||g36);
      g29 =(g28b&&_cg28);
      if(g29){
         start_AEI =(start_AEI||1);
      }
      g31 =(PRE_g30);
      _cg31 = PVARP_ex;
      g38 =(g37&&_cg37);
      if(g38){
         start_AEI =(start_AEI||1);
      }
      g30 =(g29||(g31&&(!(_cg31)))||g38);
      g32 =((g31&&_cg31)||(g35&&(!(_cg35))));
      g40 = g1;
      g42 =(PRE_g41);
      _cg42 = Vsense;
      g46 =(g42&&(!(_cg42)));
      _cg46 = Vpace;
      g45 =(PRE_g44);
      _cg45 = PVARP_ex;
      g41 =(g40||(g46&&(!(_cg46)))||(g45&&_cg45));
      g43 =(g42&&_cg42);
      if(g43){
         start_PVARP =(start_PVARP||1);
      }
      g47 =(g46&&_cg46);
      if(g47){
         start_PVARP =(start_PVARP||1);
      }
      g44 =(g43||g47||(g45&&(!(_cg45))));
      g49 = g1;
      g54 =(PRE_g53);
      _cg54 = VRP_ex;
      g51 =(PRE_g50);
      _cg51 = Vsense;
      g55 =(g51&&(!(_cg51)));
      _cg55 = Vpace;
      g50 =((g54&&_cg54)||g49||(g55&&(!(_cg55))));
      g52 =(g51&&_cg51);
      if(g52){
         start_VRP =(start_VRP||1);
      }
      g56 =(g55&&_cg55);
      if(g56){
         start_VRP =(start_VRP||1);
      }
      g53 =(g52||g56||(g54&&(!(_cg54))));
      g58 = g1;
      g60 =(PRE_g59);
      _cg60 = Vsense;
      g59 =(g58||(g60&&(!(_cg60))));
      g61 =(g60&&_cg60);
      if(g61){
         start_LRI =(start_LRI||1);
      }
      g63 =(PRE_g62);
      _cg63 = VRP_ex;
      g68 =(PRE_g67);
      g68b = g68;
      if(g68b){
         start_LRI =(start_LRI||1);
      }
      g62 =(g61||(g63&&(!(_cg63)))||g68b);
      g69 =(g65&&(!(_cg65)));
      _cg69 = Vsense;
      g64 =((g63&&_cg63)||(g69&&(!(_cg69))));
      g70 =(g69&&_cg69);
      if(g70){
         LRI_stop =(LRI_stop||1);
      }
      g67 =(g66||g70);
      g72 = g1;
      g77 =(PRE_g76);
      _cg77 = URI_ex;
      g74 =(PRE_g73);
      _cg74 = Vsense;
      g78 =(g74&&(!(_cg74)));
      _cg78 = Vpace;
      g73 =(g72||(g77&&_cg77)||(g78&&(!(_cg78))));
      g75 =(g74&&_cg74);
      if(g75){
         start_URI =(start_URI||1);
      }
      g79 =(g78&&_cg78);
      if(g79){
         start_URI =(start_URI||1);
      }
      g76 =(g75||(g77&&(!(_cg77)))||g79);
      g25_e1 =(!((g4||g7||g11||g15||g21)));
      g39_e2 =(!((g28||g31||g33)));
      g48_e3 =(!((g42||g45)));
      g57_e4 =(!((g51||g54)));
      g71_e5 =(!((g60||g63||g65||g68)));
      g80_e6 =(!((g74||g77)));
      g84_e1_fix =(g54||g63||g77||g7||g33||g65||g68||g11||g15);
      g84_e1 =(!((g28||g42||g51||g60||g74||g4||g31||g45||g21||g84_e1_fix)));
      g88_e2 =(!(g87));
   }
   PRE_g3 = g3;
   PRE_g6 = g6;
   PRE_g10 = g10;
   PRE_g14 = g14;
   PRE_g20 = g20;
   PRE_g27 = g27;
   PRE_g30 = g30;
   PRE_g32 = g32;
   PRE_g41 = g41;
   PRE_g44 = g44;
   PRE_g50 = g50;
   PRE_g53 = g53;
   PRE_g59 = g59;
   PRE_g62 = g62;
   PRE_g64 = g64;
   PRE_g67 = g67;
   PRE_g73 = g73;
   PRE_g76 = g76;
   PRE_g86 = g86;
   _PRE_GO = _GO;
   return;
}
