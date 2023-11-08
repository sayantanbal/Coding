a = int(input("Enter any value between 5 and 9"))

if(a<5 or a>9):
  raise ValueError("Value should be between 5 and 9")
 

# used for providing proggrammer defined error.. usecases are - the data asked from user is very much sensitive for next operations etc. 

# syntax is such that --> (condition){
# <raise_keyword> <error_class> ("<error message>")
# }