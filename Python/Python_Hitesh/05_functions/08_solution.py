def print_kwargs(**kwargs): # **kwargs is accepting any number of named arguments. "kwargs" is not mandatory. you can use any name. ** is mandatory. but it is a good practice to use kwargs. you will find most codebase using "kwargs". it is stored in a dictionary. so we have to use key and value pairs to access the values.
    for key, value in kwargs.items():
        print(f"{key}: {value}")


print_kwargs(name="superman", power="laser") # this is called named parameter. you can pass any number of named parameters. it will be stored in a dictionary. you can change the order of the parameters. it will still work up until you use named parameters.
print_kwargs(name="superman")
print_kwargs(name="superman", power="laser", enemy = "Dr. Jackaal")