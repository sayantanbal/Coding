# Write a Library class with no_of_books and books as two instance variables. Write a program to create a library from this Library class and show how you can print all books, add a book and get the number of books using different methods. Show that your program doesnt persist the books after the program is stopped!


class Library:
    def __init__(self):
        self.no_of_books = 0
        self.books = []

    def print_all_books(self):
        print("All Books:")
        for book in self.books:
            print(book)

    def add_book(self, title, author):
        book = f"{title} by {author}"
        self.books.append(book)
        self.no_of_books += 1

    def get_no_of_books(self):
        return self.no_of_books

# Program to demonstrate the Library class
def main():
    # Create a library
    my_library = Library()

    # Print initial number of books
    print("Initial Number of Books:", my_library.get_no_of_books())

    # Print all books in the library
    my_library.print_all_books()

    # Add books to the library
    my_library.add_book("The Great Gatsby", "F. Scott Fitzgerald")
    my_library.add_book("To Kill a Mockingbird", "Harper Lee")
    my_library.add_book("1984", "George Orwell")

    # Print updated number of books
    print("Number of Books After Adding:", my_library.get_no_of_books())

    # Print all books in the library
    my_library.print_all_books()

if __name__ == "__main__":
    main()
