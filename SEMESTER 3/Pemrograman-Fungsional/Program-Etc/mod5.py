Python 3.8.2 (tags/v3.8.2:7b3ab59, Feb 25 2020, 22:45:29) [MSC v.1916 32 bit (Intel)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> num = [15,300,2700,821]
>>> num1 = [12,2]
>>> num 2 = [34,567,78]
SyntaxError: invalid syntax
>>> num2 = [34,567,78]
>>> print ('Maximum is :', max(num,num1,num2, key = len))
Maximum is : [15, 300, 2700, 821]
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> print ('Nilai Max :', max(1,2,3,4,))
Nilai Max : 4
>>> data_angka = [1,3,2,8,5,10,6]
>>> print ('Nilai Max :', max(data_angka))
Nilai Max : 10
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> def sumDigit(num):
	sum = 0
	while(num):
		sum += num % 10
		num = int(num / 10)
	return sum

>>> print ('Maximum is :' max(100,321,267,59,40, key=sumDigit))
SyntaxError: invalid syntax
>>> print ('Maximum is :', max(100,321,267,59,40, key=sumDigit))
Maximum is : 267
>>> num = [15,300,270,821,52,10,6]
>>> print ('Maximum is :', max(num, key=sumDigit))
Maximum is : 821
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> print ('Nilai min :', min(1,2,3,4))
Nilai min : 1
>>> data_angka = [3,2,8,5,10,6]
>>> print ('Nilai min :', min(data_angka))
Nilai min : 2
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> kuadrat = lambda x: x*x
>>> print (kuadrat(3))
9
>>> kali = lambda x, y: x*y
>>> print (kali(4,3))
12
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> f = lambda x,y,z: x + y + z
>>> f (2,30,400)
432
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> nilai = [1,2,3,4,5]
>>> pangkat = []
>>> for x in nilai:
	pangkat.append (x**2)

	
>>> pangkat
[1, 4, 9, 16, 25]
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> nilai = [1,2,3,4,5]
>>> def pangkat(x) : return x**2

>>> list(map(pangkat,nilai))
[1, 4, 9, 16, 25]
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> my_list = [1,5,4,6,8,11,3,12]
>>> new_list = list(map(lambda x: x*2, my_list))
>>> print (new_list)
[2, 10, 8, 12, 16, 22, 6, 24]
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> alfabet = ['a','b','c','e','i','k','o','z']
>>> def filter_vocal(alfabet):
	vocal ['a','i','u','e','o']
	if alfabet in vocal:
		return True
	else:
		return False

	
>>> vocal_terfilter = filter(filter_vocal, alfabet)
>>> print ('Huruf vocal yang tersaring adalah:')
Huruf vocal yang tersaring adalah:
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> alfabet = ['a','b','c','e','i','k','o','z']
>>> def filter_vocal(alfabet):
	vocal = ['a','i','u','e','o']
	if alfabet in vocal:
		return True
	else:
		return False

	
>>> vocal_terfilter = filter(filter_vocal, alfabet)
>>> print ('Huruf vocal yang tersaring adalah:')
Huruf vocal yang tersaring adalah:
>>> for vocal in vocal_terfilter:
	print (vocal)

	
a
e
i
o
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> print('Nilai Min :', min(1,2,3,4))
Nilai Min : 1
>>> data_angka = [3,2,8,5,10,6]
>>> print ('Nilai Min :', min(data_angka))
Nilai Min : 2
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> num = [15,300,2700,821]
>>> num1 = [12,2]
>>> num2 = [34,567,78]
>>> print ('Minimum is :', min(num,num1,num2, key=len))
Minimum is : [12, 2]
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> def sumDigit(num):
	sum = 0
	while(num):
		sum += num % 10
		num = int(num /10)
	return sum

>>> print ('Minimum is :', min(100,321,267,59,40, key=sumDigit))
Minimum is : 100
>>> num = [15,300,2700,821,52,10,6]
>>> print ('Miinimum is :', min(num, key=sumDigit))
Miinimum is : 10
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> def f1(x): return x ** 2

>>> def f2(x): return x ** 3

>>> def f3(x): return x ** 4

>>> L = [f1,f2,f3]
>>> for f in L:
	print (f(3))

	
9
27
81
>>> print (L[0](11))
121
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> L = [lambda x: x ** 2,
	 lambda x: x ** 3,
	 lambda x: x ** 4,]
>>> for f in L:
	print (f(3))

	
9
27
81
>>> print (L[0](11))
121
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> my_list = [1,5,4,6,8,11,3,12]
>>> new_list = list(filter(lambda x: (x%2 == 0), my_list))
>>> print (new_list)
[4, 6, 8, 12]
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> pyList = ['e','a','u','o','i']
>>> print (sorted(pyList))
['a', 'e', 'i', 'o', 'u']
>>> pyString = 'Python'
>>> print (sorted(pyString))
['P', 'h', 'n', 'o', 't', 'y']
>>> pyTuple = ('e','a','u','o','i')
>>> print (sorted(pyTuple))
['a', 'e', 'i', 'o', 'u']
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> data_set = ['e','a','u','o','i']
>>> print (sorted(data_set, reverse=True))
['u', 'o', 'i', 'e', 'a']
>>> data_dict = {'e':1,'a':2,'u':3,'o':4,'i':5}
>>> print (sorted(data_dict, reverse=True))
['u', 'o', 'i', 'e', 'a']
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> def takeSecond(elem):
	return elem[1]

>>> random = [(2,2),(3,4),(4,1),(1,3)]
>>> sortedList = sorted(random, key=takeSecond)
>>> print ('Sorted list :', sortedList)
Sorted list : [(4, 1), (2, 2), (1, 3), (3, 4)]
>>> 