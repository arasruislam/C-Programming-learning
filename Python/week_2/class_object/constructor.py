class phone:
    manufactured = 'China'
    
    def __init__(self, owner, brand, price):
        self.owner = owner
        self.brand = brand
        self.price = price
    
    def send_sms(self, phone, sms):
        text=f'sending to: {phone} {sms}'
        print(text)
    
myPhone = phone('Asru Islam', 'Google', 22500)
print(myPhone.owner, myPhone.brand, myPhone.price)

herPhone = phone('She', 'iPhone', 120000)
print(herPhone.owner, herPhone.brand, herPhone.price)

