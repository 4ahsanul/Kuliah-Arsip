Python 3.8.2 (tags/v3.8.2:7b3ab59, Feb 25 2020, 22:45:29) [MSC v.1916 32 bit (Intel)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> x = [1,2,3]
>>> def fungsi_sederhana(x):
	x[1] = 42

	
>>> fungsi_sederhana(x)
>>> print(x)
[1, 42, 3]
>>> 
================================ RESTART: Shell ================================
>>> PI = 3.141592
>>> print (5*5*PI)
78.5398
>>> print (10*10*PI)
314.1592
>>> 
================================= RESTART: Shell ================================
>>> PI = 3.141592
>>> def luas_lingkaran(r):
	return PI*r*r

>>> print(luar_lingkaran(5))
Traceback (most recent call last):
  File "<pyshell#13>", line 1, in <module>
    print(luar_lingkaran(5))
NameError: name 'luar_lingkaran' is not defined
>>> 
================================= RESTART: Shell ================================
>>>  PI = 3.141592
>>> def luas_lingkaran(r):
	return PI*r*r
SyntaxError: unexpected indent
>>> 
================================= RESTART: Shell ================================
>>> PI = 3.141592
>>> def luas_lingkaran(r):
	return PI*r*r
SyntaxError: multiple statements found while compiling a single statement
>>> PI = 3.141592
>>> def luas_lingkaran(r):
	return PI*r*r

>>> print(luas_lingkaran(5))
78.5398
>>> print(luas_lingkaran(10))
314.1592
>>> 
================================= RESTART: Shell ================================
>>> def tambah(a,b,c)
SyntaxError: invalid syntax
>>> 
================================= RESTART: Shell ================================
>>> def tambah(a,b,c):
	return a+b+c

>>> print(tambah(1,2,3))
6
>>> 
================================= RESTART: Shell ================================
>>> def tambah(*bilangan):
	total = 0
	for n in bilangan:
		total += n
	return total

>>> print(tambah(1,2,3,4,5,6))
21
>>> 
================================= RESTART: Shell ================================
>>> import math
>>> dir (math)
['__doc__', '__loader__', '__name__', '__package__', '__spec__', 'acos', 'acosh', 'asin', 'asinh', 'atan', 'atan2', 'atanh', 'ceil', 'comb', 'copysign', 'cos', 'cosh', 'degrees', 'dist', 'e', 'erf', 'erfc', 'exp', 'expm1', 'fabs', 'factorial', 'floor', 'fmod', 'frexp', 'fsum', 'gamma', 'gcd', 'hypot', 'inf', 'isclose', 'isfinite', 'isinf', 'isnan', 'isqrt', 'ldexp', 'lgamma', 'log', 'log10', 'log1p', 'log2', 'modf', 'nan', 'perm', 'pi', 'pow', 'prod', 'radians', 'remainder', 'sin', 'sinh', 'sqrt', 'tan', 'tanh', 'tau', 'trunc']
>>> math.pi
3.141592653589793
>>> def volume(r):
	v = (4.0/3.0) * math.pi * r**3

	
>>> print volume(2)
SyntaxError: invalid syntax
>>> volume(2)
>>> 
>>> volume(2)
>>> 
================================= RESTART: Shell ================================
>>> import math
>>> dir (math)
['__doc__', '__loader__', '__name__', '__package__', '__spec__', 'acos', 'acosh', 'asin', 'asinh', 'atan', 'atan2', 'atanh', 'ceil', 'comb', 'copysign', 'cos', 'cosh', 'degrees', 'dist', 'e', 'erf', 'erfc', 'exp', 'expm1', 'fabs', 'factorial', 'floor', 'fmod', 'frexp', 'fsum', 'gamma', 'gcd', 'hypot', 'inf', 'isclose', 'isfinite', 'isinf', 'isnan', 'isqrt', 'ldexp', 'lgamma', 'log', 'log10', 'log1p', 'log2', 'modf', 'nan', 'perm', 'pi', 'pow', 'prod', 'radians', 'remainder', 'sin', 'sinh', 'sqrt', 'tan', 'tanh', 'tau', 'trunc']
>>> math.pi
3.141592653589793
>>> def volume(r):
	v = (4.0/3.0) * math.pi * r**3

	
>>> volume(2)
>>> 33.510321638291124
33.510321638291124
>>> 
================================= RESTART: Shell ================================
>>> def triangle_area(b,h)
SyntaxError: invalid syntax
>>> 
================================= RESTART: Shell ================================
>>> def triangle_area(b,h):
	return 0.5 * b * h

>>> triangle_area(3,6)
9.0
>>> 
================================= RESTART: Shell ================================
>>> def connect(**options):
	conn_params = {
		'host': options.get('host', '127.0.0.1'),
		'port': options.get('port', 5432),
		'user': options.get('user', ''),
		'pwd' : options.get('pwd', ''),
		}
	print(conn_params)

	
>>> connect()
{'host': '127.0.0.1', 'port': 5432, 'user': '', 'pwd': ''}
>>> connect(host='127.0.0.1', port=5433)
{'host': '127.0.0.1', 'port': 5433, 'user': '', 'pwd': ''}
>>> connect(port=5431, user='filfimo', pwd='hulqi')
{'host': '127.0.0.1', 'port': 5431, 'user': 'filfimo', 'pwd': 'hulqi'}
>>> 
================================= RESTART: Shell ================================
>>> price = 100
>>> final_price1 - price * 1.2
Traceback (most recent call last):
  File "<pyshell#68>", line 1, in <module>
    final_price1 - price * 1.2
NameError: name 'final_price1' is not defined
>>> 
================================= RESTART: Shell ================================
>>> price = 100
>>> final_price1 = price * 1.2
>>> final_price2 = price + price /5.0
>>> final_price3 = price * (100 + 20) / 100.0
>>> final_price4 = price + price * 0.2
>>> print (final_price1)
120.0
>>> print (final_price2)
120.0
>>> print (final_price3)
120.0
>>> print (final_price4)
120.0
>>> 
================================= RESTART: Shell ================================
>>> def calculate_price_with_vat(price, vat):
	return price * (100 + vat) / 100

>>> calculate_price_with_vat(200,10)
220.0
>>> 
================================= RESTART: Shell ================================
>>> def minimum(*n)
SyntaxError: invalid syntax
>>> 
================================= RESTART: Shell ================================
>>> def minimum(*n):
	if n:
		mn = n[0]
		for value in n[1:]:
			if value < mn:
				mn = value
		print(mn)

		
>>> minimum(2,3,5,0,-3,20,-3)
-3
>>> 
================================= RESTART: Shell ================================
>>> def matrix_mul(a,b):
	return [[sum(i*j for i, j in zip(r, c)) for c in zip(*b)] for r in a]

>>> a = [[1,2], [3,4]]
>>> b = [[5,1], [2,1]]
>>> c = matrix_mul(a,b)
>>> print (c)
[[9, 3], [23, 7]]
>>> 
================================= RESTART: Shell ================================
>>> def rataan(bil1, bil2):
	rataan = (bil1 + bil2)/2
	print(rataan)

	
>>> rataan(10,2)
6.0
>>> 
================================= RESTART: Shell ================================
>>> def summ(a,b):
	total = 0
	for bil_hasil in list (range(a,b+1)):
		total = total + bil_hasil
	return total

>>> summ(1,5)
15
>>> 
================================= RESTART: Shell ================================
>>> list_ku = [4,10,3,0,7]
>>> test_iter = iter(list_ku)
>>> print (next(test_iter))
4
>>> print (next(test_iter))
10
>>> print (next(test_iter))
3
>>> print (next(test_iter))
0
>>> print (next(test_iter))
7
>>> 
================================= RESTART: Shell ================================
>>> list_ku = [4,10,3,0,7]
>>> for angka in list_ku:
	print(angka)

	
4
10
3
0
7
>>> 
================================= RESTART: Shell ================================
>>> def cth_generator(l):
	total = 0
	for n in l:
	 yield total
	 total += n

	 
>>> test_generator = cth_generator ([10,20,30,40,50])
>>> print(next(test_generator))
0
>>> print(next(test_generator))
10
>>> print(next(test_generator))
30
>>> 
================================= RESTART: Shell ================================
>>> range (10)
range(0, 10)
>>> [range(10)]
[range(0, 10)]
>>> [x for x in range (10)]
[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
>>> list (range(10))
[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
>>> [x for x in range (30)]
[0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29]
>>> list (range(30))
[0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29]
>>> range (30)
range(0, 30)
>>> [range(30)]
[range(0, 30)]
>>> 
================================= RESTART: Shell ================================
>>> def maksimum(*n):
	if n:
		mn = n[0]
		for value in n[1:]:
			if value > mn:
				mn = value
		print(mn)

		
>>> maksimum(1,3,-7,9)
9
>>> 