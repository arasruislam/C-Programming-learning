double = lambda num: num * 2

result = double(44)
# print(result)

add = lambda x, y: x + y
# print(add(10, 20))

numbers = [12, 34, 32, 456, 64, 23, 54, 23, 64, 3, 74, 85]
print(numbers)
double_nums = map(double, numbers)
print(list(double_nums))
