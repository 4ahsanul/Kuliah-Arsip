Python 3.8.2 (tags/v3.8.2:7b3ab59, Feb 25 2020, 22:45:29) [MSC v.1916 32 bit (Intel)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> def max(m,n):
	return m if m > n else n

>>> print (max(10,3))
10
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> max = lambda return m if m > n else n
SyntaxError: invalid syntax
>>> 
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> max = lambda m if m > n else n
SyntaxError: invalid syntax
>>> max = lambda m > n else n
SyntaxError: invalid syntax
>>> max = lambda m, n: if m > n else n
SyntaxError: invalid syntax
>>> max = lambda m, n: m > n
>>> print (max(10, 3))
True
>>> 
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> max = lambda m, n: m > n else n
SyntaxError: invalid syntax
>>> max = lambda m, n: if m > n else n
SyntaxError: invalid syntax
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> def even_fn(x):
	if x % 2 == 0:
		return True
	       return False
	
SyntaxError: unindent does not match any outer indentation level
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> Fahrenheit_List = [98,102,110,125]
>>> Celcius = list(map(lambda x: (x - 32)*5/9, Fahrenheit_List))
>>> print(Celcius)
[36.666666666666664, 38.888888888888886, 43.333333333333336, 51.666666666666664]
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> Fahrenheit_List = [98, 102, 110, 125]
>>> Celcius = list(map(lambda x: (x - 32)*5/9, Fahrenheit_List))
>>> print(Celcius)
[36.666666666666664, 38.888888888888886, 43.333333333333336, 51.666666666666664]
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> Tahun_List = [1992, 1994, 1996, 1998, 2000, 2003, 2004, 2008, 2010, 2012, 2014]
>>> Tahun_Kabisat = list(filter(lambda x: (x % 4) == 0, Tahun_Kabisat))
Traceback (most recent call last):
  File "<pyshell#25>", line 1, in <module>
    Tahun_Kabisat = list(filter(lambda x: (x % 4) == 0, Tahun_Kabisat))
NameError: name 'Tahun_Kabisat' is not defined
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> death = [
	('James', 'Dean', 24),
	('Jimi', 'Hendrix', 27),
	('George', 'Gershwin', 38)]
>>> death()
Traceback (most recent call last):
  File "<pyshell#30>", line 1, in <module>
    death()
TypeError: 'list' object is not callable
>>> death[]
SyntaxError: invalid syntax
>>> death
[('James', 'Dean', 24), ('Jimi', 'Hendrix', 27), ('George', 'Gershwin', 38)]
>>> death.sort(key=lambda tup: tup[3])
Traceback (most recent call last):
  File "<pyshell#33>", line 1, in <module>
    death.sort(key=lambda tup: tup[3])
  File "<pyshell#33>", line 1, in <lambda>
    death.sort(key=lambda tup: tup[3])
IndexError: tuple index out of range
>>> death.sort(key=lambda list: list[3])
Traceback (most recent call last):
  File "<pyshell#34>", line 1, in <module>
    death.sort(key=lambda list: list[3])
  File "<pyshell#34>", line 1, in <lambda>
    death.sort(key=lambda list: list[3])
IndexError: tuple index out of range
>>> death.sort(key=lambda lst: lst[3])
Traceback (most recent call last):
  File "<pyshell#35>", line 1, in <module>
    death.sort(key=lambda lst: lst[3])
  File "<pyshell#35>", line 1, in <lambda>
    death.sort(key=lambda lst: lst[3])
IndexError: tuple index out of range
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> death = [
	('James', 'Dean', 24),
	('Jimi', 'Hendrix', 27),
	('George', 'Gershwin', 38)]
>>> def takeThird(elem):
	return elem[3]

>>> sortedList = sorted(death, key=takeThird)
Traceback (most recent call last):
  File "<pyshell#40>", line 1, in <module>
    sortedList = sorted(death, key=takeThird)
  File "<pyshell#39>", line 2, in takeThird
    return elem[3]
IndexError: tuple index out of range
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> def takeThird(elem):
	return elem[3]

>>> death = [
	('James', 'Dean', 24),
	('Jimi', 'Hendrix', 27),
	('George', 'Gershwin', 38)]
>>> sortedList = sorted(death, key=takeThird)
Traceback (most recent call last):
  File "<pyshell#44>", line 1, in <module>
    sortedList = sorted(death, key=takeThird)
  File "<pyshell#42>", line 2, in takeThird
    return elem[3]
IndexError: tuple index out of range
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> list_a = [1,2,3]
>>> list_b = [10,20,30]
>>> jumlah(x) = lambda a + b
SyntaxError: invalid syntax
>>> jumlah(x) lambda a, b: a + b
SyntaxError: invalid syntax
>>> jumlah(x) = lambda a, b: a + b
SyntaxError: cannot assign to function call
>>> jumlah = lambda a,b: a+b
>>> list(map(jumlah, list_a, list_b))
[11, 22, 33]
>>> 
============================================================================ RESTART: Shell ===========================================================================
>>> #19102143
>>> list_a = [1,2,3]
>>> list_b = [10,20,30]
>>> jumlah = lambda a,b: a+b
>>> list(map(jumlah, list_a, list_b))
[11, 22, 33]
>>> 
================================= RESTART: Shell ================================
>>> def even_fn(x):
	if x % 2 == 0:
		return True
	else
	
SyntaxError: invalid syntax
>>> 
================================= RESTART: Shell ================================
>>> def even_fn(x):
	if x % 2 == 0:
		return True
		else
		
SyntaxError: invalid syntax
>>> 
================================= RESTART: Shell ================================
>>> def even_fn(x):
	if x % 2 == 0:
		return True
	else:
		return False

	
>>> even_fn = lambda x: return True if x % 2 == 0 else return False
SyntaxError: invalid syntax
>>> even_fn = lambda x: x == 0 if x % 2 else return False
SyntaxError: invalid syntax
>>> even_fn = lambda x: x == 0 if x % 2 else False
>>> x = 2
>>> print (even_fn(x))
False
>>> 
================================= RESTART: Shell ================================
>>> def even_fn(x):
	if x % 2 == 0:
		return True
	else:
		return False

	
>>> even_fn = lambda x: True if x % 2 == 0 else False
>>> x = 4
>>> print (even_fn(x))
True
>>> list = [1,3,2,5,20,21]
>>> print (even_fn(list))
Traceback (most recent call last):
  File "<pyshell#85>", line 1, in <module>
    print (even_fn(list))
  File "<pyshell#80>", line 1, in <lambda>
    even_fn = lambda x: True if x % 2 == 0 else False
TypeError: unsupported operand type(s) for %: 'list' and 'int'
>>> list_a = [1,3,2,5,20,21]
>>> list_genap = list(filter(lambda x: (x % 2 == 0), list_a))
Traceback (most recent call last):
  File "<pyshell#87>", line 1, in <module>
    list_genap = list(filter(lambda x: (x % 2 == 0), list_a))
TypeError: 'list' object is not callable
>>> 
================================= RESTART: Shell ================================
>>> def even_fn(x):
	if x % 2 == 0:
		return True
	else:
		return False

	
>>> list_a = [1,3,2,5,20,21]
>>> list_genap = list(filter(lambda x: (x % 2 == 0), list_a))
>>> print (list_genap)
[2, 20]
>>> 
================================= RESTART: Shell ================================
>>> def even_fn(x):
	if x % 2 == 0:
		return True
	else:
		return False

	
>>> even_fn = lambda x: True if (x % 2 == 0) else False
>>> x = [1,3,2,5,20,21]
>>> print (list_genap)
Traceback (most recent call last):
  File "<pyshell#97>", line 1, in <module>
    print (list_genap)
NameError: name 'list_genap' is not defined
>>> 
================================= RESTART: Shell ================================
>>> list_a = [1,3,2,5,20,21]
>>> list_genap = list(filter(lambda x: (x % 2 == 0), list_a))
>>> print (list_genap)
[2, 20]
>>> 
================================= RESTART: Shell ================================
>>> even_fn = lambda x: True if (x % 2 == 0) else False
>>> x = 4
>>> print (even_fn(x))
True
>>> 
================================= RESTART: Shell ================================
>>> maxi = lambda x, n: m if m > n else n
>>> print (maxi(10,3))
Traceback (most recent call last):
  File "<pyshell#105>", line 1, in <module>
    print (maxi(10,3))
  File "<pyshell#104>", line 1, in <lambda>
    maxi = lambda x, n: m if m > n else n
NameError: name 'm' is not defined
>>> 
================================= RESTART: Shell ================================
>>> maxi = lambda m, n: m if m > n else n
>>> print (maxi(10,3))
10
>>> 
================================= RESTART: Shell ================================
>>> Tahun_List = [1992, 1994, 1996, 1998, 2000, 2003, 2004, 2008, 2010, 2012]
>>> Tahhun_Kabisat = list(filter(lambda x: (x % 400 == 0) elif (x % 100 == 0) elif (x % 4 == 0), Tahun_List))
SyntaxError: invalid syntax
>>> Tahun_Kabisat = list(filter(lambda x: (x % 400 == 0) else (if (x % 100 == 0)) else (if (x % 4 == 0)), Tahun_List))
SyntaxError: invalid syntax
>>> Tahun_Kabisat = list(filter(lambda x: if (x % 400 == 0) else (if (x % 100 == 0)) else (if (x % 4 == 0)), Tahun_List))
SyntaxError: invalid syntax
>>> Tahun_Kabisat = list(filter(lambda x: True if (x % 400 == 0) else (if (x % 100 == 0)) else (if (x % 4 == 0)), Tahun_List))
SyntaxError: invalid syntax
>>> ahhun_Kabisat = list(filter(lambda x: True if (x % 400 == 0) elif (x % 100 == 0) elif (x % 4 == 0), Tahun_List))
SyntaxError: invalid syntax
>>> 
================================= RESTART: Shell ================================
>>> Tahun_List = [1992, 1994, 1996, 1998, 2000, 2003, 2004, 2008, 2010, 2012]
>>> Tahun_Kabisat = list(filter(lambda x: (x % 4 == 0), Tahun_List))
>>> print (Tahun_Kabisat)
[1992, 1996, 2000, 2004, 2008, 2012]
>>> 
================================= RESTART: Shell ================================
>>> a = [5,9,2,4,7]
>>> b = [3,7,1,9,2]
>>> c = [6,8,0,5,3]
>>> 
================================= RESTART: Shell ================================
>>> dict_a = [{'name': 'python', 'points' : 10}, {'name': 'java', 'points': 8}]
>>> hasil = lambda elem[1]
SyntaxError: invalid syntax
>>> hasil = lambda: elem[1]
>>> dict(map(hasil, dict_a))
Traceback (most recent call last):
  File "<pyshell#123>", line 1, in <module>
    dict(map(hasil, dict_a))
TypeError: <lambda>() takes 0 positional arguments but 1 was given
>>> 
================================= RESTART: Shell ================================
>>> dict_a = [{'name': 'python', 'points' : 10}, {'name': 'java', 'points': 8}]
>>> hasil(elem) = lambda elem[1]
SyntaxError: invalid syntax
>>> hasil(elem) = lambda elem: elem[1]
SyntaxError: cannot assign to function call
>>> hasil(elem) = lambda: elem[1]
SyntaxError: cannot assign to function call
>>> hasil(x) = lambda x[1]
SyntaxError: invalid syntax
>>> hasi; = lambda x: x[1]
SyntaxError: invalid syntax
>>> hasil = lambda x: x[1]
>>> dict(map(hasil, dict_a))
Traceback (most recent call last):
  File "<pyshell#132>", line 1, in <module>
    dict(map(hasil, dict_a))
  File "<pyshell#130>", line 1, in <lambda>
    hasil = lambda x: x[1]
KeyError: 1
>>> hasil = lambda elem: elem[1]
>>> dict(map(hasil,dict_a))
Traceback (most recent call last):
  File "<pyshell#134>", line 1, in <module>
    dict(map(hasil,dict_a))
  File "<pyshell#133>", line 1, in <lambda>
    hasil = lambda elem: elem[1]
KeyError: 1
>>> 
================================= RESTART: Shell ================================
>>> dict_a = [{'name': 'python', 'points' : 10}, {'name': 'java', 'points': 8}]
>>> hasil = dict(filter(lambda name: name == 'python'))
Traceback (most recent call last):
  File "<pyshell#136>", line 1, in <module>
    hasil = dict(filter(lambda name: name == 'python'))
TypeError: filter expected 2 arguments, got 1
>>> 
================================= RESTART: Shell ================================
>>> my_list = [12, 65, 54, 39, 102, 339, 221, 50,70]
>>> my_list = [12, 65, 54, 39, 102, 339, 221, 50,70]
>>> hasil = list(filter(lambda x: (x % 13 == 0), my_list))
>>> print (hasil)
[65, 39, 221]
>>> 
================================= RESTART: Shell ================================
>>> death = [
	('James', 'Dean', 24),
	('Jimi', 'Hendrix', 27),
	('George', 'Gershwin', 38)]
>>> takeAge = lambda x: x = [2]
SyntaxError: cannot assign to lambda
>>> 
================================= RESTART: Shell ================================
>>> takeAge = lambda x: x[2]
>>> death = [
	('James', 'Dean', 24),
	('Jimi', 'Hendrix', 27),
	('George', 'Gershwin', 38)]
>>> sortedList = sorted(death, key = takeAge)
>>> print (sortedList)
[('James', 'Dean', 24), ('Jimi', 'Hendrix', 27), ('George', 'Gershwin', 38)]
>>> 
================================= RESTART: Shell ================================
>>> list_a = [1,2,3]
>>> list_b = [10,20,30]
>>> 
================================= RESTART: Shell ================================
>>> dict_a = [{'name': 'python', 'points' : 10}, {'name': 'java', 'points': 8}]
>>> elem_name = list(map(lambda x: x['name'], dict_a))
>>> print (elem_name)
['python', 'java']
>>> elem_points = list(map(lambda x: x['points'], dict_a))
>>> print (elem_points)
[10, 8]
>>> 
================================= RESTART: Shell ================================
>>> dict_a = [{'name': 'python', 'points' : 10}, {'name': 'java', 'points': 8}]
>>> elem_points = list(map(lambda x: x['points']*10, dict_a))
>>> print (elem_points)
[100, 80]
>>> 
================================= RESTART: Shell ================================
>>> a = [5,9,2,4,7]
>>> b = [3,7,1,9,2]
>>> c = [6,8,0,5,3]
>>> data_list = zip(a,b,c)
>>> max_list = list(map(lambda x: max(x), data_list))
>>> print (max_list)
[6, 9, 2, 9, 7]
>>> 
================================= RESTART: Shell ================================
>>> dict_a = [{'name': 'python', 'points' : 10}, {'name': 'java', 'points': 8}]
>>> elem_dict = list(map(lambda x, y: x['name'] y = ['points'], dict_a))
SyntaxError: invalid syntax
>>> elem_dict = list(map(lambda x, y: x['name'] and y = ['points'], dict_a))
SyntaxError: expression cannot contain assignment, perhaps you meant "=="?
>>> 
================================= RESTART: Shell ================================
>>> takeA = lambda x:x[1]
>>> dict_a = [{'name': 'python', 'points' : 10}, {'name': 'java', 'points': 8}]
>>> print (dict_a, key = takeA)
Traceback (most recent call last):
  File "<pyshell#169>", line 1, in <module>
    print (dict_a, key = takeA)
TypeError: 'key' is an invalid keyword argument for print()
>>> 
================================= RESTART: Shell ================================
>>> dict_a = [{'name': 'python', 'points' : 10}, {'name': 'java', 'points': 8}]
>>> elem = list(map(lambda x: x[1:1]))
Traceback (most recent call last):
  File "<pyshell#171>", line 1, in <module>
    elem = list(map(lambda x: x[1:1]))
TypeError: map() must have at least two arguments.
>>> 
================================= RESTART: Shell ================================
>>> dict_a = [{'name': 'python', 'points' : 10}, {'name': 'java', 'points': 8}]
>>> hasil = list(filter(lambda x: x['name'] == 'python', dict_a))
>>> print (hasil)
[{'name': 'python', 'points': 10}]
>>> 