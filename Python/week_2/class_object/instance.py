class Shop:
    shopping_mall = "Jamuna"

    def __init__(self, buyer):
        self.buyer = buyer
        self.card = []  # cart is an instance attribute

    def addToCart(self, item):
        self.card.append(item)


mehzaben = Shop("meh jabeen")
mehzaben.addToCart("Shoes")
mehzaben.addToCart("Phone")
print(mehzaben.card)

nisho = Shop("Nisho")
nisho.addToCart("cap")
nisho.addToCart("watch")
print(nisho.card)

apurbo = Shop("Apurbo")
apurbo.addToCart("Bike")
apurbo.addToCart("Shirt")
print(apurbo.card)