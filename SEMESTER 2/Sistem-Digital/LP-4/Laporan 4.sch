DSCH 2.7f
VERSION 6/9/2020 7:58:20 PM
BB(51,-24,244,275)
SYM  #button1
BB(51,-4,60,4)
TITLE 55 0  #button
MODEL 59
PROP                                                                                                                                   
REC(52,-3,6,6,r)
VIS 1
PIN(60,0,0.000,0.000)X
LIG(59,0,60,0)
LIG(51,4,51,-4)
LIG(59,4,51,4)
LIG(59,-4,59,4)
LIG(51,-4,59,-4)
LIG(52,3,52,-3)
LIG(58,3,52,3)
LIG(58,-3,58,3)
LIG(52,-3,58,-3)
FSYM
SYM  #button2
BB(51,21,60,29)
TITLE 55 25  #button
MODEL 59
PROP                                                                                                                                   
REC(52,22,6,6,r)
VIS 1
PIN(60,25,0.000,0.000)Y
LIG(59,25,60,25)
LIG(51,29,51,21)
LIG(59,29,51,29)
LIG(59,21,59,29)
LIG(51,21,59,21)
LIG(52,28,52,22)
LIG(58,28,52,28)
LIG(58,22,58,28)
LIG(52,22,58,22)
FSYM
SYM  #button3
BB(51,46,60,54)
TITLE 55 50  #button
MODEL 59
PROP                                                                                                                                   
REC(52,47,6,6,r)
VIS 1
PIN(60,50,0.000,0.000)Z
LIG(59,50,60,50)
LIG(51,54,51,46)
LIG(59,54,51,54)
LIG(59,46,59,54)
LIG(51,46,59,46)
LIG(52,53,52,47)
LIG(58,53,52,53)
LIG(58,47,58,53)
LIG(52,47,58,47)
FSYM
SYM  #inv
BB(100,-10,135,10)
TITLE 115 0  #~
MODEL 101
PROP                                                                                                                                   
REC(5,0,0,0, )
VIS 0
PIN(100,0,0.000,0.000)in
PIN(135,0,0.030,0.070)out
LIG(100,0,110,0)
LIG(110,-10,110,10)
LIG(110,-10,125,0)
LIG(110,10,125,0)
LIG(127,0,127,0)
LIG(129,0,135,0)
VLG  not not1(out,in);
FSYM
SYM  #and2
BB(155,5,190,25)
TITLE 167 16  #&
MODEL 402
PROP                                                                                                                                   
REC(0,-5,0,0, )
VIS 0
PIN(155,20,0.000,0.000)b
PIN(155,10,0.000,0.000)a
PIN(190,15,0.090,0.070)s
LIG(155,20,163,20)
LIG(163,5,163,25)
LIG(183,15,190,15)
LIG(182,17,179,21)
LIG(183,15,182,17)
LIG(182,13,183,15)
LIG(179,9,182,13)
LIG(174,6,179,9)
LIG(179,21,174,24)
LIG(174,24,163,25)
LIG(163,5,174,6)
LIG(155,10,163,10)
VLG  and and2(out,a,b);
FSYM
SYM  #and2
BB(155,35,190,55)
TITLE 167 46  #&
MODEL 402
PROP                                                                                                                                   
REC(0,0,0,0, )
VIS 0
PIN(155,50,0.000,0.000)b
PIN(155,40,0.000,0.000)a
PIN(190,45,0.090,0.070)s
LIG(155,50,163,50)
LIG(163,35,163,55)
LIG(183,45,190,45)
LIG(182,47,179,51)
LIG(183,45,182,47)
LIG(182,43,183,45)
LIG(179,39,182,43)
LIG(174,36,179,39)
LIG(179,51,174,54)
LIG(174,54,163,55)
LIG(163,35,174,36)
LIG(155,40,163,40)
VLG  and and2(out,a,b);
FSYM
SYM  #or2
BB(205,20,240,40)
TITLE 225 30  #|
MODEL 502
PROP                                                                                                                                   
REC(0,0,0,0, )
VIS 0
PIN(205,25,0.000,0.000)a
PIN(205,35,0.000,0.000)b
PIN(240,30,0.090,0.070)s
LIG(205,35,218,35)
LIG(217,37,213,40)
LIG(233,30,240,30)
LIG(232,32,229,36)
LIG(233,30,232,32)
LIG(232,28,233,30)
LIG(229,24,232,28)
LIG(224,21,229,24)
LIG(229,36,224,39)
LIG(224,39,213,40)
LIG(213,20,224,21)
LIG(219,33,217,37)
LIG(213,20,217,23)
LIG(217,23,219,27)
LIG(219,27,220,30)
LIG(220,30,219,33)
LIG(205,25,218,25)
VLG  or or2(s,a,b);
FSYM
SYM  #light1
BB(238,15,244,29)
TITLE 240 29  #light
MODEL 49
PROP                                                                                                                                   
REC(239,16,4,4,r)
VIS 1
PIN(240,30,0.000,0.000)out1
LIG(243,21,243,16)
LIG(243,16,242,15)
LIG(239,16,239,21)
LIG(242,26,242,23)
LIG(241,26,244,26)
LIG(241,28,243,26)
LIG(242,28,244,26)
LIG(238,23,244,23)
LIG(240,23,240,30)
LIG(238,21,238,23)
LIG(244,21,238,21)
LIG(244,23,244,21)
LIG(240,15,239,16)
LIG(242,15,240,15)
FSYM
SYM  #button4
BB(76,-24,85,-16)
TITLE 80 -20  #button
MODEL 59
PROP                                                                                                                                   
REC(77,-23,6,6,r)
VIS 1
PIN(85,-20,0.000,0.000)RANGKAIAN PERCOBAAN
LIG(84,-20,85,-20)
LIG(76,-16,76,-24)
LIG(84,-16,76,-16)
LIG(84,-24,84,-16)
LIG(76,-24,84,-24)
LIG(77,-17,77,-23)
LIG(83,-17,77,-17)
LIG(83,-23,83,-17)
LIG(77,-23,83,-23)
FSYM
SYM  #button5
BB(76,81,85,89)
TITLE 80 85  #button
MODEL 59
PROP                                                                                                                                   
REC(77,82,6,6,r)
VIS 1
PIN(85,85,0.000,0.000)RANGKAIAN No 3
LIG(84,85,85,85)
LIG(76,89,76,81)
LIG(84,89,76,89)
LIG(84,81,84,89)
LIG(76,81,84,81)
LIG(77,88,77,82)
LIG(83,88,77,88)
LIG(83,82,83,88)
LIG(77,82,83,82)
FSYM
SYM  #button6
BB(51,96,60,104)
TITLE 55 100  #button
MODEL 59
PROP                                                                                                                                   
REC(52,97,6,6,r)
VIS 1
PIN(60,100,0.000,0.000)X
LIG(59,100,60,100)
LIG(51,104,51,96)
LIG(59,104,51,104)
LIG(59,96,59,104)
LIG(51,96,59,96)
LIG(52,103,52,97)
LIG(58,103,52,103)
LIG(58,97,58,103)
LIG(52,97,58,97)
FSYM
SYM  #button7
BB(51,121,60,129)
TITLE 55 125  #button
MODEL 59
PROP                                                                                                                                   
REC(52,122,6,6,r)
VIS 1
PIN(60,125,0.000,0.000)Y
LIG(59,125,60,125)
LIG(51,129,51,121)
LIG(59,129,51,129)
LIG(59,121,59,129)
LIG(51,121,59,121)
LIG(52,128,52,122)
LIG(58,128,52,128)
LIG(58,122,58,128)
LIG(52,122,58,122)
FSYM
SYM  #button8
BB(51,146,60,154)
TITLE 55 150  #button
MODEL 59
PROP                                                                                                                                   
REC(52,147,6,6,r)
VIS 1
PIN(60,150,0.000,0.000)Z
LIG(59,150,60,150)
LIG(51,154,51,146)
LIG(59,154,51,154)
LIG(59,146,59,154)
LIG(51,146,59,146)
LIG(52,153,52,147)
LIG(58,153,52,153)
LIG(58,147,58,153)
LIG(52,147,58,147)
FSYM
SYM  #inv
BB(85,125,120,145)
TITLE 100 135  #~
MODEL 101
PROP                                                                                                                                   
REC(0,0,0,0, )
VIS 0
PIN(85,135,0.000,0.000)in
PIN(120,135,0.030,0.070)out
LIG(85,135,95,135)
LIG(95,125,95,145)
LIG(95,125,110,135)
LIG(95,145,110,135)
LIG(112,135,112,135)
LIG(114,135,120,135)
VLG  not not1(out,in);
FSYM
SYM  #and2
BB(135,130,170,150)
TITLE 147 141  #&
MODEL 402
PROP                                                                                                                                   
REC(0,0,0,0, )
VIS 0
PIN(135,145,0.000,0.000)b
PIN(135,135,0.000,0.000)a
PIN(170,140,0.090,0.070)s
LIG(135,145,143,145)
LIG(143,130,143,150)
LIG(163,140,170,140)
LIG(162,142,159,146)
LIG(163,140,162,142)
LIG(162,138,163,140)
LIG(159,134,162,138)
LIG(154,131,159,134)
LIG(159,146,154,149)
LIG(154,149,143,150)
LIG(143,130,154,131)
LIG(135,135,143,135)
VLG  and and2(out,a,b);
FSYM
SYM  #and2
BB(135,100,170,120)
TITLE 147 111  #&
MODEL 402
PROP                                                                                                                                   
REC(0,0,0,0, )
VIS 0
PIN(135,115,0.000,0.000)b
PIN(135,105,0.000,0.000)a
PIN(170,110,0.090,0.070)s
LIG(135,115,143,115)
LIG(143,100,143,120)
LIG(163,110,170,110)
LIG(162,112,159,116)
LIG(163,110,162,112)
LIG(162,108,163,110)
LIG(159,104,162,108)
LIG(154,101,159,104)
LIG(159,116,154,119)
LIG(154,119,143,120)
LIG(143,100,154,101)
LIG(135,105,143,105)
VLG  and and2(out,a,b);
FSYM
SYM  #or2
BB(190,115,225,135)
TITLE 210 125  #|
MODEL 502
PROP                                                                                                                                   
REC(0,0,0,0, )
VIS 0
PIN(190,120,0.000,0.000)a
PIN(190,130,0.000,0.000)b
PIN(225,125,0.090,0.070)s
LIG(190,130,203,130)
LIG(202,132,198,135)
LIG(218,125,225,125)
LIG(217,127,214,131)
LIG(218,125,217,127)
LIG(217,123,218,125)
LIG(214,119,217,123)
LIG(209,116,214,119)
LIG(214,131,209,134)
LIG(209,134,198,135)
LIG(198,115,209,116)
LIG(204,128,202,132)
LIG(198,115,202,118)
LIG(202,118,204,122)
LIG(204,122,205,125)
LIG(205,125,204,128)
LIG(190,120,203,120)
VLG  or or2(s,a,b);
FSYM
SYM  #light2
BB(223,110,229,124)
TITLE 225 124  #light
MODEL 49
PROP                                                                                                                                   
REC(224,111,4,4,r)
VIS 1
PIN(225,125,0.000,0.000)out2
LIG(228,116,228,111)
LIG(228,111,227,110)
LIG(224,111,224,116)
LIG(227,121,227,118)
LIG(226,121,229,121)
LIG(226,123,228,121)
LIG(227,123,229,121)
LIG(223,118,229,118)
LIG(225,118,225,125)
LIG(223,116,223,118)
LIG(229,116,223,116)
LIG(229,118,229,116)
LIG(225,110,224,111)
LIG(227,110,225,110)
FSYM
SYM  #button9
BB(76,181,85,189)
TITLE 80 185  #button
MODEL 59
PROP                                                                                                                                   
REC(77,182,6,6,r)
VIS 1
PIN(85,185,0.000,0.000)RANGKAIAN No 4
LIG(84,185,85,185)
LIG(76,189,76,181)
LIG(84,189,76,189)
LIG(84,181,84,189)
LIG(76,181,84,181)
LIG(77,188,77,182)
LIG(83,188,77,188)
LIG(83,182,83,188)
LIG(77,182,83,182)
FSYM
SYM  #button10
BB(51,196,60,204)
TITLE 55 200  #button
MODEL 59
PROP                                                                                                                                   
REC(52,197,6,6,r)
VIS 1
PIN(60,200,0.000,0.000)X
LIG(59,200,60,200)
LIG(51,204,51,196)
LIG(59,204,51,204)
LIG(59,196,59,204)
LIG(51,196,59,196)
LIG(52,203,52,197)
LIG(58,203,52,203)
LIG(58,197,58,203)
LIG(52,197,58,197)
FSYM
SYM  #button11
BB(51,231,60,239)
TITLE 55 235  #button
MODEL 59
PROP                                                                                                                                   
REC(52,232,6,6,r)
VIS 1
PIN(60,235,0.000,0.000)Y
LIG(59,235,60,235)
LIG(51,239,51,231)
LIG(59,239,51,239)
LIG(59,231,59,239)
LIG(51,231,59,231)
LIG(52,238,52,232)
LIG(58,238,52,238)
LIG(58,232,58,238)
LIG(52,232,58,232)
FSYM
SYM  #button12
BB(51,266,60,274)
TITLE 55 270  #button
MODEL 59
PROP                                                                                                                                   
REC(52,267,6,6,r)
VIS 1
PIN(60,270,0.000,0.000)Z
LIG(59,270,60,270)
LIG(51,274,51,266)
LIG(59,274,51,274)
LIG(59,266,59,274)
LIG(51,266,59,266)
LIG(52,273,52,267)
LIG(58,273,52,273)
LIG(58,267,58,273)
LIG(52,267,58,267)
FSYM
SYM  #and2
BB(125,195,160,215)
TITLE 137 206  #&
MODEL 402
PROP                                                                                                                                   
REC(10,-5,0,0, )
VIS 0
PIN(125,210,0.000,0.000)b
PIN(125,200,0.000,0.000)a
PIN(160,205,0.090,0.140)s
LIG(125,210,133,210)
LIG(133,195,133,215)
LIG(153,205,160,205)
LIG(152,207,149,211)
LIG(153,205,152,207)
LIG(152,203,153,205)
LIG(149,199,152,203)
LIG(144,196,149,199)
LIG(149,211,144,214)
LIG(144,214,133,215)
LIG(133,195,144,196)
LIG(125,200,133,200)
VLG  and and2(out,a,b);
FSYM
SYM  #and2
BB(125,225,160,245)
TITLE 137 236  #&
MODEL 402
PROP                                                                                                                                   
REC(5,0,0,0, )
VIS 0
PIN(125,240,0.000,0.000)b
PIN(125,230,0.000,0.000)a
PIN(160,235,0.090,0.140)s
LIG(125,240,133,240)
LIG(133,225,133,245)
LIG(153,235,160,235)
LIG(152,237,149,241)
LIG(153,235,152,237)
LIG(152,233,153,235)
LIG(149,229,152,233)
LIG(144,226,149,229)
LIG(149,241,144,244)
LIG(144,244,133,245)
LIG(133,225,144,226)
LIG(125,230,133,230)
VLG  and and2(out,a,b);
FSYM
SYM  #and2
BB(125,255,160,275)
TITLE 137 266  #&
MODEL 402
PROP                                                                                                                                   
REC(10,-5,0,0, )
VIS 0
PIN(125,270,0.000,0.000)b
PIN(125,260,0.000,0.000)a
PIN(160,265,0.090,0.140)s
LIG(125,270,133,270)
LIG(133,255,133,275)
LIG(153,265,160,265)
LIG(152,267,149,271)
LIG(153,265,152,267)
LIG(152,263,153,265)
LIG(149,259,152,263)
LIG(144,256,149,259)
LIG(149,271,144,274)
LIG(144,274,133,275)
LIG(133,255,144,256)
LIG(125,260,133,260)
VLG  and and2(out,a,b);
FSYM
SYM  #inv
BB(80,220,115,240)
TITLE 95 230  #~
MODEL 101
PROP                                                                                                                                   
REC(5,0,0,0, )
VIS 0
PIN(80,230,0.000,0.000)in
PIN(115,230,0.030,0.070)out
LIG(80,230,90,230)
LIG(90,220,90,240)
LIG(90,220,105,230)
LIG(90,240,105,230)
LIG(107,230,107,230)
LIG(109,230,115,230)
VLG  not not1(out,in);
FSYM
SYM  #or3
BB(185,220,225,250)
TITLE 200 240  #|
MODEL 503
PROP                                                                                                                                   
REC(-5,0,0,0, )
VIS 0
PIN(185,225,0.000,0.000)a
PIN(185,235,0.000,0.000)b
PIN(185,245,0.000,0.000)c
PIN(225,235,0.120,0.140)s
LIG(185,245,199,245)
LIG(185,235,201,235)
LIG(185,225,199,225)
LIG(199,245,195,250)
LIG(210,246,205,249)
LIG(214,238,210,246)
LIG(205,221,210,224)
LIG(195,220,205,221)
LIG(215,235,214,238)
LIG(214,232,215,235)
LIG(195,250,205,249)
LIG(210,224,214,232)
LIG(195,220,199,225)
LIG(199,225,201,235)
LIG(201,235,199,245)
LIG(215,235,225,235)
VLG  or or3(s,a,b,c);
FSYM
SYM  #light3
BB(223,220,229,234)
TITLE 225 234  #light
MODEL 49
PROP                                                                                                                                   
REC(224,221,4,4,r)
VIS 1
PIN(225,235,0.000,0.000)out3
LIG(228,226,228,221)
LIG(228,221,227,220)
LIG(224,221,224,226)
LIG(227,231,227,228)
LIG(226,231,229,231)
LIG(226,233,228,231)
LIG(227,233,229,231)
LIG(223,228,229,228)
LIG(225,228,225,235)
LIG(223,226,223,228)
LIG(229,226,223,226)
LIG(229,228,229,226)
LIG(225,220,224,221)
LIG(227,220,225,220)
FSYM
CNC(95 0)
CNC(75 100)
CNC(70 200)
CNC(80 270)
CNC(75 235)
LIG(60,0,95,0)
LIG(135,0,150,0)
LIG(150,0,150,10)
LIG(150,10,155,10)
LIG(95,0,95,40)
LIG(95,0,100,0)
LIG(95,40,155,40)
LIG(60,50,85,50)
LIG(85,50,85,20)
LIG(85,20,155,20)
LIG(60,25,90,25)
LIG(90,25,90,50)
LIG(90,50,155,50)
LIG(190,15,200,15)
LIG(200,15,200,25)
LIG(200,25,205,25)
LIG(190,45,200,45)
LIG(200,45,200,35)
LIG(200,35,205,35)
LIG(60,100,75,100)
LIG(130,100,130,105)
LIG(130,105,135,105)
LIG(60,125,90,125)
LIG(90,125,90,115)
LIG(90,115,135,115)
LIG(75,100,75,135)
LIG(75,100,130,100)
LIG(75,135,85,135)
LIG(120,135,135,135)
LIG(60,150,125,150)
LIG(125,150,125,145)
LIG(125,145,135,145)
LIG(170,110,180,110)
LIG(180,110,180,120)
LIG(180,120,190,120)
LIG(170,140,180,140)
LIG(180,140,180,130)
LIG(180,130,190,130)
LIG(60,200,70,200)
LIG(70,200,70,230)
LIG(70,200,125,200)
LIG(70,230,80,230)
LIG(60,235,75,235)
LIG(75,235,75,210)
LIG(75,210,125,210)
LIG(115,230,125,230)
LIG(60,270,80,270)
LIG(80,270,80,240)
LIG(80,240,125,240)
LIG(80,270,125,270)
LIG(75,235,75,260)
LIG(75,260,125,260)
LIG(160,265,175,265)
LIG(175,265,175,245)
LIG(175,245,185,245)
LIG(160,235,185,235)
LIG(160,205,175,205)
LIG(175,205,175,225)
LIG(175,225,185,225)
FFIG C:\Users\62821\Documents\Projek DSCH\Aku\Laporan 4.sch
