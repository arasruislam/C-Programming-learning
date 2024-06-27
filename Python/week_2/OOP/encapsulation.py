# Encapsulation means -> hide details
# access modifier -> public, protected, private


class Bank:
    def __init__(self, holderName, initialDeposit) -> None:
        self.holderName = holderName  # public
        self._branch = "Dhaka"  # protected
        self.__balance = initialDeposit  # private

    def deposit(self, amount):
        self.__balance += amount

    def getBalance(self):
        return self.__balance

    def withdraw(self, amount):
        self.__balance = self.__balance - amount


rafsun = Bank("Chotto bro", 10000)
print(rafsun.holderName)
print(rafsun._branch)
rafsun.deposit(40000)
print(rafsun.getBalance())
# print(dir(rafsun))
print(rafsun._Bank__balance) # access private modifier by any cost
