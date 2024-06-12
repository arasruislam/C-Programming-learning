def famous_name(first, second, **addition):
    print(addition)
    name = f'{first} {second}'
    # print(addition['title'])   for single value 
    for key, value in addition.items():
        print(key, value)
    return name

name= famous_name(first='Asru', second='Islam', title='Student', varsity='CU')

print(name)



# Return multiple value at once
def a_lot(num1, num2):
    sum = num1 + num2
    multi = num2 * num1
    remain = num1 % num2
    return sum, multi, remain

everything = a_lot(55, 21)
print(everything)


