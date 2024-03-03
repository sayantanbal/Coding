
# strings are of mainly 3 varieties in python
# single quotes, double quotes, triple quotes, and raw strings
# example : 
# single quotes : 'hello'
# double quotes : "hello"
# triple quotes : '''hello''' or """hello"""
# raw strings : r'hello' or r"hello"

# all formatting is save in the string


# elements of string can be accessed using index.
# index starts from 0
# example :
    # string = "hello"
    # string[0] = h
    # string[1] = e

# string can be sliced using [start:stop:step]
# example :
    # string = "hello0123456789"
    # string[0:3] = hel
    # string[0:5:2] = hlo
    # print(string[0:15:-1]) = ?
# the last argument is step, which means how many characters to skip

# strings are immutable, which means they cannot be changed. 
# example :
    # string = "hello"
    # string[0] = "a" # this will give error
    # string = "a" + string[1:] # this will work

# strings can be concatenated using + operator
# example :
    # string1 = "hello"
    # string2 = "world"
    # string3 = string1 + string2 # string3 = "helloworld"

# strings can be repeated using * operator
# example :
    # string = "hello"
    # string = string * 3 # string = "hellohellohello"

# strings can be formatted using % operator
# example :
    # string = "hello %s" % "world" # string = "hello world"
    # string = "hello %d" % 5 # string = "hello 5"
    # string = "hello %f" % 5.5 # string = "hello 5.500000"
    # string = "hello %x" % 10 # string = "hello a"
    # string = "hello %o" % 10 # string = "hello 12"
    # string = "hello %e" % 10 # string = "hello 1.000000e+01"
    # string = "hello %g" % 10 # string = "hello 10"
    # string = "hello %c" % 'a' # string = "hello a"
    # string = "hello %r" % "world" # string = "hello 'world'"
    # string = "hello %s %d" % ("world", 5) # string = "hello world 5"
    # string = "hello %s %d %f" % ("world", 5, 5.5) # string = "hello world 5 5.500000"
    # string = "hello %s %d %f %x %o %e %g %c %r" % ("world", 5, 5.5, 10, 10, 10, 10, 'a', "world") # string = "hello world 5 5.500000 a 12 1.000000e+01 10 5.500000 a 'world'"

# strings can be formatted using format method
# example :
    # string = "hello {}".format("world") # string = "hello world"
    # string = "hello {} {}".format("world", 5) # string = "hello world 5"
    # string = "hello {} {} {}".format("world", 5, 5.5) # string = "hello world 5 5.5"
    # string = "hello {1} {0}".format("world", 5) # string = "hello 5 world"
    # string = "hello {1} {0} {1}".format("world", 5) # string = "hello 5 world 5"
    # string = "hello {name} {age}".format(name="world", age=5) # string = "hello world 5"
    
# strings can be formatted using f-strings
# example :
    # name = "world"
    # age = 5
    # string = f"hello {name}" # string = "hello world"
    # string = f"hello {name} {age}" # string = "hello world 5"

# strings can be formatted using string.Template
# example :
    # from string import Template
    # string = Template("hello $name")
    # string.substitute(name="world") # string = "hello world"

# strings can be formatted using string.Formatter
# example :
    # from string import Formatter
    # string = Formatter()
    # string.format("hello {name}", name="world") # string = "hello world"

# strings in python are unicode (UTF-8) by default. but it supports other unicode versions as well.

