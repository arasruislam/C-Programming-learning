""" 
1. List --> []
2. tuple --> ()
3. set --> {}
set: unique items collection. No duplicate allow.
"""

numbers = [12, 34, 32, 456, 64, 23 , 54, 23, 64,3 ,74,85]
# print(f'1.',numbers)
numbers_set = set(numbers)
# print(f'2.',numbers_set)
numbers_set.add(55)
# print(f'3.', numbers_set)

""" 
If need to remove anything
number_set.remove(item)
"""

A = {1, 3, 5, 7}
B = {1, 2, 3, 4, 5}
print(A & B)
print(A | B)