class Star_Cinema:
    hall_list = []

    def entry_hall(self, hall):
        Star_Cinema.hall_list.append(hall)


class Hall(Star_Cinema):
    def __init__(self, rows, cols, hall_no) -> None:
        self.__seats = {}
        self.__show_list = []
        self.__rows = rows
        self.__cols = cols
        self.__hall_no = hall_no
        super().entry_hall(self)

    def entry_show(self, id, movie_name, time):
        show = (id, movie_name, time)
        self.__show_list.append(show)
        self.__seats[id] = []
        for row in range(self.__rows):
            row_seats = []
            for col in range(self.__cols):
                row_seats.append("Free")

            self.__seats[id].append(row_seats)

    def book_seats(self, id, seat_position):
        if id in self.__seats:
            for row, col in seat_position:
                if row >= self.__rows or col >= self.__cols or row < 0 or col < 0:
                    raise ValueError("Invalid seat position")
                if self.__seats[id][row][col] != "Free":
                    raise ValueError("Seat already booked")
                self.__seats[id][row][col] = "Booked"

    def view_show_list(self):
        for show in self.__show_list:
            print(f"Show Id:{show[0]}, Movie Name:{show[1]}, Time: {show[2]}")

    def view_available_seats(self, id):
        if id in self.__seats:
            available_seats = self.__seats[id]

            for row in range(self.__rows):
                for col in range(self.__cols):
                    if available_seats[row][col] == "Free":
                        print(f"seats: ({row}, {col}) ")



star_cinema = Star_Cinema()


hall1 = Hall(5, 5, "Hall 1")


hall1.entry_show("S1", "Toofan", "5 PM")
hall1.entry_show("S2", "Kalki 2898 AD", "8 PM")


print("Viewing all shows:")
hall1.view_show_list()
print()


try:
    print("Booking seats for show S1:")
    hall1.book_seats("S1", [(1, 1), (1, 2)])
    print("Seats booked successfully.")
except ValueError as e:
    print(e)
print()


try:
    print("Viewing available seats for show S1:")
    hall1.view_available_seats("S1")
except ValueError as e:
    print(e)
print()


try:
    print("Trying to book invalid seats for show S1:")
    hall1.book_seats("S1", [(1, 1), (5, 5)])
except ValueError as e:
    print(e)
print()

try:
    print("Trying to book seats for an invalid show ID S3:")
    hall1.book_seats("S3", [(1, 1)])
except ValueError as e:
    print(e)
print()

try:
    print("Trying to book already booked seat for show S1:")
    hall1.book_seats("S1", [(1, 1)])
except ValueError as e:
    print(e)
print()

try:
    print("Trying to view available seats for an invalid show ID S3:")
    hall1.view_available_seats("S3")
except ValueError as e:
    print(e)
