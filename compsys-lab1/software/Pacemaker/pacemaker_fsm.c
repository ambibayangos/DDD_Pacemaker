/*
 * pacemaker_fsm.c
 *
 *  Created on: 20/10/2020
 *      Author: ambib
 */

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
char VR;
char Vsense;
char Asense;
char AVI_ex;
char PVARP_ex;
char AEI_ex;
char VRP_ex;
char LRI_ex;
char stop_URI;
char stop_VRP;
char stop_PVARP;
char stop_AVI;
char start_AVI;
char stop_LRI;
char stop_AEI;
char Vpace;
char start_PVARP;
char start_AEI;
char Apace;
char start_VRP;
char start_LRI;
char start_URI;
char AVI_counting;
char PVARP_counting;
char VRP_counting;
char AEI_counting;
char LRI_counting;
char URI_counting;
char AR;
char g0;
char g1;
char g2;
char g3;
char PRE_g3;
char g4;
char g5;
char PRE_g5;
char g6;
char g7;
char g8;
char PRE_g8;
char g9;
char g10;
char g11;
char g12;
char PRE_g12;
char g13;
char g14;
char g15;
char g16;
char g17;
char g18;
char g19;
char g20;
char g21;
char PRE_g21;
char g22;
char g22b;
char g23;
char g24;
char PRE_g24;
char g25;
char g26;
char PRE_g26;
char g27;
char g28;
char g29;
char g30;
char g31;
char g32;
char g33;
char g34;
char PRE_g34;
char g35;
char g36;
char g37;
char PRE_g37;
char g38;
char g39;
char PRE_g39;
char g40;
char g41;
char g42;
char g43;
char g44;
char g45;
char g46;
char g47;
char g48;
char g49;
char g50;
char g51;
char PRE_g51;
char g52;
char g53;
char g54;
char PRE_g54;
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
char g64;
char PRE_g64;
char g65;
char g66;
char PRE_g66;
char g67;
char g68;
char g69;
char PRE_g69;
char g70;
char g70b;
char g71;
char g72;
char g73;
char g74;
char g75;
char g76;
char g77;
char PRE_g77;
char g78;
char g79;
char g80;
char PRE_g80;
char g81;
char g82;
char g83;
char g84;
char g85;
char PRE_g85;
char g86;
char g87;
char PRE_g87;
char g88;
char g89;
char g90;
char g91;
char g92;
char g93;
char PRE_g93;
char g94;
char g94b;
char g95;
char PRE_g95;
char g96;
char g97;
char g98;
char g99;
char g100;
char PRE_g100;
char g101;
char g101b;
char g102;
char PRE_g102;
char g103;
char g104;
char g105;
char g106;
char g107;
char PRE_g107;
char g108;
char g108b;
char g109;
char PRE_g109;
char g110;
char g111;
char g112;
char g113;
char g114;
char PRE_g114;
char g115;
char g115b;
char g116;
char PRE_g116;
char g117;
char g118;
char g119;
char g120;
char g121;
char PRE_g121;
char g122;
char g122b;
char g123;
char PRE_g123;
char g124;
char g125;
char g126;
char g127;
char g128;
char PRE_g128;
char g129;
char g129b;
char g130;
char PRE_g130;
char g131;
char g132;
char g133;
char g134;
char g135;
char g136;
char PRE_g136;
char g137;
char g138;
char g139;
char _GO;
char _cg4;
char _cg18;
char _cg6;
char _cg16;
char _cg9;
char _cg10;
char _cg14;
char _cg31;
char _cg22;
char _cg25;
char _cg29;
char _cg27;
char _cg43;
char _cg48;
char _cg35;
char _cg46;
char _cg38;
char _cg44;
char _cg40;
char _cg42;
char _cg55;
char _cg58;
char _cg52;
char _cg56;
char _cg62;
char _cg65;
char _cg73;
char _cg67;
char _cg71;
char _cg90;
char _cg78;
char _cg81;
char _cg88;
char _cg82;
char _cg83;
char _cg96;
char _cg94;
char _cg103;
char _cg101;
char _cg110;
char _cg108;
char _cg117;
char _cg115;
char _cg124;
char _cg122;
char _cg131;
char _cg129;
char g19_e1;
char g32_e2;
char g49_e3;
char g59_e4;
char g75_e5;
char g91_e6;
char g98_e7;
char g105_e8;
char g112_e9;
char g119_e10;
char g126_e11;
char g133_e12;
char g134_fix0;
char g134_fix1;
char g134_fix2;
char g134_fix3;
char g134_e1_fix_fix;
char g134_e1_fix;
char g134_e1;
char g138_e2;
int _PRE_GO;
void reset(){
   _GO = 1;
   _PRE_GO = 0;
   PRE_g3 = 0;
   PRE_g5 = 0;
   PRE_g8 = 0;
   PRE_g12 = 0;
   PRE_g21 = 0;
   PRE_g24 = 0;
   PRE_g26 = 0;
   PRE_g34 = 0;
   PRE_g37 = 0;
   PRE_g39 = 0;
   PRE_g51 = 0;
   PRE_g54 = 0;
   PRE_g61 = 0;
   PRE_g64 = 0;
   PRE_g66 = 0;
   PRE_g69 = 0;
   PRE_g77 = 0;
   PRE_g80 = 0;
   PRE_g85 = 0;
   PRE_g87 = 0;
   PRE_g93 = 0;
   PRE_g95 = 0;
   PRE_g100 = 0;
   PRE_g102 = 0;
   PRE_g107 = 0;
   PRE_g109 = 0;
   PRE_g114 = 0;
   PRE_g116 = 0;
   PRE_g121 = 0;
   PRE_g123 = 0;
   PRE_g128 = 0;
   PRE_g130 = 0;
   PRE_g136 = 0;
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
      g135 = g0;
      g137 =(PRE_g136);
      g136 =(g135||g137);
      if(g136){
         stop_URI = 0;
         stop_VRP = 0;
         stop_PVARP = 0;
         stop_AVI = 0;
         start_AVI = 0;
         stop_LRI = 0;
         stop_AEI = 0;
         Vpace = 0;
         start_PVARP = 0;
         start_AEI = 0;
         Apace = 0;
         start_VRP = 0;
         start_LRI = 0;
         start_URI = 0;
         AVI_counting = 0;
         PVARP_counting = 0;
         VRP_counting = 0;
         AEI_counting = 0;
         LRI_counting = 0;
         URI_counting = 0;
         AR = 0;
         VR = 0;
      }
      g9 =(PRE_g8);
      _cg9 = AVI_ex;
      g14 =(g9&&(!(_cg9)));
      _cg14 = Vsense;
      g15 =(g14&&_cg14);
      if(g15){
         stop_AVI =(stop_AVI||1);
      }
      g124 =(PRE_g123);
      _cg124 = URI_ex;
      g125 =(g124&&(!(_cg124)));
      if(g125){
         URI_counting =(URI_counting||1);
      }
      g13 =(PRE_g12);
      g10 =(g13||(g9&&_cg9));
      _cg10 =(!(URI_counting));
      g11 =(g10&&_cg10);
      if(g11){
         Vpace =(Vpace||1);
      }
      g67 =(PRE_g66);
      _cg67 = LRI_ex;
      g68 =(g67&&_cg67);
      if(g68){
         Vpace =(Vpace||1);
      }
      g16 =(g14&&(!(_cg14)));
      _cg16 = Vpace;
      g17 =(g16&&_cg16);
      if(g17){
         stop_AVI =(stop_AVI||1);
      }
      g4 =(PRE_g3);
      _cg4 = PVARP_ex;
      g3 =(g15||g2||g11||g17||(g4&&(!(_cg4))));
      g27 =(PRE_g26);
      _cg27 = Asense;
      g29 =(g27&&(!(_cg27)));
      _cg29 = AEI_ex;
      g30 =(g29&&_cg29);
      if(g30){
         Apace =(Apace||1);
      }
      g6 =(PRE_g5);
      _cg6 = Asense;
      g18 =(g6&&(!(_cg6)));
      _cg18 = Apace;
      g5 =((g18&&(!(_cg18)))||(g4&&_cg4));
      g7 =((g18&&_cg18)||(g6&&_cg6));
      if(g7){
         start_AVI =(start_AVI||1);
      }
      g8 =(g7||(g16&&(!(_cg16))));
      g12 =(g10&&(!(_cg10)));
      g20 = g1;
      g28 =(g27&&_cg27);
      if(g28){
         stop_AEI =(stop_AEI||1);
      }
      g22 =(PRE_g21);
      g22b = g22;
      _cg22 = Vpace;
      g31 =(g22b&&(!(_cg22)));
      _cg31 = Vsense;
      g21 =(g30||g28||g20||(g31&&(!(_cg31))));
      g23 =((g31&&_cg31)||(g22b&&_cg22));
      if(g23){
         start_AEI =(start_AEI||1);
      }
      g25 =(PRE_g24);
      _cg25 = PVARP_ex;
      g24 =((g25&&(!(_cg25)))||g23);
      g26 =((g25&&_cg25)||(g29&&(!(_cg29))));
      g33 = g1;
      g40 =(PRE_g39);
      _cg40 = Vsense;
      g42 =(g40&&(!(_cg40)));
      _cg42 = Vpace;
      g43 =(g42&&(!(_cg42)));
      _cg43 = PVARP_ex;
      g35 =(PRE_g34);
      _cg35 = Vsense;
      g48 =(g35&&(!(_cg35)));
      _cg48 = Vpace;
      g34 =((g43&&_cg43)||g33||(g48&&(!(_cg48))));
      g41 =((g40&&_cg40)||(g42&&_cg42));
      if(g41){
         stop_PVARP =(stop_PVARP||1);
      }
      g36 =((g48&&_cg48)||(g35&&_cg35)||g41);
      if(g36){
         start_PVARP =(start_PVARP||1);
      }
      g38 =(PRE_g37);
      _cg38 = VRP_ex;
      g46 =(g38&&(!(_cg38)));
      _cg46 = Asense;
      g47 =(g46&&_cg46);
      if(g47){
         AR =(AR||1);
      }
      g37 =(g47||g36||(g46&&(!(_cg46))));
      g44 =(g43&&(!(_cg43)));
      _cg44 = Asense;
      g45 =(g44&&_cg44);
      if(g45){
         AR =(AR||1);
      }
      g39 =((g38&&_cg38)||g45||(g44&&(!(_cg44))));
      g50 = g1;
      g52 =(PRE_g51);
      _cg52 = Vsense;
      g58 =(g52&&(!(_cg52)));
      _cg58 = Vpace;
      g55 =(PRE_g54);
      _cg55 = VRP_ex;
      g51 =((g58&&(!(_cg58)))||g50||(g55&&_cg55));
      g53 =((g52&&_cg52)||(g58&&_cg58));
      if(g53){
         start_VRP =(start_VRP||1);
      }
      g56 =(g55&&(!(_cg55)));
      _cg56 = Vsense;
      g57 =(g56&&_cg56);
      if(g57){
         VR =(VR||1);
      }
      g54 =(g53||g57||(g56&&(!(_cg56))));
      g60 = g1;
      g62 =(PRE_g61);
      _cg62 = Vsense;
      g61 =(g60||(g62&&(!(_cg62))));
      g63 =(g62&&_cg62);
      if(g63){
         start_LRI =(start_LRI||1);
      }
      g65 =(PRE_g64);
      _cg65 = VRP_ex;
      g70 =(PRE_g69);
      g70b = g70;
      if(g70b){
         start_LRI =(start_LRI||1);
      }
      g64 =((g65&&(!(_cg65)))||g70b||g63);
      g71 =(g67&&(!(_cg67)));
      _cg71 = Vsense;
      g73 =(g71&&(!(_cg71)));
      _cg73 = Vpace;
      g66 =((g73&&(!(_cg73)))||(g65&&_cg65));
      g72 =(g71&&_cg71);
      if(g72){
         stop_LRI =(stop_LRI||1);
      }
      g74 =(g73&&_cg73);
      if(g74){
         stop_LRI =(stop_LRI||1);
      }
      g69 =(g68||g72||g74);
      g76 = g1;
      g78 =(PRE_g77);
      _cg78 = Vsense;
      g90 =(g78&&(!(_cg78)));
      _cg90 = Vpace;
      g77 =((g90&&(!(_cg90)))||g76);
      g88 =(PRE_g87);
      _cg88 = Vsense;
      g81 =(PRE_g80);
      _cg81 = VRP_ex;
      g82 =((g88&&(!(_cg88)))||(g81&&_cg81));
      _cg82 = URI_ex;
      g86 =(PRE_g85);
      g83 =((g82&&_cg82)||g86);
      _cg83 = Vpace;
      g84 =(g83&&_cg83);
      if(g84){
         start_URI =(start_URI||1);
      }
      g89 =(g88&&_cg88);
      if(g89){
         stop_URI =(stop_URI||1);
      }
      g79 =((g78&&_cg78)||g84||g89||(g90&&_cg90));
      if(g79){
         start_URI =(start_URI||1);
      }
      g80 =(g79||(g81&&(!(_cg81))));
      g85 =(g83&&(!(_cg83)));
      g87 =(g82&&(!(_cg82)));
      g92 = g1;
      g96 =(PRE_g95);
      _cg96 = AVI_ex;
      g94 =(PRE_g93);
      g94b = g94;
      _cg94 = start_AVI;
      g93 =(g92||(g96&&_cg96)||(g94b&&(!(_cg94))));
      g97 =(g96&&(!(_cg96)));
      if(g97){
         AVI_counting =(AVI_counting||1);
      }
      g95 =(g97||(g94b&&_cg94));
      g99 = g1;
      g103 =(PRE_g102);
      _cg103 = PVARP_ex;
      g101 =(PRE_g100);
      g101b = g101;
      _cg101 = start_PVARP;
      g100 =(g99||(g103&&_cg103)||(g101b&&(!(_cg101))));
      g104 =(g103&&(!(_cg103)));
      if(g104){
         PVARP_counting =(PVARP_counting||1);
      }
      g102 =((g101b&&_cg101)||g104);
      g106 = g1;
      g110 =(PRE_g109);
      _cg110 = AEI_ex;
      g108 =(PRE_g107);
      g108b = g108;
      _cg108 = start_AEI;
      g107 =((g110&&_cg110)||(g108b&&(!(_cg108)))||g106);
      g111 =(g110&&(!(_cg110)));
      if(g111){
         AEI_counting =(AEI_counting||1);
      }
      g109 =((g108b&&_cg108)||g111);
      g113 = g1;
      g117 =(PRE_g116);
      _cg117 = LRI_ex;
      g115 =(PRE_g114);
      g115b = g115;
      _cg115 = start_LRI;
      g114 =(g113||(g117&&_cg117)||(g115b&&(!(_cg115))));
      g118 =(g117&&(!(_cg117)));
      if(g118){
         LRI_counting =(LRI_counting||1);
      }
      g116 =((g115b&&_cg115)||g118);
      g120 = g1;
      g122 =(PRE_g121);
      g122b = g122;
      _cg122 = start_URI;
      g121 =(g120||(g124&&_cg124)||(g122b&&(!(_cg122))));
      g123 =(g125||(g122b&&_cg122));
      g127 = g1;
      g131 =(PRE_g130);
      _cg131 = VRP_ex;
      g129 =(PRE_g128);
      g129b = g129;
      _cg129 = start_VRP;
      g128 =(g127||(g131&&_cg131)||(g129b&&(!(_cg129))));
      g132 =(g131&&(!(_cg131)));
      if(g132){
         VRP_counting =(VRP_counting||1);
      }
      g130 =((g129b&&_cg129)||g132);
      g19_e1 =(!((g4||g6||g9||g13)));
      g32_e2 =(!((g22||g25||g27)));
      g49_e3 =(!((g35||g38||g40)));
      g59_e4 =(!((g52||g55)));
      g75_e5 =(!((g62||g65||g67||g70)));
      g91_e6 =(!((g78||g81||g88||g86)));
      g98_e7 =(!((g94||g96)));
      g105_e8 =(!((g101||g103)));
      g112_e9 =(!((g108||g110)));
      g119_e10 =(!((g115||g117)));
      g126_e11 =(!((g122||g124)));
      g133_e12 =(!((g129||g131)));
      g134_fix0 =((g19_e1||g19)&&(g32_e2||g32)&&(g49_e3||g49)&&(g59_e4||g59));
      g134_fix1 =(g134_fix0&&(g75_e5||g75)&&(g91_e6||g91)&&(g98_e7||g98));
      g134_fix2 =(g19||g32||g49||g59);
      g134_fix3 =(g134_fix2||g75||g91||g98);
      g134_e1_fix_fix =(g117||g124||g131||g25||g38||g55||g65||g81||g9||g27||g40||g67||g88||g86);
      g134_e1_fix =(g108||g115||g122||g129||g6||g96||g103||g110||g13||g134_e1_fix_fix);
      g134_e1 =(!((g4||g22||g35||g52||g62||g78||g94||g101||g70||g134_e1_fix)));
      g138_e2 =(!(g137));
   }
   PRE_g3 = g3;
   PRE_g5 = g5;
   PRE_g8 = g8;
   PRE_g12 = g12;
   PRE_g21 = g21;
   PRE_g24 = g24;
   PRE_g26 = g26;
   PRE_g34 = g34;
   PRE_g37 = g37;
   PRE_g39 = g39;
   PRE_g51 = g51;
   PRE_g54 = g54;
   PRE_g61 = g61;
   PRE_g64 = g64;
   PRE_g66 = g66;
   PRE_g69 = g69;
   PRE_g77 = g77;
   PRE_g80 = g80;
   PRE_g85 = g85;
   PRE_g87 = g87;
   PRE_g93 = g93;
   PRE_g95 = g95;
   PRE_g100 = g100;
   PRE_g102 = g102;
   PRE_g107 = g107;
   PRE_g109 = g109;
   PRE_g114 = g114;
   PRE_g116 = g116;
   PRE_g121 = g121;
   PRE_g123 = g123;
   PRE_g128 = g128;
   PRE_g130 = g130;
   PRE_g136 = g136;
   _PRE_GO = _GO;
   return;
}