# strings in python has many methods, some of them are :

    # capitalize() : returns a copy of the string with only its first character capitalized.
    # casefold() : returns a casefolded copy of the string.
    # center(width[, fillchar]) : returns a centered string of length width.
    # count(sub[, start[, end]]) : returns the number of occurrences of substring sub in the range [start, end].
    # encode([encoding[, errors]]) : returns an encoded version of the string.
    # endswith(suffix[, start[, end]]) : returns True if the string ends with the specified suffix, otherwise returns False.
    # expandtabs([tabsize]) : returns a copy of the string where all tab characters are replaced by one or more spaces.
    # find(sub[, start[, end]]) : returns the lowest index in the string where substring sub is found within the slice s[start:end].
    # format(*args, **kwargs) : performs string formatting.
    # format_map(mapping) : performs string formatting.
    # index(sub[, start[, end]]) : returns the lowest index in the string where substring sub is found within the slice s[start:end].
    # isalnum() : returns True if all characters in the string are alphanumeric, otherwise returns False.
    # isalpha() : returns True if all characters in the string are alphabetic, otherwise returns False.
    # isascii() : returns True if the string is empty or all characters in the string are ASCII, otherwise returns False.
    # isdecimal() : returns True if all characters in the string are decimals, otherwise returns False.
    # isdigit() : returns True if all characters in the string are digits, otherwise returns False.
    # isidentifier() : returns True if the string is a valid identifier, otherwise returns False.
    # islower() : returns True if all characters in the string are lowercase, otherwise returns False.
    # isnumeric() : returns True if all characters in the string are numeric, otherwise returns False.
    # isprintable() : returns True if all characters in the string are printable, otherwise returns False.
    # isspace() : returns True if all characters in the string are whitespaces, otherwise returns False.
    # istitle() : returns True if the string is a titlecased string, otherwise returns False.
    # isupper() : returns True if all characters in the string are uppercase, otherwise returns False.
    # join(iterable) : returns a string which is the concatenation of the strings in the iterable.
    # ljust(width[, fillchar]) : returns a left-justified string of length width.
    # lower() : returns a copy of the string converted to lowercase.
    # upper() : returns a copy of the string converted to uppercase.
    # lstrip([chars]) : returns a copy of the string with leading characters removed.
    # maketrans(x[, y[, z]]) : returns a translation table to be used in translate function.
    # partition(sep) : returns a 3-tuple containing the part before the separator, the separator itself, and the part after the separator.
    # replace(old, new[, count]) : returns a copy of the string with all occurrences of substring old replaced by new.
    # rfind(sub[, start[, end]]) : returns the highest index in the string where substring sub is found within the slice s[start:end].
    # rindex(sub[, start[, end]]) : returns the highest index in the string where substring sub is found within the slice s[start:end].
    # rjust(width[, fillchar]) : returns a right-justified string of length width.
    # rpartition(sep) : returns a 3-tuple containing the part before the separator, the separator itself, and the part after the separator.
    # rsplit([sep[, maxsplit]]) : returns a list of the words in the string, using sep as the delimiter string.
    # rstrip([chars]) : returns a copy of the string with trailing characters removed.
    # split([sep[, maxsplit]]) : returns a list of the words in the string, using sep as the delimiter string.
    # splitlines([keepends]) : returns a list of the lines in the string, breaking at line boundaries.
    # startswith(prefix[, start[, end]]) : returns True if the string starts with the specified prefix, otherwise returns False.
    # strip([chars]) : returns a copy of the string with leading and trailing characters removed.
    # swapcase() : returns a copy of the string with uppercase characters converted to lowercase and vice versa.
    # title() : returns a titlecased version of the string.
    # translate(table) : returns a copy of the string in which each character has been mapped through the given translation table.
    # zfill(width) : returns a copy of the string padded with zeros to the left.
    # isdecimal() : returns True if all characters in the string are decimals, otherwise returns False.


# strings in python has many constants, some of them are :
    # string.ascii_letters : contains all ascii letters
    # string.ascii_lowercase : contains all ascii lowercase letters
    # string.ascii_uppercase : contains all ascii uppercase letters
    # string.digits : contains all digits
    # string.hexdigits : contains all hexadecimal digits
    # string.octdigits : contains all octal digits
    # string.punctuation : contains all punctuation characters
    # string.printable : contains all printable characters
    # string.whitespace : contains all whitespace characters