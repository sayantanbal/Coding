
# Python String Methods with Examples and Tricky Scenarios

# 1. capitalize(): Capitalizes the first letter of the string.
s = "hello world"
print(s.capitalize())  # Output: 'Hello world'

# Tricky: If the first character is already uppercase, no changes happen.
print("Hello".capitalize())  # Output: 'Hello'

# 2. casefold(): Converts the string to lowercase, more aggressive than lower().
s = "HELLO WORLD"
print(s.casefold())  # Output: 'hello world'

# Tricky: casefold is designed to handle more special cases than lower, especially useful in languages other than English.
print("ß".casefold())  # Output: 'ss'

# 3. center(width[, fillchar]): Returns a string padded to width with fillchar.
s = "hello"
print(s.center(10, "-"))  # Output: '--hello---'

# Tricky: If the width is less than the string length, the original string is returned.
print(s.center(3))  # Output: 'hello'

# 4. count(sub[, start[, end]]): Returns the number of occurrences of a substring.
s = "banana"
print(s.count("a"))  # Output: 3

# Tricky: count is case-sensitive.
print(s.count("A"))  # Output: 0

# 5. encode(encoding='utf-8', errors='strict'): Encodes the string.
s = "hello"
print(s.encode())  # Output: b'hello'

# Tricky: With different encodings.
print("café".encode("ascii", "ignore"))  # Output: b'caf'

# 6. endswith(suffix[, start[, end]]): Checks if the string ends with a given suffix.
s = "hello"
print(s.endswith("lo"))  # Output: True

# Tricky: You can use a tuple of suffixes.
print(s.endswith(("lo", "he")))  # Output: True

# 7. expandtabs(tabsize): Expands tabs into spaces.
s = "hello\\tworld"
print(s.expandtabs(4))  # Output: 'hello   world'

# Tricky: Works only for '\\t' characters.
print("hello world".expandtabs())  # Output: 'hello world' (no changes)

# 8. find(sub[, start[, end]]): Finds the lowest index of a substring.
s = "banana"
print(s.find("a"))  # Output: 1

# Tricky: Returns -1 if not found.
print(s.find("z"))  # Output: -1

# 9. format(*args, **kwargs): Formats the string.
s = "My name is {} and I am {} years old."
# Output: 'My name is Alice and I am 30 years old.'
print(s.format("Alice", 30))

# Tricky: You can use named arguments.
print("My name is {name}".format(name="Alice"))  # Output: 'My name is Alice'

# 10. format_map(mapping): Similar to format(), but uses a mapping.
s = "My name is {name}."
print(s.format_map({"name": "Alice"}))  # Output: 'My name is Alice.'

# 11. index(sub[, start[, end]]): Like find(), but raises ValueError if not found.
s = "banana"
print(s.index("a"))  # Output: 1

# Tricky: Raises an error if not found.
# print(s.index("z"))  # Raises ValueError

# 12. isalnum(): Returns True if all characters are alphanumeric.
s = "abc123"
print(s.isalnum())  # Output: True

# Tricky: Returns False for empty strings or if any character is non-alphanumeric.
print("abc 123".isalnum())  # Output: False

# 13. isalpha(): Returns True if all characters are alphabetic.
s = "abc"
print(s.isalpha())  # Output: True

# Tricky: Returns False for empty strings or if any character is non-alphabetic.
print("abc123".isalpha())  # Output: False

# 14. isdecimal(): Returns True if all characters are decimals.
s = "123"
print(s.isdecimal())  # Output: True

# Tricky: Works for Unicode decimals.
print("²³".isdecimal())  # Output: False (superscripts are not decimal)

# 15. isdigit(): Returns True if all characters are digits.
s = "123"
print(s.isdigit())  # Output: True

# Tricky: Handles more than just ASCII digits.
print("²³".isdigit())  # Output: True

# 16. islower(): Checks if all cased characters are lowercase.
s = "hello"
print(s.islower())  # Output: True

# Tricky: Non-alphabetic characters do not affect the result.
print("hello123".islower())  # Output: True

# 17. isnumeric(): Returns True if all characters are numeric.
s = "123"
print(s.isnumeric())  # Output: True

# Tricky: Handles more than just ASCII digits.
print("²³".isnumeric())  # Output: True

# 18. isprintable(): Returns True if all characters are printable.
s = "hello"
print(s.isprintable())  # Output: True

# Tricky: Even spaces are printable.
print("hello world".isprintable())  # Output: True

# 19. isspace(): Returns True if all characters are whitespace.
s = "   "
print(s.isspace())  # Output: True

# Tricky: Returns False for empty strings.
print("".isspace())  # Output: False

# 20. istitle(): Returns True if the string is in title case.
s = "Hello World"
print(s.istitle())  # Output: True

# Tricky: Returns False if any word is not title cased.
print("Hello world".istitle())  # Output: False

# 21. isupper(): Returns True if all cased characters are uppercase.
s = "HELLO"
print(s.isupper())  # Output: True

# Tricky: Non-alphabetic characters do not affect the result.
print("HELLO123".isupper())  # Output: True

# 22. join(iterable): Joins the elements of an iterable with the string as separator.
s = "-"
print(s.join(["a", "b", "c"]))  # Output: 'a-b-c'

# Tricky: Works with any iterable, including tuples.
print(s.join(("a", "b", "c")))  # Output: 'a-b-c'

# 23. ljust(width[, fillchar]): Left-justifies the string with the specified character.
s = "hello"
print(s.ljust(10, "-"))  # Output: 'hello-----'

# 24. lower(): Converts all characters to lowercase.
s = "HELLO"
print(s.lower())  # Output: 'hello'

# 25. lstrip([chars]): Removes leading characters (space by default).
s = "  hello"
print(s.lstrip())  # Output: 'hello'

# 26. partition(sep): Splits the string at the first occurrence of sep.
s = "hello world"
print(s.partition(" "))  # Output: ('hello', ' ', 'world')

# 27. replace(old, new[, count]): Replaces occurrences of a substring with another.
s = "hello world"
print(s.replace("world", "Python"))  # Output: 'hello Python'

# 28. rfind(sub[, start[, end]]): Finds the highest index of a substring.
s = "banana"
print(s.rfind("a"))  # Output: 5

# 29. rindex(sub[, start[, end]]): Like rfind(), but raises ValueError if not found.
# print(s.rindex("z"))  # Raises ValueError

# 30. rjust(width[, fillchar]): Right-justifies the string with the specified character.
s = "hello"
print(s.rjust(10, "-"))  # Output: '-----hello'

# 31. rsplit(sep=None, maxsplit=-1): Splits the string from the right.
s = "a b c"
print(s.rsplit())  # Output: ['a', 'b', 'c']

# 32. rstrip([chars]): Removes trailing characters (space by default).
s = "hello   "
print(s.rstrip())  # Output: 'hello'

# 33. split(sep=None, maxsplit=-1): Splits the string.
s = "a b c"
print(s.split())  # Output: ['a', 'b', 'c']

# 34. splitlines([keepends]): Splits the string at line breaks.
s = "hello\\nworld"
print(s.splitlines())  # Output: ['hello', 'world']

# 35. startswith(prefix[, start[, end]]): Checks if the string starts with a prefix.
s = "hello"
print(s.startswith("he"))  # Output: True

# 36. strip([chars]): Removes leading and trailing characters (space by default).
s = "  hello  "
print(s.strip())  # Output: 'hello'

# 37. swapcase(): Swaps the case of the string.
s = "Hello"
print(s.swapcase)  # Output: 'hELLO'
