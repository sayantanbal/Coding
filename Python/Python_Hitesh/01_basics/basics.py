
# Chapter 1: Basics -> python inner workings

#     1.1: Python inner workings:
#         1. Python is an interpreted language. so we need a python interpreter to run python code. the interpreter reads the code line by line and executes it. the syntax is "python <filename>.py" .
#         2. first the interpreter makes byte code. then it runs the byte code. the byte code is saved in a file with .pyc extension. it is mostly hidden from the user. sometimes it is visible when file is imported. it gets stored in __pycache__ folder. so that it runs faster next time. as the bytecode for the imported file is already present.
#         3. then this bytecode is fetched by PVM (Python Virtual Machine) and executed. PVM is a part of python interpreter and it runs the bytecode. it is also called python runtime.
#         4. '.pyc' -> compiled python file. it is also called 'frozen binaries'. it is platform independent. it is not the same as '.py' file. it is not human readable. it is a binary file. it is also called 'bytecode'. this is why python is widely used in cloud computing as the .pyc is platform independent.

