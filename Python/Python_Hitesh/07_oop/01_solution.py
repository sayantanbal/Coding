class Car:
    total_car = 0

    def __init__(self, brand, model): # "__init__" is a constructor. it is called when the object is created. it is used to initialize the object's state. it is called automatically when the object is created. it gets called immediately when a new object is created. 
        # "self." is instance variable. means it is available to all the methods of the class. it is class ke andar ke variable.

        self.__brand = brand # "__" is used to make the variable private. it means it can only be accessed inside the class. it is used to prevent the variable from being accessed from outside the class.
        self.__model = model
        Car.total_car += 1

    def get_brand(self): # it is a getter method. it is used to access the private variable. it is not necessary to set a getter method starting with "get_". it is just a convention.
        return self.__brand + " !"

    def full_name(self):
        return f"{self.__brand} {self.__model}"
    
    def fuel_type(self):
        return "Petrol or Diesel"
    
    @staticmethod # it is a decorator. it is used to define a static method. it is used to define a method that is bound to the class and not the object of the class. it is used to define a method that does not access the instance variable. it is used to define a method that does not modify the state of the object.
    def general_description(): # it does not need "self" wiring. as objects does not have access to the static method.
        return "Cars are means of transport"
    
    @property # it is a decorator. it is used to define a property. it is used to define a method that can be accessed like an attribute. it is used to define a method that can be accessed without using the "()" brackets.
    def model(self):
        return self.__model
    


class ElectricCar(Car):
    def __init__(self, brand, model, battery_size):
        super().__init__(brand, model) # super() is used to call the methods of the parent class. it is used to call the __init__ method
        self.battery_size = battery_size

    def fuel_type():
        return "Electric charge"


# my_tesla = ElectricCar("Tesla", "Model S", "85kWh")

# print(isinstance(my_tesla, Car))
# print(isinstance(my_tesla, ElectricCar))

# print(my_tesla.__brand)
# print(my_tesla.fuel_type())

# my_car = Car("Tata", "Safari")
# my_car.model = "City"
# Car("Tata", "Nexon")


# print(my_car.general_description())
# print(my_car.model)


# my_car = Car("Toyota", "Corolla")
# print(my_car.brand)
# print(my_car.model)
# print(my_car.full_name())

# my_new_car = Car("Tata", "Safari")
# print(my_new_car.model)



class Battery:
    def battery_info(self):
        return "this is battery"

class Engine:
    def engine_info(self):
        return "This is engine"

class ElectricCarTwo(Battery, Engine, Car):
    pass

my_new_tesla = ElectricCarTwo("Tesla", "Model S")
print(my_new_tesla.engine_info())
print(my_new_tesla.battery_info())