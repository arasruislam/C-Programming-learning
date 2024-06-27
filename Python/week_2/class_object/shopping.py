class Shopping:
    def __init__(self, name):
        self.name = name
        self.cart = []

    def addToCart(self, item, price, quantity):
        product = {"item": item, "price": price, "quantity": quantity}
        self.cart.append(product)

    def checkout(self, amount):
        total = 0
        for item in self.cart:
            # print(item)
            total += item["price"] * item["quantity"]
        print('total price', total)
        
        if amount < total:
            print(f'please provide {total - amount} more')
        else:
            extra = amount - total
            print(f'here is you items and extra money {extra}')


shopon = Shopping("Alan Shopon")
shopon.addToCart("alu", 50, 6)
shopon.addToCart("dim", 12, 24)
shopon.addToCart("rice", 50, 5)
print(shopon.cart)
# shopon.checkout(600)
shopon.checkout(1200)
