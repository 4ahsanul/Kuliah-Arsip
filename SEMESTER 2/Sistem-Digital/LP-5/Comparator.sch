DSCH 2.7f
VERSION 6/19/2020 10:28:18 AM
BB(1,-4,169,143)
SYM  #button1
BB(1,-4,10,4)
TITLE 5 0  #button
MODEL 59
PROP                                                                                                                                   
REC(2,-3,6,6,r)
VIS 1
PIN(10,0,0.000,0.000)A 
LIG(9,0,10,0)
LIG(1,4,1,-4)
LIG(9,4,1,4)
LIG(9,-4,9,4)
LIG(1,-4,9,-4)
LIG(2,3,2,-3)
LIG(8,3,2,3)
LIG(8,-3,8,3)
LIG(2,-3,8,-3)
FSYM
SYM  #button2
BB(21,-4,30,4)
TITLE 25 0  #button
MODEL 59
PROP                                                                                                                                   
REC(22,-3,6,6,r)
VIS 1
PIN(30,0,0.000,0.000)B
LIG(29,0,30,0)
LIG(21,4,21,-4)
LIG(29,4,21,4)
LIG(29,-4,29,4)
LIG(21,-4,29,-4)
LIG(22,3,22,-3)
LIG(28,3,22,3)
LIG(28,-3,28,3)
LIG(22,-3,28,-3)
FSYM
SYM  #xnor2
BB(110,15,145,35)
TITLE 127 25  #^
MODEL 612
PROP                                                                                                                                   
REC(75,0,0,0, )
VIS 0
PIN(110,20,0.000,0.000)a
PIN(110,30,0.000,0.000)b
PIN(145,25,0.090,0.070)out
LIG(118,32,114,35)
LIG(122,32,118,35)
LIG(137,27,134,31)
LIG(138,25,137,27)
LIG(137,23,138,25)
LIG(134,19,137,23)
LIG(129,16,134,19)
LIG(134,31,129,34)
LIG(129,34,118,35)
LIG(118,15,129,16)
LIG(124,28,122,32)
LIG(118,15,122,18)
LIG(122,18,124,22)
LIG(124,22,125,25)
LIG(125,25,124,28)
LIG(114,15,118,18)
LIG(118,18,120,22)
LIG(120,22,121,25)
LIG(121,25,120,28)
LIG(120,28,118,32)
LIG(110,20,119,20)
LIG(110,30,119,30)
LIG(142,25,145,25)
LIG(140,25,140,25)
VLG  xnor xnor2(out,a,b);
FSYM
SYM  #and2
BB(110,60,145,80)
TITLE 122 71  #&
MODEL 402
PROP                                                                                                                                   
REC(55,-10,0,0, )
VIS 0
PIN(110,75,0.000,0.000)b
PIN(110,65,0.000,0.000)a
PIN(145,70,0.090,0.070)s
LIG(110,75,118,75)
LIG(118,60,118,80)
LIG(138,70,145,70)
LIG(137,72,134,76)
LIG(138,70,137,72)
LIG(137,68,138,70)
LIG(134,64,137,68)
LIG(129,61,134,64)
LIG(134,76,129,79)
LIG(129,79,118,80)
LIG(118,60,129,61)
LIG(110,65,118,65)
VLG  and and2(out,a,b);
FSYM
SYM  #and2
BB(110,105,145,125)
TITLE 122 116  #&
MODEL 402
PROP                                                                                                                                   
REC(10,0,0,0, )
VIS 0
PIN(110,120,0.000,0.000)b
PIN(110,110,0.000,0.000)a
PIN(145,115,0.090,0.070)s
LIG(110,120,118,120)
LIG(118,105,118,125)
LIG(138,115,145,115)
LIG(137,117,134,121)
LIG(138,115,137,117)
LIG(137,113,138,115)
LIG(134,109,137,113)
LIG(129,106,134,109)
LIG(134,121,129,124)
LIG(129,124,118,125)
LIG(118,105,129,106)
LIG(110,110,118,110)
VLG  and and2(out,a,b);
FSYM
SYM  #inv
BB(45,65,80,85)
TITLE 60 75  #~
MODEL 101
PROP                                                                                                                                   
REC(0,0,0,0, )
VIS 0
PIN(45,75,0.000,0.000)in
PIN(80,75,0.030,0.070)out
LIG(45,75,55,75)
LIG(55,65,55,85)
LIG(55,65,70,75)
LIG(55,85,70,75)
LIG(72,75,72,75)
LIG(74,75,80,75)
VLG  not not1(out,in);
FSYM
SYM  #inv
BB(45,100,80,120)
TITLE 60 110  #~
MODEL 101
PROP                                                                                                                                   
REC(10,0,0,0, )
VIS 0
PIN(45,110,0.000,0.000)in
PIN(80,110,0.030,0.070)out
LIG(45,110,55,110)
LIG(55,100,55,120)
LIG(55,100,70,110)
LIG(55,120,70,110)
LIG(72,110,72,110)
LIG(74,110,80,110)
VLG  not not1(out,in);
FSYM
SYM  #light1
BB(163,10,169,24)
TITLE 165 24  #light
MODEL 49
PROP                                                                                                                                   
REC(164,11,4,4,r)
VIS 1
PIN(165,25,0.000,0.000)Oa=b
LIG(168,16,168,11)
LIG(168,11,167,10)
LIG(164,11,164,16)
LIG(167,21,167,18)
LIG(166,21,169,21)
LIG(166,23,168,21)
LIG(167,23,169,21)
LIG(163,18,169,18)
LIG(165,18,165,25)
LIG(163,16,163,18)
LIG(169,16,163,16)
LIG(169,18,169,16)
LIG(165,10,164,11)
LIG(167,10,165,10)
FSYM
SYM  #light2
BB(163,55,169,69)
TITLE 165 69  #light
MODEL 49
PROP                                                                                                                                   
REC(164,56,4,4,r)
VIS 1
PIN(165,70,0.000,0.000)Oa<b
LIG(168,61,168,56)
LIG(168,56,167,55)
LIG(164,56,164,61)
LIG(167,66,167,63)
LIG(166,66,169,66)
LIG(166,68,168,66)
LIG(167,68,169,66)
LIG(163,63,169,63)
LIG(165,63,165,70)
LIG(163,61,163,63)
LIG(169,61,163,61)
LIG(169,63,169,61)
LIG(165,55,164,56)
LIG(167,55,165,55)
FSYM
SYM  #light3
BB(163,100,169,114)
TITLE 165 114  #light
MODEL 49
PROP                                                                                                                                   
REC(164,101,4,4,r)
VIS 1
PIN(165,115,0.000,0.000)Oa>b
LIG(168,106,168,101)
LIG(168,101,167,100)
LIG(164,101,164,106)
LIG(167,111,167,108)
LIG(166,111,169,111)
LIG(166,113,168,111)
LIG(167,113,169,111)
LIG(163,108,169,108)
LIG(165,108,165,115)
LIG(163,106,163,108)
LIG(169,106,163,106)
LIG(169,108,169,106)
LIG(165,100,164,101)
LIG(167,100,165,100)
FSYM
CNC(15 75)
CNC(35 65)
CNC(15 30)
CNC(35 20)
LIG(10,0,15,0)
LIG(30,0,35,0)
LIG(35,20,35,65)
LIG(35,0,35,20)
LIG(35,110,45,110)
LIG(80,110,110,110)
LIG(15,0,15,30)
LIG(15,120,110,120)
LIG(45,75,15,75)
LIG(15,75,15,120)
LIG(80,75,110,75)
LIG(110,65,35,65)
LIG(35,65,35,110)
LIG(110,30,15,30)
LIG(15,30,15,75)
LIG(110,20,35,20)
LIG(145,25,165,25)
LIG(145,70,165,70)
LIG(145,115,165,115)
TEXT 55 133  #Filfimo Yulfiz Ahsanul Hulqi_19102143
FFIG D:\!Kuliah!\!KULIAH!\Praktikum Sistem Digital\Laporan 5\Project DSCH2\Comparator.sch
