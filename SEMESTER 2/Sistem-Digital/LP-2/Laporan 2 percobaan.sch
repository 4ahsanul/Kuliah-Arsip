DSCH 2.7f
VERSION 4/9/2020 2:21:18 PM
BB(1,-50,239,325)
SYM  #button1
BB(1,-49,10,-41)
TITLE 5 -45  #button
MODEL 59
PROP                                                                                                                                    
REC(2,-48,6,6,r)
VIS 1
PIN(10,-45,0.000,0.000)A
LIG(9,-45,10,-45)
LIG(1,-41,1,-49)
LIG(9,-41,1,-41)
LIG(9,-49,9,-41)
LIG(1,-49,9,-49)
LIG(2,-42,2,-48)
LIG(8,-42,2,-42)
LIG(8,-48,8,-42)
LIG(2,-48,8,-48)
FSYM
SYM  #button2
BB(1,-14,10,-6)
TITLE 5 -10  #button
MODEL 59
PROP                                                                                                                                    
REC(2,-13,6,6,r)
VIS 1
PIN(10,-10,0.000,0.000)B
LIG(9,-10,10,-10)
LIG(1,-6,1,-14)
LIG(9,-6,1,-6)
LIG(9,-14,9,-6)
LIG(1,-14,9,-14)
LIG(2,-7,2,-13)
LIG(8,-7,2,-7)
LIG(8,-13,8,-7)
LIG(2,-13,8,-13)
FSYM
SYM  #inv
BB(40,-45,75,-25)
TITLE 55 -35  #~
MODEL 101
PROP                                                                                                                                    
REC(0,0,0,0, )
VIS 0
PIN(40,-35,0.000,0.000)in
PIN(75,-35,0.030,0.070)out
LIG(40,-35,50,-35)
LIG(50,-45,50,-25)
LIG(50,-45,65,-35)
LIG(50,-25,65,-35)
LIG(67,-35,67,-35)
LIG(69,-35,75,-35)
VLG    not not1(out,in);
FSYM
SYM  #inv
BB(40,-20,75,0)
TITLE 55 -10  #~
MODEL 101
PROP                                                                                                                                    
REC(10,-10,0,0, )
VIS 0
PIN(40,-10,0.000,0.000)in
PIN(75,-10,0.030,0.070)out
LIG(40,-10,50,-10)
LIG(50,-20,50,0)
LIG(50,-20,65,-10)
LIG(50,0,65,-10)
LIG(67,-10,67,-10)
LIG(69,-10,75,-10)
VLG    not not1(out,in);
FSYM
SYM  #and2
BB(100,-50,135,-30)
TITLE 112 -39  #&
MODEL 402
PROP                                                                                                                                    
REC(5,0,0,0, )
VIS 0
PIN(100,-35,0.000,0.000)b
PIN(100,-45,0.000,0.000)a
PIN(135,-40,0.090,0.070)s
LIG(100,-35,108,-35)
LIG(108,-50,108,-30)
LIG(128,-40,135,-40)
LIG(127,-38,124,-34)
LIG(128,-40,127,-38)
LIG(127,-42,128,-40)
LIG(124,-46,127,-42)
LIG(119,-49,124,-46)
LIG(124,-34,119,-31)
LIG(119,-31,108,-30)
LIG(108,-50,119,-49)
LIG(100,-45,108,-45)
VLG    and and2(out,a,b);
FSYM
SYM  #and2
BB(100,-15,135,5)
TITLE 112 -4  #&
MODEL 402
PROP                                                                                                                                    
REC(0,0,0,0, )
VIS 0
PIN(100,0,0.000,0.000)b
PIN(100,-10,0.000,0.000)a
PIN(135,-5,0.090,0.070)s
LIG(100,0,108,0)
LIG(108,-15,108,5)
LIG(128,-5,135,-5)
LIG(127,-3,124,1)
LIG(128,-5,127,-3)
LIG(127,-7,128,-5)
LIG(124,-11,127,-7)
LIG(119,-14,124,-11)
LIG(124,1,119,4)
LIG(119,4,108,5)
LIG(108,-15,119,-14)
LIG(100,-10,108,-10)
VLG    and and2(out,a,b);
FSYM
SYM  #and2
BB(100,20,135,40)
TITLE 112 31  #&
MODEL 402
PROP                                                                                                                                    
REC(0,0,0,0, )
VIS 0
PIN(100,35,0.000,0.000)b
PIN(100,25,0.000,0.000)a
PIN(135,30,0.090,0.070)s
LIG(100,35,108,35)
LIG(108,20,108,40)
LIG(128,30,135,30)
LIG(127,32,124,36)
LIG(128,30,127,32)
LIG(127,28,128,30)
LIG(124,24,127,28)
LIG(119,21,124,24)
LIG(124,36,119,39)
LIG(119,39,108,40)
LIG(108,20,119,21)
LIG(100,25,108,25)
VLG    and and2(out,a,b);
FSYM
SYM  #or3
BB(165,-20,205,10)
TITLE 180 0  #|
MODEL 503
PROP                                                                                                                                    
REC(0,0,0,0, )
VIS 0
PIN(165,-15,0.000,0.000)a
PIN(165,-5,0.000,0.000)b
PIN(165,5,0.000,0.000)c
PIN(205,-5,0.120,0.070)s
LIG(165,5,179,5)
LIG(165,-5,181,-5)
LIG(165,-15,179,-15)
LIG(179,5,175,10)
LIG(190,6,185,9)
LIG(194,-2,190,6)
LIG(185,-19,190,-16)
LIG(175,-20,185,-19)
LIG(195,-5,194,-2)
LIG(194,-8,195,-5)
LIG(175,10,185,9)
LIG(190,-16,194,-8)
LIG(175,-20,179,-15)
LIG(179,-15,181,-5)
LIG(181,-5,179,5)
LIG(195,-5,205,-5)
VLG    or or3(s,a,b,c);
FSYM
SYM  #light1
BB(203,-20,209,-6)
TITLE 205 -6  #light
MODEL 49
PROP                                                                                                                                    
REC(204,-19,4,4,r)
VIS 1
PIN(205,-5,0.000,0.000)out1
LIG(208,-14,208,-19)
LIG(208,-19,207,-20)
LIG(204,-19,204,-14)
LIG(207,-9,207,-12)
LIG(206,-9,209,-9)
LIG(206,-7,208,-9)
LIG(207,-7,209,-9)
LIG(203,-12,209,-12)
LIG(205,-12,205,-5)
LIG(203,-14,203,-12)
LIG(209,-14,203,-14)
LIG(209,-12,209,-14)
LIG(205,-20,204,-19)
LIG(207,-20,205,-20)
FSYM
SYM  #button3
BB(1,76,10,84)
TITLE 5 80  #button
MODEL 59
PROP                                                                                                                                    
REC(2,77,6,6,r)
VIS 1
PIN(10,80,0.000,0.000)A
LIG(9,80,10,80)
LIG(1,84,1,76)
LIG(9,84,1,84)
LIG(9,76,9,84)
LIG(1,76,9,76)
LIG(2,83,2,77)
LIG(8,83,2,83)
LIG(8,77,8,83)
LIG(2,77,8,77)
FSYM
SYM  #button4
BB(1,111,10,119)
TITLE 5 115  #button
MODEL 59
PROP                                                                                                                                    
REC(2,112,6,6,r)
VIS 1
PIN(10,115,0.000,0.000)B
LIG(9,115,10,115)
LIG(1,119,1,111)
LIG(9,119,1,119)
LIG(9,111,9,119)
LIG(1,111,9,111)
LIG(2,118,2,112)
LIG(8,118,2,118)
LIG(8,112,8,118)
LIG(2,112,8,112)
FSYM
SYM  #button5
BB(1,151,10,159)
TITLE 5 155  #button
MODEL 59
PROP                                                                                                                                    
REC(2,152,6,6,r)
VIS 1
PIN(10,155,0.000,0.000)C
LIG(9,155,10,155)
LIG(1,159,1,151)
LIG(9,159,1,159)
LIG(9,151,9,159)
LIG(1,151,9,151)
LIG(2,158,2,152)
LIG(8,158,2,158)
LIG(8,152,8,158)
LIG(2,152,8,152)
FSYM
SYM  #inv
BB(40,105,75,125)
TITLE 55 115  #~
MODEL 101
PROP                                                                                                                                    
REC(-10,5,0,0, )
VIS 0
PIN(40,115,0.000,0.000)in
PIN(75,115,0.030,0.070)out
LIG(40,115,50,115)
LIG(50,105,50,125)
LIG(50,105,65,115)
LIG(50,125,65,115)
LIG(67,115,67,115)
LIG(69,115,75,115)
VLG    not not1(out,in);
FSYM
SYM  #inv
BB(40,145,75,165)
TITLE 55 155  #~
MODEL 101
PROP                                                                                                                                    
REC(0,20,0,0, )
VIS 0
PIN(40,155,0.000,0.000)in
PIN(75,155,0.030,0.070)out
LIG(40,155,50,155)
LIG(50,145,50,165)
LIG(50,145,65,155)
LIG(50,165,65,155)
LIG(67,155,67,155)
LIG(69,155,75,155)
VLG    not not1(out,in);
FSYM
SYM  #and2
BB(105,70,140,90)
TITLE 117 81  #&
MODEL 402
PROP                                                                                                                                    
REC(0,0,0,0, )
VIS 0
PIN(105,85,0.000,0.000)b
PIN(105,75,0.000,0.000)a
PIN(140,80,0.090,0.070)s
LIG(105,85,113,85)
LIG(113,70,113,90)
LIG(133,80,140,80)
LIG(132,82,129,86)
LIG(133,80,132,82)
LIG(132,78,133,80)
LIG(129,74,132,78)
LIG(124,71,129,74)
LIG(129,86,124,89)
LIG(124,89,113,90)
LIG(113,70,124,71)
LIG(105,75,113,75)
VLG    and and2(out,a,b);
FSYM
SYM  #and3
BB(105,100,140,130)
TITLE 120 115  #&
MODEL 403
PROP                                                                                                                                    
REC(105,100,0,0,P)
VIS 0
PIN(105,105,0.000,0.000)a
PIN(105,115,0.000,0.000)b
PIN(105,125,0.000,0.000)c
PIN(145,115,0.090,0.070)s
LIG(145,115,135,115)
LIG(105,125,115,125)
LIG(105,115,115,115)
LIG(105,105,115,105)
LIG(115,115,115,130)
LIG(130,126,125,129)
LIG(134,118,130,126)
LIG(115,100,115,115)
LIG(115,100,125,101)
LIG(135,115,134,118)
LIG(134,112,135,115)
LIG(115,130,125,129)
LIG(130,104,134,112)
LIG(125,101,130,104)
VLG    and and3(s,a,b,c);
FSYM
SYM  #and2
BB(105,140,140,160)
TITLE 117 151  #&
MODEL 402
PROP                                                                                                                                    
REC(5,0,0,0, )
VIS 0
PIN(105,155,0.000,0.000)b
PIN(105,145,0.000,0.000)a
PIN(140,150,0.090,0.070)s
LIG(105,155,113,155)
LIG(113,140,113,160)
LIG(133,150,140,150)
LIG(132,152,129,156)
LIG(133,150,132,152)
LIG(132,148,133,150)
LIG(129,144,132,148)
LIG(124,141,129,144)
LIG(129,156,124,159)
LIG(124,159,113,160)
LIG(113,140,124,141)
LIG(105,145,113,145)
VLG    and and2(out,a,b);
FSYM
SYM  #or3
BB(165,100,205,130)
TITLE 180 120  #|
MODEL 503
PROP                                                                                                                                    
REC(-30,15,0,0, )
VIS 0
PIN(165,105,0.000,0.000)a
PIN(165,115,0.000,0.000)b
PIN(165,125,0.000,0.000)c
PIN(205,115,0.120,0.070)s
LIG(165,125,179,125)
LIG(165,115,181,115)
LIG(165,105,179,105)
LIG(179,125,175,130)
LIG(190,126,185,129)
LIG(194,118,190,126)
LIG(185,101,190,104)
LIG(175,100,185,101)
LIG(195,115,194,118)
LIG(194,112,195,115)
LIG(175,130,185,129)
LIG(190,104,194,112)
LIG(175,100,179,105)
LIG(179,105,181,115)
LIG(181,115,179,125)
LIG(195,115,205,115)
VLG    or or3(s,a,b,c);
FSYM
SYM  #light2
BB(203,100,209,114)
TITLE 205 114  #light
MODEL 49
PROP                                                                                                                                    
REC(204,101,4,4,r)
VIS 1
PIN(205,115,0.000,0.000)out2
LIG(208,106,208,101)
LIG(208,101,207,100)
LIG(204,101,204,106)
LIG(207,111,207,108)
LIG(206,111,209,111)
LIG(206,113,208,111)
LIG(207,113,209,111)
LIG(203,108,209,108)
LIG(205,108,205,115)
LIG(203,106,203,108)
LIG(209,106,203,106)
LIG(209,108,209,106)
LIG(205,100,204,101)
LIG(207,100,205,100)
FSYM
SYM  #button6
BB(1,201,10,209)
TITLE 5 205  #button
MODEL 59
PROP                                                                                                                                    
REC(2,202,6,6,r)
VIS 1
PIN(10,205,0.000,0.000)A
LIG(9,205,10,205)
LIG(1,209,1,201)
LIG(9,209,1,209)
LIG(9,201,9,209)
LIG(1,201,9,201)
LIG(2,208,2,202)
LIG(8,208,2,208)
LIG(8,202,8,208)
LIG(2,202,8,202)
FSYM
SYM  #button7
BB(1,241,10,249)
TITLE 5 245  #button
MODEL 59
PROP                                                                                                                                    
REC(2,242,6,6,r)
VIS 1
PIN(10,245,0.000,0.000)B
LIG(9,245,10,245)
LIG(1,249,1,241)
LIG(9,249,1,249)
LIG(9,241,9,249)
LIG(1,241,9,241)
LIG(2,248,2,242)
LIG(8,248,2,248)
LIG(8,242,8,248)
LIG(2,242,8,242)
FSYM
SYM  #button8
BB(1,281,10,289)
TITLE 5 285  #button
MODEL 59
PROP                                                                                                                                    
REC(2,282,6,6,r)
VIS 1
PIN(10,285,0.000,0.000)C
LIG(9,285,10,285)
LIG(1,289,1,281)
LIG(9,289,1,289)
LIG(9,281,9,289)
LIG(1,281,9,281)
LIG(2,288,2,282)
LIG(8,288,2,288)
LIG(8,282,8,288)
LIG(2,282,8,282)
FSYM
SYM  #or2
BB(95,200,130,220)
TITLE 115 210  #|
MODEL 502
PROP                                                                                                                                   
REC(60,0,0,0, )
VIS 0
PIN(95,205,0.000,0.000)a
PIN(95,215,0.000,0.000)b
PIN(130,210,0.090,0.070)s
LIG(95,215,108,215)
LIG(107,217,103,220)
LIG(123,210,130,210)
LIG(122,212,119,216)
LIG(123,210,122,212)
LIG(122,208,123,210)
LIG(119,204,122,208)
LIG(114,201,119,204)
LIG(119,216,114,219)
LIG(114,219,103,220)
LIG(103,200,114,201)
LIG(109,213,107,217)
LIG(103,200,107,203)
LIG(107,203,109,207)
LIG(109,207,110,210)
LIG(110,210,109,213)
LIG(95,205,108,205)
VLG  or or2(s,a,b);
FSYM
SYM  #or2
BB(115,245,150,265)
TITLE 135 255  #|
MODEL 502
PROP                                                                                                                                   
REC(40,5,0,0, )
VIS 0
PIN(115,250,0.000,0.000)a
PIN(115,260,0.000,0.000)b
PIN(150,255,0.090,0.070)s
LIG(115,260,128,260)
LIG(127,262,123,265)
LIG(143,255,150,255)
LIG(142,257,139,261)
LIG(143,255,142,257)
LIG(142,253,143,255)
LIG(139,249,142,253)
LIG(134,246,139,249)
LIG(139,261,134,264)
LIG(134,264,123,265)
LIG(123,245,134,246)
LIG(129,258,127,262)
LIG(123,245,127,248)
LIG(127,248,129,252)
LIG(129,252,130,255)
LIG(130,255,129,258)
LIG(115,250,128,250)
VLG  or or2(s,a,b);
FSYM
SYM  #inv
BB(70,240,105,260)
TITLE 85 250  #~
MODEL 101
PROP                                                                                                                                   
REC(30,-5,0,0, )
VIS 0
PIN(70,250,0.000,0.000)in
PIN(105,250,0.030,0.070)out
LIG(70,250,80,250)
LIG(80,240,80,260)
LIG(80,240,95,250)
LIG(80,260,95,250)
LIG(97,250,97,250)
LIG(99,250,105,250)
VLG  not not1(out,in);
FSYM
SYM  #and2
BB(160,215,195,235)
TITLE 172 226  #&
MODEL 402
PROP                                                                                                                                   
REC(-10,-5,0,0, )
VIS 0
PIN(160,230,0.000,0.000)b
PIN(160,220,0.000,0.000)a
PIN(195,225,0.090,0.070)s
LIG(160,230,168,230)
LIG(168,215,168,235)
LIG(188,225,195,225)
LIG(187,227,184,231)
LIG(188,225,187,227)
LIG(187,223,188,225)
LIG(184,219,187,223)
LIG(179,216,184,219)
LIG(184,231,179,234)
LIG(179,234,168,235)
LIG(168,215,179,216)
LIG(160,220,168,220)
VLG  and and2(out,a,b);
FSYM
SYM  #and3
BB(120,295,155,325)
TITLE 135 310  #&
MODEL 403
PROP                                                                                                                                   
REC(120,295,0,0,P)
VIS 0
PIN(120,300,0.000,0.000)a
PIN(120,310,0.000,0.000)b
PIN(120,320,0.000,0.000)c
PIN(160,310,0.090,0.070)s
LIG(160,310,150,310)
LIG(120,320,130,320)
LIG(120,310,130,310)
LIG(120,300,130,300)
LIG(130,310,130,325)
LIG(145,321,140,324)
LIG(149,313,145,321)
LIG(130,295,130,310)
LIG(130,295,140,296)
LIG(150,310,149,313)
LIG(149,307,150,310)
LIG(130,325,140,324)
LIG(145,299,149,307)
LIG(140,296,145,299)
VLG  and and3(s,a,b,c);
FSYM
SYM  #inv
BB(70,300,105,320)
TITLE 85 310  #~
MODEL 101
PROP                                                                                                                                   
REC(10,0,0,0, )
VIS 0
PIN(70,310,0.000,0.000)in
PIN(105,310,0.030,0.070)out
LIG(70,310,80,310)
LIG(80,300,80,320)
LIG(80,300,95,310)
LIG(80,320,95,310)
LIG(97,310,97,310)
LIG(99,310,105,310)
VLG  not not1(out,in);
FSYM
SYM  #or2
BB(200,265,235,285)
TITLE 220 275  #|
MODEL 502
PROP                                                                                                                                   
REC(15,0,0,0, )
VIS 0
PIN(200,270,0.000,0.000)a
PIN(200,280,0.000,0.000)b
PIN(235,275,0.090,0.070)s
LIG(200,280,213,280)
LIG(212,282,208,285)
LIG(228,275,235,275)
LIG(227,277,224,281)
LIG(228,275,227,277)
LIG(227,273,228,275)
LIG(224,269,227,273)
LIG(219,266,224,269)
LIG(224,281,219,284)
LIG(219,284,208,285)
LIG(208,265,219,266)
LIG(214,278,212,282)
LIG(208,265,212,268)
LIG(212,268,214,272)
LIG(214,272,215,275)
LIG(215,275,214,278)
LIG(200,270,213,270)
VLG  or or2(s,a,b);
FSYM
SYM  #light4
BB(233,260,239,274)
TITLE 235 274  #light
MODEL 49
PROP                                                                                                                                   
REC(234,261,4,4,r)
VIS 1
PIN(235,275,0.000,0.000)out3
LIG(238,266,238,261)
LIG(238,261,237,260)
LIG(234,261,234,266)
LIG(237,271,237,268)
LIG(236,271,239,271)
LIG(236,273,238,271)
LIG(237,273,239,271)
LIG(233,268,239,268)
LIG(235,268,235,275)
LIG(233,266,233,268)
LIG(239,266,233,266)
LIG(239,268,239,266)
LIG(235,260,234,261)
LIG(237,260,235,260)
FSYM
CNC(30 -10)
CNC(30 -45)
CNC(25 -45)
CNC(30 0)
CNC(55 80)
CNC(90 125)
CNC(25 115)
CNC(35 155)
CNC(50 205)
CNC(50 250)
CNC(40 245)
CNC(30 285)
LIG(10,-45,25,-45)
LIG(10,-10,30,-10)
LIG(75,-10,85,-10)
LIG(85,-10,85,-35)
LIG(85,-35,100,-35)
LIG(100,0,30,0)
LIG(30,-45,30,-35)
LIG(30,-45,100,-45)
LIG(30,-35,40,-35)
LIG(75,-35,80,-35)
LIG(80,-35,80,-20)
LIG(80,-20,100,-20)
LIG(30,0,30,35)
LIG(30,-10,30,0)
LIG(25,25,100,25)
LIG(100,-20,100,-10)
LIG(25,-45,30,-45)
LIG(135,30,165,30)
LIG(30,-10,40,-10)
LIG(135,-5,165,-5)
LIG(30,35,100,35)
LIG(135,-40,165,-40)
LIG(25,-45,25,25)
LIG(165,30,165,5)
LIG(165,-40,165,-15)
LIG(10,80,55,80)
LIG(55,80,55,75)
LIG(55,75,105,75)
LIG(10,115,25,115)
LIG(75,115,75,85)
LIG(75,85,105,85)
LIG(55,80,55,100)
LIG(150,125,165,125)
LIG(55,100,105,100)
LIG(105,100,105,105)
LIG(25,115,25,125)
LIG(25,115,40,115)
LIG(25,125,90,125)
LIG(90,125,90,115)
LIG(90,115,105,115)
LIG(10,155,35,155)
LIG(35,135,35,155)
LIG(35,135,100,135)
LIG(100,135,100,125)
LIG(100,125,105,125)
LIG(150,150,150,125)
LIG(35,155,40,155)
LIG(90,125,90,145)
LIG(90,145,105,145)
LIG(140,150,150,150)
LIG(75,155,105,155)
LIG(140,80,165,80)
LIG(165,80,165,105)
LIG(145,115,165,115)
LIG(105,310,120,310)
LIG(40,310,70,310)
LIG(160,280,200,280)
LIG(50,300,120,300)
LIG(50,250,50,300)
LIG(160,255,160,230)
LIG(150,255,160,255)
LIG(160,210,160,220)
LIG(130,210,160,210)
LIG(110,260,115,260)
LIG(110,260,110,285)
LIG(10,285,30,285)
LIG(105,250,115,250)
LIG(50,250,70,250)
LIG(10,205,50,205)
LIG(50,205,95,205)
LIG(10,245,40,245)
LIG(60,245,60,215)
LIG(50,205,50,250)
LIG(60,215,95,215)
LIG(40,310,40,245)
LIG(40,245,60,245)
LIG(30,285,30,320)
LIG(30,285,110,285)
LIG(30,320,120,320)
LIG(160,310,160,280)
LIG(200,225,200,270)
LIG(195,225,200,225)
FFIG C:\Users\62821\Documents\Projek DSCH\Aku\Laporan 2.sch
