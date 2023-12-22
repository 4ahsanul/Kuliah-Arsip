Python 3.8.2 (tags/v3.8.2:7b3ab59, Feb 25 2020, 22:45:29) [MSC v.1916 32 bit (Intel)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> import itertools
>>> bil_biner = [1,1,1,0,0,1,0,0,0,1,1,0]
>>> key_func = lambda x: x[0]
>>> for key, group in itertools.groupby(bil_biner):
	print(key + " :", list(group))

	
Traceback (most recent call last):
  File "<pyshell#5>", line 2, in <module>
    print(key + " :", list(group))
TypeError: unsupported operand type(s) for +: 'int' and 'str'
>>> 
================================ RESTART: Shell ================================
>>> temps_19102143 = [("Jakarta", 36), ("Berlin", 29), ("Cairo",36), ("Tokyo",27), ("NewYork",28),("London",22),("Beijing", 32), ("Los Angeles",26)]
>>> konversi_19102143 = list(map(lambda x: (x[0], (x[1]*9/5)+32), temps_19102143))
>>> konversi_19102143
[('Jakarta', 96.8), ('Berlin', 84.2), ('Cairo', 96.8), ('Tokyo', 80.6), ('NewYork', 82.4), ('London', 71.6), ('Beijing', 89.6), ('Los Angeles', 78.8)]
>>> 
==================================== RESTART: Shell ====================================
>>> #Deklarasi
>>> temps_19102143 = [("Jakarta", 36), ("Berlin", 29), ("Cairo",36), ("Tokyo",27), ("NewYork",28),("London",22),("Beijing", 32), ("Los Angeles",26)]
>>> #Buat Konversi
>>> konversi_19102143 = list(map(lambda x: (x[0], (x[1]*9/5)+32), temps_19102143)))
SyntaxError: unmatched ')'
>>> konversi_19102143 = list(map(lambda x: (x[0], (x[1]*9/5)+32), temps_19102143))
>>> #Lakukan Pemanggilan
>>> konversi_19102143
[('Jakarta', 96.8), ('Berlin', 84.2), ('Cairo', 96.8), ('Tokyo', 80.6), ('NewYork', 82.4), ('London', 71.6), ('Beijing', 89.6), ('Los Angeles', 78.8)]
>>> 
==================================== RESTART: Shell ====================================
>>> #Deklarasi
>>> list_19102143 = range(100)
>>> #Buat filter dan lambda
>>> list_now = list(filter(lambda x: x% 3 == 0, list_19102143))
>>> #Lakukan pemanggilan
>>> print(list_now)
[0, 3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36, 39, 42, 45, 48, 51, 54, 57, 60, 63, 66, 69, 72, 75, 78, 81, 84, 87, 90, 93, 96, 99]
>>> 
==================================== RESTART: Shell ====================================
>>> import itertools
>>> bil_biner_19102143 = [1,1,1,0,0,1,0,0,0,1,1,0]
>>> 
==================================== RESTART: Shell ====================================
>>> import itertools
>>> bil_biner_19102143 = [1,1,1,0,0,1,0,0,0,1,1,0]
>>> 
==================================== RESTART: Shell ====================================
>>> def kalikan(x,y):
	print(f'Bilangan : {x}, {y}')
	return x*y

>>> list_bil = [1, 2, 3, 4]
>>> list_bil_4x = []
>>> for i in list_bil:
	list_bil_4x.append(kalihkan(i, 4))
    print(list_bil_4x)
    
SyntaxError: unindent does not match any outer indentation level
>>> 
==================================== RESTART: Shell ====================================
>>> def kalikan(x,y):
	print(f'Bilangan : {x}, {y}')
	return x*y

>>> list_bil = [1, 2, 3, 4]
>>> list_bil_4x = []
>>> for i in list_bil:
	list_bil_4x.append(kalihkan(i, 4))
	print(list_bil_4x)

	
Traceback (most recent call last):
  File "<pyshell#44>", line 2, in <module>
    list_bil_4x.append(kalihkan(i, 4))
NameError: name 'kalihkan' is not defined
>>> 
==================================== RESTART: Shell ====================================
>>> 
==================================== RESTART: Shell ====================================
>>> from functools import partial
>>> def kalikan_19102143(x,y):
	print(f'Bilangan : {x}, {y}')
	return x*y

>>> partial_kalikan4 = (kalian_19102143,4)
Traceback (most recent call last):
  File "<pyshell#49>", line 1, in <module>
    partial_kalikan4 = (kalian_19102143,4)
NameError: name 'kalian_19102143' is not defined
>>> 
==================================== RESTART: Shell ====================================
>>> 
==================================== RESTART: Shell ====================================
>>> from functools import partial
>>> def kalikan_19102143(x,y):
	print(f'Bilangan : {x}, {y}')
	return x*y

>>> partial_kalikan4 = (kalikan_19102143,4)
>>> partial_kalikan4(5)
Traceback (most recent call last):
  File "<pyshell#54>", line 1, in <module>
    partial_kalikan4(5)
TypeError: 'tuple' object is not callable
>>> 