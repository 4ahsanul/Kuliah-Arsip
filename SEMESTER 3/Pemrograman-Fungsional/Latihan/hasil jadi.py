Python 3.8.2 (tags/v3.8.2:7b3ab59, Feb 25 2020, 22:45:29) [MSC v.1916 32 bit (Intel)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> #19102143
>>> list_a = [1,2,3]
>>> list_b = [10,20,30]
>>> 
================================= RESTART: Shell ================================
>>> #19102143
>>> list_a = [1,2,3]
>>> list_b = [10,20,30]
>>> jumlah = lambda a,b: a+b
>>> list(map(jumlah, list_a, list_b))
[11, 22, 33]
>>> 
================================= RESTART: Shell ================================
>>> Fahrenheit_List = [98, 102, 110, 125]
>>> 
================================= RESTART: Shell ================================
>>> #19102143
>>> Fahrenheit_List = [98, 102, 110, 125]
>>> Celcius = list(map(lambda x: (x - 32)*5/9, Fahrenheit_List))
>>> print(Celcius)
[36.666666666666664, 38.888888888888886, 43.333333333333336, 51.666666666666664]
>>> 
================================= RESTART: Shell ================================
>>> #19102143
>>> maxi = lambda m, n: m if m > n else n
>>> print (maxi(10,3))
10
>>> 
================================= RESTART: Shell ================================
>>> #19102143
>>> #Menggunakan Fungsi map dan Lambda untuk menjumlahkan
>>> list_a = [1,2,3]
>>> list_b = [10,20,30]
>>> jumlah = lambda a,b: a+b
>>> list(map(jumlah, list_a, list_b))
[11, 22, 33]
>>> 
================================= RESTART: Shell ================================
>>> #19102143
>>> #Mengkonversi program menggunakan map dan lambda
>>> Fahrenheit_List = [98, 102, 110, 125]
>>> Celcius = list(map(lambda x: (x - 32)*5/9, Fahrenheit_List))
>>> print(Celcius)
[36.666666666666664, 38.888888888888886, 43.333333333333336, 51.666666666666664]
>>> 
================================= RESTART: Shell ================================
>>> #19102143
>>> #Membuat fungsi menemukan bil genap menjadi fungsi anonim (lambda)
>>> even_fn = lambda x: True if (x % 2 == 0) else False
>>> x = 4
>>> print (even_fn(x))
True
>>> 
================================= RESTART: Shell ================================
>>> #19102143
>>> #Program untuk melakukan filter data genap menggunkan fungsi anonim (lambda)
>>> list_a = [1,3,2,5,20,21]
>>> list_genap = list(filter(lambda x: (x % 2 == 0), list_a))
>>> print (list_genap)
[2, 20]
>>> 
================================= RESTART: Shell ================================
>>> #19102143
>>> #Membuat program mencari nilai max, dengan fungsi anonim (lambda)
>>> maxi = lambda m, n: m if m > n else n
>>> print (maxi(10,3))
10
>>> 
================================= RESTART: Shell ================================
>>> #19102143
>>> #Mencari tahun kabisat dengan fungsi lambda dan filter
>>> Tahun_List = [1992, 1994, 1996, 1998, 2000, 2003, 2004, 2008, 2010, 2012]
>>> Tahun_Kabisat = list(filter(lambda x: (x % 4 == 0), Tahun_List))
>>> print (Tahun_Kabisat)
[1992, 1996, 2000, 2004, 2008, 2012]
>>> 
================================= RESTART: Shell ================================
>>> #19102143
>>> #Mencari bilangan yang dapat dibagi 13
>>> my_list = [12, 65, 54, 39, 102, 339, 221, 50,70]
>>> hasil = list(filter(lambda x: (x % 13 == 0), my_list))
>>> print (hasil)
[65, 39, 221]
>>> 
================================= RESTART: Shell ================================
>>> #19102143
>>> #Mengurutkan list death sesuai age dengan sorted dan lambda
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
>>> #19102143
>>> #Membentuk objek list dengan nama dan points*10
>>> dict_a = [{'name': 'python', 'points' : 10}, {'name': 'java', 'points': 8}]
>>> elem_name = list(map(lambda x: x['name'], dict_a))
>>> print (elem_name)
['python', 'java']
>>> elem_points = list(map(lambda x: x['points']*10, dict_a))
>>> print (elem_points)
[100, 80]
>>> 
================================= RESTART: Shell ================================
>>> #19102143
>>> #Program zip, map, dan lambda untuk menentukan nilai max dari list
>>> a = [5,9,2,4,7]
>>> b = [3,7,1,9,2]
>>> c = [6,8,0,5,3]
>>> data_list = zip(a,b,c)
>>> max_list = list(map(lambda x: max(x), data_list))
>>> print (max_list)
[6, 9, 2, 9, 7]
>>> 
================================= RESTART: Shell ================================
>>> #19102143
>>> #Program filter dan lambda untuk menyeleski name dan point bersamaan
>>> dict_a = [{'name': 'python', 'points' : 10}, {'name': 'java', 'points': 8}]
>>> hasil = list(filter(lambda x: x=['name'] == 'python', dict_a))
SyntaxError: expression cannot contain assignment, perhaps you meant "=="?
>>> 
================================= RESTART: Shell ================================
>>> #19102143
>>> #Program filter dan lambda untuk menyeleski name dari python
>>> dict_a = [{'name': 'python', 'points' : 10}, {'name': 'java', 'points': 8}]
>>> hasil = list(filter(lambda x: x=['name'] == 'python', dict_a))
SyntaxError: expression cannot contain assignment, perhaps you meant "=="?
>>> 
================================= RESTART: Shell ================================
>>> #19102143
>>> #Program filter dan lambda untuk menyeleski name dari python
>>> dict_a = [{'name': 'python', 'points' : 10}, {'name': 'java', 'points': 8}]
>>> hasil = list(filter(lambda x: x=['name'] = 'python', dict_a))
SyntaxError: invalid syntax
>>> 
================================= RESTART: Shell ================================
>>> 
================================= RESTART: Shell ================================
>>> #19102143
>>> #Program filter dan lambda untuk menyeleski name dari python
>>> dict_a = [{'name': 'python', 'points' : 10}, {'name': 'java', 'points': 8}]
>>> hasil = list(filter(lambda x: x['name'] == 'python', dict_a))
>>> print (hasil)
[{'name': 'python', 'points': 10}]
>>> 