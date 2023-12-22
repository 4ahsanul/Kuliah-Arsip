Python 3.7.0 (v3.7.0:1bf9cc5093, Jun 27 2018, 04:59:51) [MSC v.1914 64 bit (AMD64)] on win32
Type "copyright", "credits" or "license()" for more information.
>>> class huruf_vokal:
	huruf_vokal = ['a','i','u','e','o']
	def __reversed__(self):
		return reversed (self.huruf_vokal)

	
>>> v = huruf_vokal()
>>> print (list(reversed))
Traceback (most recent call last):
  File "<pyshell#6>", line 1, in <module>
    print (list(reversed))
TypeError: 'type' object is not iterable
>>> print (list(reversed(v)))
['o', 'e', 'u', 'i', 'a']
>>> 
