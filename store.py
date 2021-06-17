class Store(object):
    def __init__(self, quantity, id):
        self.id = id
        self.quantity = quantity

    def generateBill(self):
        if(self.id == "Ri50"):
            price = 50 * self.quantity
            print(price)

Rice = Store(2, "Ri50")
Rice.generateBill()