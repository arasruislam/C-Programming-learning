# def sum(num1, num2, num3=0):
#     result = num1 + num2 + num3
#     return result

# total = sum(99, 11, 40)
# print("total", total)

# Args
def all_sum(*numbers):
    print(numbers)
    sum =0
    for num in numbers:
        sum += num
    return sum
    
total = all_sum(45, 4 ,23, 5)
print("All sum", total)