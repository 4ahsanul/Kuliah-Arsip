Python 3.8.2 (tags/v3.8.2:7b3ab59, Feb 25 2020, 22:45:29) [MSC v.1916 32 bit (Intel)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> def lowercase(func):
	def wrapper():
		func_ret = func()
		change_to_lowercase = func_ret.lower()
		return change_to_lowercase
	return wrapper

>>> def hello_function():
	return 'HELLO WORLD'

>>> decorate = lowercase(hello_function)
>>> print(decorate())
hello world
>>> @lowercase
def hello_function():
	return 'HELLO WORLD'

>>> print(hello_function())
hello world
>>> 
================================ RESTART: Shell ================================
>>> def split_setence(func):
	def wrapper():
		func_ret = func()
		output = func_ret.split()
		return output
	return wrapper

>>> @split_setence
@lowercase
def hello_function():
	return 'HELLO WORLD'

Traceback (most recent call last):
  File "<pyshell#13>", line 2, in <module>
    @lowercase
NameError: name 'lowercase' is not defined
>>> 
================================ RESTART: Shell ================================
>>> def split_setence(func):
	def wrapper():
		func_ret = func()
		output = func_ret.split()
		return output
	return wrapper

>>> def lowercase(func):
	def wrapper():
		func_ret = func()
		change_to_lowercase = func_ret.lower()
		return change_to_lowercase
	return wrapper

>>> @split_setence
@lowercase
def hello_function():
	return 'HELLO WORLD'

>>> print(hello_fucntion())
Traceback (most recent call last):
  File "<pyshell#20>", line 1, in <module>
    print(hello_fucntion())
NameError: name 'hello_fucntion' is not defined
>>> 
================================ RESTART: Shell ================================
>>> def split_setence(func):
	def wrapper():
		func_ret = func()
		output = func_ret.split()
		return output
	return wrapper

>>> def lowercase(func):
	def wrapper():
		func_ret = func()
		change_to_lowercase = func_ret.lower()
		return change_to_lowercase
	return wrapper

>>> @split_setence
@lowercase
def hello_function():
	return 'HELLO WORLD'

>>> print(hello_function())
['hello', 'world']
>>> 
================================= RESTART: Shell ================================
>>> import functools
>>> def memoize(function):
	function.cache = dict()
	@functools.wraps(function)
	def _memoize(*args):
		if args not in function.cache:
			function.cache[args] = function(*args)
		return function.cache[args]
	return _memoize

>>> @memoize
def fibonacci(n):
	if n < 2:
		return n
	else:
		return fibonacci(n-1) + fibonacci(n-2)

	
>>> for i in range(1,7):
	print('fibonacci %d: %d' % (i, fibonacci(i)))

	
fibonacci 1: 1
fibonacci 2: 1
fibonacci 3: 2
fibonacci 4: 3
fibonacci 5: 5
fibonacci 6: 8
>>> 
================================= RESTART: Shell ================================
>>> import functools
>>> def counter(function):
	function.calls = 0
	@functools.wraps(function)
	def _counter(*args, **kwargs):
		function.calls += 1
		return function(*args, **kwargs)
	return _counter

>>> @functools.lru_cache(maxsize=3)
@counter
def fibonacci(n):
	if n < 2:
		return n
	else:
		return fibonacci(n-1) + fibonacci(n-2)

	
>>> fibonacci(100)
354224848179261915075
>>> 