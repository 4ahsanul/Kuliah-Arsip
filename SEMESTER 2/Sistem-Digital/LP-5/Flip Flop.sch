DSCH 2.7f
VERSION 6/23/2020 6:09:50 PM
BB(201,90,349,181)
SYM  #button1
BB(201,96,210,104)
TITLE 205 100  #button
MODEL 59
PROP                                                                                                                                    
REC(202,97,6,6,r)
VIS 1
PIN(210,100,0.000,0.000)SET
LIG(209,100,210,100)
LIG(201,104,201,96)
LIG(209,104,201,104)
LIG(209,96,209,104)
LIG(201,96,209,96)
LIG(202,103,202,97)
LIG(208,103,202,103)
LIG(208,97,208,103)
LIG(202,97,208,97)
FSYM
SYM  #button2
BB(201,146,210,154)
TITLE 205 150  #button
MODEL 59
PROP                                                                                                                                    
REC(202,147,6,6,r)
VIS 1
PIN(210,150,0.000,0.000)RESET
LIG(209,150,210,150)
LIG(201,154,201,146)
LIG(209,154,201,154)
LIG(209,146,209,154)
LIG(201,146,209,146)
LIG(202,153,202,147)
LIG(208,153,202,153)
LIG(208,147,208,153)
LIG(202,147,208,147)
FSYM
SYM  #nand2
BB(250,95,285,115)
TITLE 262 106  #&
MODEL 202
PROP                                                                                                                                    
REC(0,-5,0,0, )
VIS 0
PIN(250,110,0.000,0.000)b
PIN(250,100,0.000,0.000)a
PIN(285,105,0.060,0.140)s
LIG(250,110,258,110)
LIG(258,95,258,115)
LIG(277,107,274,111)
LIG(278,105,277,107)
LIG(277,103,278,105)
LIG(274,99,277,103)
LIG(269,96,274,99)
LIG(274,111,269,114)
LIG(269,114,258,115)
LIG(258,95,269,96)
LIG(250,100,258,100)
LIG(282,105,285,105)
LIG(280,105,280,105)
VLG   nand nand2(out,a,b);
FSYM
SYM  #nand2
BB(250,135,285,155)
TITLE 262 146  #&
MODEL 202
PROP                                                                                                                                    
REC(5,5,0,0, )
VIS 0
PIN(250,150,0.000,0.000)b
PIN(250,140,0.000,0.000)a
PIN(285,145,0.060,0.140)s
LIG(250,150,258,150)
LIG(258,135,258,155)
LIG(277,147,274,151)
LIG(278,145,277,147)
LIG(277,143,278,145)
LIG(274,139,277,143)
LIG(269,136,274,139)
LIG(274,151,269,154)
LIG(269,154,258,155)
LIG(258,135,269,136)
LIG(250,140,258,140)
LIG(282,145,285,145)
LIG(280,145,280,145)
VLG   nand nand2(out,a,b);
FSYM
SYM  #light1
BB(343,90,349,104)
TITLE 345 104  #light
MODEL 49
PROP                                                                                                                                    
REC(344,91,4,4,r)
VIS 1
PIN(345,105,0.000,0.000)O
LIG(348,96,348,91)
LIG(348,91,347,90)
LIG(344,91,344,96)
LIG(347,101,347,98)
LIG(346,101,349,101)
LIG(346,103,348,101)
LIG(347,103,349,101)
LIG(343,98,349,98)
LIG(345,98,345,105)
LIG(343,96,343,98)
LIG(349,96,343,96)
LIG(349,98,349,96)
LIG(345,90,344,91)
LIG(347,90,345,90)
FSYM
SYM  #light2
BB(343,130,349,144)
TITLE 345 144  #light
MODEL 49
PROP                                                                                                                                    
REC(344,131,4,4,r)
VIS 1
PIN(345,145,0.000,0.000)O2
LIG(348,136,348,131)
LIG(348,131,347,130)
LIG(344,131,344,136)
LIG(347,141,347,138)
LIG(346,141,349,141)
LIG(346,143,348,141)
LIG(347,143,349,141)
LIG(343,138,349,138)
LIG(345,138,345,145)
LIG(343,136,343,138)
LIG(349,136,343,136)
LIG(349,138,349,136)
LIG(345,130,344,131)
LIG(347,130,345,130)
FSYM
CNC(315 145)
CNC(305 105)
LIG(210,100,250,100)
LIG(210,150,250,150)
LIG(285,145,315,145)
LIG(285,105,305,105)
LIG(230,140,250,140)
LIG(230,110,250,110)
LIG(230,110,230,120)
LIG(230,130,230,140)
LIG(230,120,315,120)
LIG(315,120,315,145)
LIG(315,145,345,145)
LIG(305,105,305,130)
LIG(305,105,345,105)
LIG(305,130,230,130)
TEXT 235 171  #Ffilfimo Yulfiz Ahsanul Hulqi_19102143
FFIG D:\!Kuliah!\!KULIAH!\Praktikum Sistem Digital\Laporan 5\Project DSCH2\Flip Flop.sch
