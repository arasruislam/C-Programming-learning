class calculator:
    brand = 'Casio'

    def add(self, num1, num2):
        sum = num1 + num2
        return sum

    def deduct(self, num1, num2):
        if num1 > num2 :
            result = num1 - num2
            return result
        else:
            result = num2 - num1
            return result
    
    def multiply(self, num1, num2):
        multi = num1 * num2
        return multi
    
    def divide(self, num1, num2):
        division = num1 / num2
        return division

myCalculation = calculator()

print('1 -> ', myCalculation.add(50, 20))
print('2 -> ', myCalculation.deduct(50, 20))
print('3 -> ', myCalculation.multiply(50, 20))
print('4 -> ', myCalculation.divide(50, 20))
