def call():
    print(f'calling from outer function')
    return 'call done'


class phone:
    price = 23000
    color = 'blue'
    brand = 'iPhone'
    features = ['camera', 'speaker', 'hammer']

    def call(self):
        print("Calling from class")
    
    def send_smg(self, phone, sms):
        text = f'sending sms to: {phone} and message: {sms}'
        return text

myPhone = phone()

print(myPhone.features)
myPhone.call()
result = myPhone.send_smg(42323, 'i forgot to miss you')
print(result)

