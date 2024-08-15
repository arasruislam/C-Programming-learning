# class
class Car:
    def __init__(self, brand, model):
        self.brand = brand
        self.model = model

    def start_engine(self):
        return f"{self.brand} {self.model} engine started."


# create object
myCar = Car("Toyota", "2009")
# print(myCar.start_engine())


# Inheritance
""" 
ইনহেরিটেন্স হলো এমন একটি পদ্ধতি, যার মাধ্যমে একটি ক্লাস অন্য একটি ক্লাসের বৈশিষ্ট্য এবং মেথডগুলো গ্রহণ করতে পারে।

প্রয়োগ:
ধরো, তোমার Vehicle নামে একটি ক্লাস আছে, যেখানে গাড়ির মডেল এবং ব্র্যান্ডের মতো সাধারণ বৈশিষ্ট্যগুলো আছে। তুমি এখন Car, Bike এবং Truck নামে আলাদা ক্লাস তৈরি করতে চাও। এসব ক্লাস Vehicle ক্লাস থেকে ইনহেরিট করতে পারে, যাতে এগুলোর মধ্যে মডেল এবং ব্র্যান্ডের মতো সাধারণ বৈশিষ্ট্যগুলো আবার লিখতে না হয়।
"""


class Vehicle:
    def __init__(self, brand, model) -> None:
        self.brand = brand
        self.model = model

    def start_engine(self):
        return f"{self.brand} {self.model} engine started!!!!"


class Car(Vehicle):
    def open_sunroof(self):
        return "Sunroof opened!!"


my_ody = Car("Honda", "Civic")
# print(my_ody.start_engine())
# print(my_ody.open_sunroof())


# Polymorphism
""" 
পলিমরফিজমের মাধ্যমে একই নামের মেথড বিভিন্ন অবজেক্টে আলাদা ভাবে কাজ করতে পারে। এককথায়, একটি মেথড বিভিন্ন ক্লাসে বিভিন্ন কাজ করতে পারে।

প্রয়োগ:
ধরো, Bird এবং Dog নামে দুটি ক্লাস আছে, যেখানে make_sound() নামে একটি মেথড আছে। Bird ক্লাসে এটি "Chirp" শব্দ তৈরি করে এবং Dog ক্লাসে এটি "Bark" শব্দ তৈরি করে। এখন তুমি একটি ফাংশন তৈরি করতে পারো যা বিভিন্ন পশুর শব্দ তৈরি করতে পারে, এবং সেই ফাংশনটি যে কোনো ক্লাসের মেথডকে ব্যবহার করতে পারে।
"""


class Bird:
    def make_sound(self):
        return "Chirp!!!"


class Dog:
    def make_sound(self):
        return "Bark!!!"


def animal_sound(animal):
    print(animal.make_sound())


bird = Bird()
dog = Dog()

# animal_sound(bird)
# animal_sound(dog)


""" 
এনক্যাপসুলেশন হলো ডেটা এবং মেথডকে ক্লাসের ভেতরে লুকিয়ে রাখা, যাতে বাইরের কোড সরাসরি ডেটা অ্যাক্সেস করতে না পারে। এটি ডেটাকে সুরক্ষিত রাখে এবং কোডকে মডুলার করে।

প্রয়োগ:
ধরো, তোমার একটি BankAccount ক্লাস আছে, যেখানে অ্যাকাউন্টের ব্যালেন্স প্রাইভেট (অর্থাৎ, বাইরের কোনো কোড সরাসরি এটি দেখতে বা পরিবর্তন করতে পারবে না)। তবে ক্লাসের ভেতরে কিছু পাবলিক মেথড থাকবে, যেমন deposit() এবং withdraw(), যা ব্যবহার করে অ্যাকাউন্টের ব্যালেন্স পরিবর্তন করা যাবে।
"""


class bankAccount:
    def __init__(self, balance) -> None:
        self.__balance = balance

    def deposit(self, amount):
        self.__balance += amount

    def get_balance(self):
        return self.__balance


account = bankAccount(1000)
account.deposit(5000)

# print(account.get_balance())

# Abstraction
""" 
অ্যাবস্ট্র্যাকশন হলো কমপ্লেক্সিটিকে লুকিয়ে রেখে শুধুমাত্র প্রয়োজনীয় তথ্য প্রদর্শন করা। এর মাধ্যমে প্রোগ্রামাররা কোডের জটিল অংশগুলো থেকে মুক্তি পায় এবং শুধুমাত্র প্রয়োজনীয় জিনিসগুলোর উপর ফোকাস করতে পারে।

প্রয়োগ:
ধরো, একটি Shape নামে অ্যাবস্ট্রাক্ট ক্লাস আছে, যেখানে area() নামে একটি মেথড আছে। এরপর Circle এবং Rectangle নামে ক্লাস তৈরি করো যা Shape ক্লাস থেকে ইনহেরিট করে এবং area() মেথডটি ইমপ্লিমেন্ট করে।
"""
from abc import ABC, abstractmethod


class Shape(ABC):
    @abstractmethod
    def area(self):
        pass


class Circle(Shape):
    def __init__(self, radius) -> None:
        self.radius = radius

    def area(self):
        return 3.1416 * (self.radius**2)


circle = Circle(5)
print(circle.area())
