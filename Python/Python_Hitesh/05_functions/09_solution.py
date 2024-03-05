def even_generator(limit):
    for i in range(2, limit + 1, 2):
        yield i # yield is a keyword that is used like return, except the function will return a generator. a generator is an iterator that generates one item at a time. 
        # yield is used to return from a function without destroying the states of its local variable and when the function is again called, the execution starts from the last yield statement.
        # yield is used to produce a series of values over time.
        # return is used to produce a single value. and it terminates the function along with destroying the states of its local variable and when the function is again called, the execution starts from the beginning.



for num in even_generator(10):
    print(num)