class Animal:
    def eat(self):
        pass

    def move(self):
        pass


class Monkey(Animal):
    def __init__(self,name, category) -> None:
        self.name = "Monkey"
        self.name = name
        super().__init__()
 