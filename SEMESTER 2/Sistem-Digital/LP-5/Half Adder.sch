DSCH 2.7f
VERSION 6/23/2020 5:44:25 PM
BB(1,-10,89,69)
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
BB(1,16,10,24)
TITLE 5 20  #button
MODEL 59
PROP                                                                                                                                    
REC(2,17,6,6,r)
VIS 1
PIN(10,20,0.000,0.000)B
LIG(9,20,10,20)
LIG(1,24,1,16)
LIG(9,24,1,24)
LIG(9,16,9,24)
LIG(1,16,9,16)
LIG(2,23,2,17)
LIG(8,23,2,23)
LIG(8,17,8,23)
LIG(2,17,8,17)
FSYM
SYM  #xor2
BB(35,-5,70,15)
TITLE 52 5  #^
MODEL 602
PROP                                                                                                                                    
REC(5,0,0,0, )
VIS 0
PIN(35,0,0.000,0.000)a
PIN(35,10,0.000,0.000)b
PIN(70,5,0.090,0.070)out
LIG(43,12,39,15)
LIG(47,12,43,15)
LIG(63,5,70,5)
LIG(62,7,59,11)
LIG(63,5,62,7)
LIG(62,3,63,5)
LIG(59,-1,62,3)
LIG(54,-4,59,-1)
LIG(59,11,54,14)
LIG(54,14,43,15)
LIG(43,-5,54,-4)
LIG(49,8,47,12)
LIG(43,-5,47,-2)
LIG(47,-2,49,2)
LIG(49,2,50,5)
LIG(50,5,49,8)
LIG(39,-5,43,-2)
LIG(43,-2,45,2)
LIG(45,2,46,5)
LIG(46,5,45,8)
LIG(45,8,43,12)
LIG(35,0,44,0)
LIG(35,10,44,10)
VLG   xor xor2(out,a,b);
FSYM
SYM  #and2
BB(35,30,70,50)
TITLE 47 41  #&
MODEL 402
PROP                                                                                                                                    
REC(5,5,0,0, )
VIS 0
PIN(35,45,0.000,0.000)b
PIN(35,35,0.000,0.000)a
PIN(70,40,0.090,0.070)s
LIG(35,45,43,45)
LIG(43,30,43,50)
LIG(63,40,70,40)
LIG(62,42,59,46)
LIG(63,40,62,42)
LIG(62,38,63,40)
LIG(59,34,62,38)
LIG(54,31,59,34)
LIG(59,46,54,49)
LIG(54,49,43,50)
LIG(43,30,54,31)
LIG(35,35,43,35)
VLG   and and2(out,a,b);
FSYM
SYM  #light1
BB(83,-10,89,4)
TITLE 85 4  #light
MODEL 49
PROP                                                                                                                                    
REC(84,-9,4,4,r)
VIS 1
PIN(85,5,0.000,0.000)Sum
LIG(88,-4,88,-9)
LIG(88,-9,87,-10)
LIG(84,-9,84,-4)
LIG(87,1,87,-2)
LIG(86,1,89,1)
LIG(86,3,88,1)
LIG(87,3,89,1)
LIG(83,-2,89,-2)
LIG(85,-2,85,5)
LIG(83,-4,83,-2)
LIG(89,-4,83,-4)
LIG(89,-2,89,-4)
LIG(85,-10,84,-9)
LIG(87,-10,85,-10)
FSYM
SYM  #light2
BB(83,25,89,39)
TITLE 85 39  #light
MODEL 49
PROP                                                                                                                                    
REC(84,26,4,4,r)
VIS 1
PIN(85,40,0.000,0.000)Carry
LIG(88,31,88,26)
LIG(88,26,87,25)
LIG(84,26,84,31)
LIG(87,36,87,33)
LIG(86,36,89,36)
LIG(86,38,88,36)
LIG(87,38,89,36)
LIG(83,33,89,33)
LIG(85,33,85,40)
LIG(83,31,83,33)
LIG(89,31,83,31)
LIG(89,33,89,31)
LIG(85,25,84,26)
LIG(87,25,85,25)
FSYM
CNC(25 0)
CNC(20 20)
LIG(10,0,25,0)
LIG(25,0,25,45)
LIG(25,0,35,0)
LIG(25,45,35,45)
LIG(10,20,20,20)
LIG(20,20,20,10)
LIG(20,10,35,10)
LIG(20,20,20,35)
LIG(20,35,35,35)
LIG(70,40,85,40)
LIG(70,5,85,5)
TEXT 26 59  #Filfimo Yulfiz Ahsanul Hulqi_19102143
FFIG D:\!Kuliah!\!KULIAH!\Praktikum Sistem Digital\Laporan 5\Project DSCH2\Half Adder.sch
