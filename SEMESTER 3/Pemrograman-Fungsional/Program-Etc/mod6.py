Python 3.8.2 (tags/v3.8.2:7b3ab59, Feb 25 2020, 22:45:29) [MSC v.1916 32 bit (Intel)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> import itertools
>>> for a, b in zip(range(5), itertools.count()):
	a, b

	
(0, 0)
(1, 1)
(2, 2)
(3, 3)
(4, 4)
>>> for a, b in zip(range(5, 10), itertools.count(5)):
	a, b

	
(5, 5)
(6, 6)
(7, 7)
(8, 8)
(9, 9)
>>> for a,b in zip(range(5, 10, 4), itertools.count(5,4)):
	a,b

	
(5, 5)
(9, 9)
>>> for a, b in zip(range(5, 10), itertools.count(5, 0.5)):
	a, b

	
(5, 5)
(6, 5.5)
(7, 6.0)
(8, 6.5)
(9, 7.0)
>>> 
================================= RESTART: Shell ================================
>>> for a, b in zip(range(5), itertools.cycle()):
	a, b

	
Traceback (most recent call last):
  File "<pyshell#14>", line 1, in <module>
    for a, b in zip(range(5), itertools.cycle()):
NameError: name 'itertools' is not defined
>>> for a, b in zip(range(5), itertools.cycle(5)):
	a, b

	
Traceback (most recent call last):
  File "<pyshell#16>", line 1, in <module>
    for a, b in zip(range(5), itertools.cycle(5)):
NameError: name 'itertools' is not defined
>>> 
================================= RESTART: Shell ================================
>>> import operator
>>> import itertools
>>> month = [10,8,5,6,12,10,5,8,15,3,4,2]
>>> list(itertools.accumulate(month, operator.add))
[10, 18, 23, 29, 41, 51, 56, 64, 79, 82, 86, 88]
>>> 
================================= RESTART: Shell ================================
>>> import itertools
>>> a = range(3)
>>> b = range(5)
>>> list(itertools.chain(a,b))
[0, 1, 2, 0, 1, 2, 3, 4]
>>> 
================================= RESTART: Shell ================================
>>> import itertools
>>> list (itertools.combinations(range(3), 2))
[(0, 1), (0, 2), (1, 2)]
>>> 
================================= RESTART: Shell ================================
>>> import itertools
>>> list(itertools.combinations_with_replacement(range(3), 2))
[(0, 0), (0, 1), (0, 2), (1, 1), (1, 2), (2, 2)]
>>> 
================================= RESTART: Shell ================================
>>> import itertools
>>> list(itertools.permutations(range(3), 2))
[(0, 1), (0, 2), (1, 0), (1, 2), (2, 0), (2, 1)]
>>> list(range(3))
[0, 1, 2]
>>> 
================================= RESTART: Shell ================================
>>> import itertools
>>> list (itertools.compress(range(1000), [0,1,1,1,0,1]))
[1, 2, 3, 5]
>>> 
================================= RESTART: Shell ================================
>>> import itertools
>>> list (itertools.dropwhile(lambda x: x<= 3, [1,3,5,4,2]))
[5, 4, 2]
>>> 
================================= RESTART: Shell ================================
>>> import itertools
>>> list (itertools.takewhile(lambda x: x<= 3, [1,3,5,4,2]))
[1, 3]
>>> 
================================= RESTART: Shell ================================
>>> import itertools
>>> items = [('a',1),('a',2),('b',2),('b',0),('c',3)]
>>> for group, item in itertools.groupby (items, lambda x: x[0]):
	print('%s: %s' % (group, [v for k, v  in items]))

	
a: [1, 2, 2, 0, 3]
b: [1, 2, 2, 0, 3]
c: [1, 2, 2, 0, 3]
>>> 
================================= RESTART: Shell ================================
>>> import itertools
>>> for group, item in itertools.groupby (items, lambda x: x[0]):
	print('%s: %s' (group, [v for k, v  in items]))

	
Traceback (most recent call last):
  File "<pyshell#45>", line 1, in <module>
    for group, item in itertools.groupby (items, lambda x: x[0]):
NameError: name 'items' is not defined
>>> for group, item in itertools.groupby (items, lambda x: x[1]):
	print('%s: %s' % (group, [v for k, v  in items]))

	
Traceback (most recent call last):
  File "<pyshell#47>", line 1, in <module>
    for group, item in itertools.groupby (items, lambda x: x[1]):
NameError: name 'items' is not defined
>>> 
================================= RESTART: Shell ================================
>>> import itertools
>>> items = [('a',1),('a',2),('b',2),('b',0),('c',3)]
>>> for group, item in itertools.groupby (items, lambda x: x[0]):
	print('%s: %s' (group, [v for k, v  in items]))

	
Traceback (most recent call last):
  File "<pyshell#51>", line 2, in <module>
    print('%s: %s' (group, [v for k, v  in items]))
TypeError: 'str' object is not callable
>>> for group, item in itertools.groupby (items, lambda x: x[1]):
	print('%s: %s' % (group, [v for k, v  in items]))

	
1: [1, 2, 2, 0, 3]
2: [1, 2, 2, 0, 3]
0: [1, 2, 2, 0, 3]
3: [1, 2, 2, 0, 3]
>>> for group, item in itertools.groupby (items, lambda x: x[-1]):
	print('%s: %s' % (group, [v for k, v  in items]))

	
1: [1, 2, 2, 0, 3]
2: [1, 2, 2, 0, 3]
0: [1, 2, 2, 0, 3]
3: [1, 2, 2, 0, 3]
>>> for group, item in itertools.groupby (items, lambda x: x[3]):
	print('%s: %s' % (group, [v for k, v  in items]))

	
Traceback (most recent call last):
  File "<pyshell#57>", line 1, in <module>
    for group, item in itertools.groupby (items, lambda x: x[3]):
  File "<pyshell#57>", line 1, in <lambda>
    for group, item in itertools.groupby (items, lambda x: x[3]):
IndexError: tuple index out of range
>>> for group, item in itertools.groupby (items, lambda x: x[]):
	print('%s: %s' % (group, [v for k, v  in items]))
	
SyntaxError: invalid syntax
>>> for group, item in itertools.groupby (items, lambda x: x[0]):
	print('%s: %s' % (group, [v for k, v  in items]))

	
a: [1, 2, 2, 0, 3]
b: [1, 2, 2, 0, 3]
c: [1, 2, 2, 0, 3]
>>> 
================================= RESTART: Shell ================================
>>> 
================================= RESTART: Shell ================================
>>> import itertools
>>> items = [('a',1),('a',2),('b',2),('b',0),('c',3)]
>>> for group, items in itertools.groupby(items, lambda x: x[0]):
	print('%s : %s' % (group, [v for k, v in items]))

	
a : [1, 2]
b : [2, 0]
c : [3]
>>> 
================================= RESTART: Shell ================================
>>> import itertools
>>> tems = [('a',1),('a',2),('b',2),('b',0),('c',3)]
>>> groups = dict()
>>> for group, items in itertools.groupby(items, lambda x: x[0]):
	groups[group] = items
	print('%s : %s' % (group, [v for k, v in items]))

	
Traceback (most recent call last):
  File "<pyshell#72>", line 1, in <module>
    for group, items in itertools.groupby(items, lambda x: x[0]):
NameError: name 'items' is not defined
>>> 
================================= RESTART: Shell ================================
>>> import itertools
>>> items = [('a',1),('a',2),('b',2),('b',0),('c',3)]
>>> groups = dict()
>>> for group, items in itertools.groupby(items, lambda x: x[0]):
	groups[group] = items
	print('%s : %s' % (group, [v for k, v in items]))

	
a : [1, 2]
b : [2, 0]
c : [3]
>>> 
================================= RESTART: Shell ================================
>>> import itertools
>>> items = [('a',1),('b',0),('b',2),('a',2),('c',3)]
>>> groups = dict()
>>> for group, items in itertools.groupby(items, lambda x: x[0]):
	groups[group] = items
	print('%s : %s' % (group, [v for k, v in items]))

	
a : [1]
b : [0, 2]
a : [2]
c : [3]
>>> 