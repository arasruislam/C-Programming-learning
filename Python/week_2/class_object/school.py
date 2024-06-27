class Student:

    def __init__(self, name, current_class, id):
        self.name = name
        self.id = id
        self.current_class = current_class

    def __repr__(self) -> str:
        return (
            f"Student with name {self.name}, class: {self.current_class}, id: {self.id}"
        )


class Teacher:
    def __init__(self, name, subject, id) -> None:
        self.name = name
        self.subject = subject
        self.id = id

    def __repr__(self) -> str:
        return f"Teacher: {self.name}, Subject: {self.subject}"


class School:
    def __init__(self, name):
        self.name = name
        self.teachers = []
        self.students = []

    def add_teacher(self, name, subject):
        id = len(self.teachers) + 101
        teacher = Teacher(name, subject, id)
        self.teachers.append(teacher)

    def enroll(self, name, fee):
        if fee < 6500:
            return "not enough fee"
        else:
            id = len(self.students) + 1
            student = Student(name, "C", id)
            self.students.append(student)
            return f"{name} is enroll with id: {id}, extra money {fee - 6500}"

    def __repr__(self) -> str:
        print("welcome to", self.name)
        print("----------Our teachers---------")
        for teacher in self.teachers:
            print(teacher)
        print("------Our Student------")
        for student in self.students:
            print(student)
        
        return 'all done'


# alia = Student("alia vat", 9, 1)
# ranber = Teacher("Douran Beer", "Algorithm", 101)
# print(alia)

phitron = School("Phitron")
phitron.enroll("Alia", 5200)
phitron.enroll("Rani", 8000)
phitron.enroll("Aishwariya", 7000)
phitron.enroll("Vaijan", 90000)

phitron.add_teacher("Tom Crush", "Data-Structure")
phitron.add_teacher("Decap", 'Algorithm')
phitron.add_teacher('Ajay', 'C++')

print(phitron)