Python 3.8.2 (tags/v3.8.2:7b3ab59, Feb 25 2020, 22:45:29) [MSC v.1916 32 bit (Intel)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> s = "wel"
>>> print(s+1)
Traceback (most recent call last):
  File "<pyshell#1>", line 1, in <module>
    print(s+1)
TypeError: can only concatenate str (not "int") to str
>>> print(s.lower())
wel
>>> print(s)
wel
>>> s = 'r'
>>> 
================================ RESTART: Shell ================================
>>> even = false
Traceback (most recent call last):
  File "<pyshell#5>", line 1, in <module>
    even = false
NameError: name 'false' is not defined
>>> #aakla
>>> 
================================ RESTART: Shell ================================
>>> bengkoang = 100
>>> timun = "Suri"
>>> buncis = [6,2,7]
>>> buncis.append(bengkoang)
>>> buncis.append(bengkoang)
>>> buncis.append(bengkoang)
>>> buncis.append(timun)
>>> print(buncis)
[6, 2, 7, 100, 100, 100, 'Suri']
>>> 
================================ RESTART: Shell ================================
>>> bengkoang = 100
>>> timun = "Suri"
>>> buncis = [6,2,7]
>>> buncis.append(bengkoang)
>>> buncis.append(bengkoang)
>>> buncis.append(bengkoang)
>>> buncis.append(bengkoang)
>>> buncis.append(timun)
>>> print(buncis)
[6, 2, 7, 100, 100, 100, 100, 'Suri']
>>> 
================================ RESTART: Shell ================================
>>> count = 0
>>> while count < 5:
	print("Hello", end = " ")
	count +=1

	
Hello Hello Hello Hello Hello 
>>> 
================================ RESTART: Shell ================================
>>> x = 2
>>> y = 1
>>> x += y+1
>>> x
4
>>> 
================================ RESTART: Shell ================================
>>> s = "Chapter" + 1
Traceback (most recent call last):
  File "<pyshell#33>", line 1, in <module>
    s = "Chapter" + 1
TypeError: can only concatenate str (not "int") to str
>>> s = input("Chapter" + str(1))
Chapter1
>>> s = "Chapter" + str(1)
>>> s
'Chapter1'
>>> print("Chapter", "1")
Chapter 1
>>> 
================================ RESTART: Shell ================================
>>> print(42%3)
0
>>> print("She said. \"Who's there?\"")
She said. "Who's there?"
>>> print("She said, \"Who's there?\"")
She said, "Who's there?"
>>> 
================================ RESTART: Shell ================================
>>> "upper".islower()
True
>>> "upper".isupper()
False
>>> 3.isdigit()
SyntaxError: invalid syntax
>>> "The Title".istitle()
True
>>> 
================================ RESTART: Shell ================================
>>> if name.startswith("a")
SyntaxError: invalid syntax
>>> if name.startswith("a"):
	print("welcome")
	else:
		
SyntaxError: invalid syntax
>>> if name.startswith("a"):
	print("welcome")
		else:
			
SyntaxError: unexpected indent
>>> if name.startswith("a"):
	print("welcome")
       else:
	       
SyntaxError: unindent does not match any outer indentation level
>>> 
================================ RESTART: Shell ================================
>>> num1 = get_int
Traceback (most recent call last):
  File "<pyshell#52>", line 1, in <module>
    num1 = get_int
NameError: name 'get_int' is not defined
>>> num1 = str(input("1"))
1
>>> num1 = int(input("2"))
2
Traceback (most recent call last):
  File "<pyshell#54>", line 1, in <module>
    num1 = int(input("2"))
ValueError: invalid literal for int() with base 10: ''
>>> num1 = (input("12")).float()
12
Traceback (most recent call last):
  File "<pyshell#55>", line 1, in <module>
    num1 = (input("12")).float()
AttributeError: 'str' object has no attribute 'float'
>>> num1 = int(input("2+1"))
2+1
Traceback (most recent call last):
  File "<pyshell#56>", line 1, in <module>
    num1 = int(input("2+1"))
ValueError: invalid literal for int() with base 10: ''
>>> num1 = str(input("1"))
1
>>> 
================================ RESTART: Shell ================================
>>> even = False
>>> if even = True:
	
SyntaxError: invalid syntax
>>> 
================================ RESTART: Shell ================================
>>> variable:book_title
Traceback (most recent call last):
  File "<pyshell#60>", line 1, in <module>
    variable:book_title
NameError: name 'book_title' is not defined
>>> print("x", book_title)
Traceback (most recent call last):
  File "<pyshell#61>", line 1, in <module>
    print("x", book_title)
NameError: name 'book_title' is not defined
>>> book_title.has("x")
Traceback (most recent call last):
  File "<pyshell#62>", line 1, in <module>
    book_title.has("x")
NameError: name 'book_title' is not defined
>>> book_title.startswith("x")
Traceback (most recent call last):
  File "<pyshell#63>", line 1, in <module>
    book_title.startswith("x")
NameError: name 'book_title' is not defined
>>> "x" in book_title
Traceback (most recent call last):
  File "<pyshell#64>", line 1, in <module>
    "x" in book_title
NameError: name 'book_title' is not defined
>>> 
================================ RESTART: Shell ================================
>>> listku_2143 = [4,6,8,10,12,14,16,18,20,22,24,26,28]
>>> listku_2143
[4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28]
>>> 
================================ RESTART: Shell ================================
>>> bilangan_2143 = [0,1,2,3,4,5,6,7,8,9,10,11,12]
>>> bilangan_2143 [1:10:2]
[1, 3, 5, 7, 9]
>>> bilangan_2143 [0:13:3]
[0, 3, 6, 9, 12]
>>> 
================================ RESTART: Shell ================================
>>> def jumlahkan_2143(*bilangan):
	total = 0
	for n in bilangan:
		total += n
	return total

>>> print(jumlahkan_2143(10,20))
30
>>> print(jumlahkan_2143(10,20,50,60))
140
>>> 
================================ RESTART: Shell ================================
>>> inventory_2143 = {
	'emas' : 500,
	'kantong' : ['korek', 'tali', 'batu'],
	'ransel' : ['timpani', 'pisau', 'kasur', 'roti']
	}
>>> inventory_2143 ['saku'] = ['kerang', 'bandeng', 'berry', 'rumput']
>>> inventory_2143
{'emas': 500, 'kantong': ['korek', 'tali', 'batu'], 'ransel': ['timpani', 'pisau', 'kasur', 'roti'], 'saku': ['kerang', 'bandeng', 'berry', 'rumput']}
>>> sorted('ransel')
['a', 'e', 'l', 'n', 'r', 's']
>>> sort('ransel')
Traceback (most recent call last):
  File "<pyshell#86>", line 1, in <module>
    sort('ransel')
NameError: name 'sort' is not defined
>>> print (sorted(inventory ['ransel']))
Traceback (most recent call last):
  File "<pyshell#87>", line 1, in <module>
    print (sorted(inventory ['ransel']))
NameError: name 'inventory' is not defined
>>> print (sorted(['ransel']))
['ransel']
>>> {k: v for k, in sorted(inventory_2143(), key = lambda item: item[1])}
Traceback (most recent call last):
  File "<pyshell#89>", line 1, in <module>
    {k: v for k, in sorted(inventory_2143(), key = lambda item: item[1])}
TypeError: 'dict' object is not callable
>>> list.sort('ransel')
Traceback (most recent call last):
  File "<pyshell#90>", line 1, in <module>
    list.sort('ransel')
TypeError: descriptor 'sort' for 'list' objects doesn't apply to a 'str' object
>>> ransel.sort()
Traceback (most recent call last):
  File "<pyshell#91>", line 1, in <module>
    ransel.sort()
NameError: name 'ransel' is not defined
>>> 'ransel'.sort()
Traceback (most recent call last):
  File "<pyshell#92>", line 1, in <module>
    'ransel'.sort()
AttributeError: 'str' object has no attribute 'sort'
>>> inventory_2143 ['emas']
500
>>> inventory_2143 ['emas'] + 50
550
>>> 
================================ RESTART: Shell ================================
>>> lst_2143 = = [0,1,4,9,16,25,36,49,64,81]
SyntaxError: invalid syntax
>>> lst_2143 = [0,1,4,9,16,25,36,49,64,81]
>>> 
================================ RESTART: Shell ================================
>>> kuadratkan_lst_2143 = []
>>> for i in range(0, 10):
	i = i * i
	kuadratkan_lst_2143.append(i)

	
>>> print(kuadratkan_lst_2143)
[0, 1, 4, 9, 16, 25, 36, 49, 64, 81]
>>> 
================================ RESTART: Shell ================================
>>> kuadratkan_dict_2143={}
>>> 
================================ RESTART: Shell ================================
>>> kuadratkan_dict_2143 = {}
>>> for i in range(0, 10):
	i = i * i
	kuadratkan_dict_2143.append(i)

	
Traceback (most recent call last):
  File "<pyshell#106>", line 3, in <module>
    kuadratkan_dict_2143.append(i)
AttributeError: 'dict' object has no attribute 'append'
>>> 
================================ RESTART: Shell ================================
>>> kuadratkan_dict_2143 = {}
>>> for i in range(0, 10):
	kuadratkan_dict_2143[i] = i*i

	
>>> kuadratkan_dict_2143
{0: 0, 1: 1, 2: 4, 3: 9, 4: 16, 5: 25, 6: 36, 7: 49, 8: 64, 9: 81}
>>> 