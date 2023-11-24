class User:
    def __init__(self, username, password, role):
        self.username = username
        self.password = password
        self.role = role

class Admin:
    def __init__(self):
        self.users = []

    def add_user(self, user):
        self.users.append(user)

    def remove_user(self, user):
        self.users.remove(user)

class Book:
    def __init__(self, title, author, genre, copies_available):
        self.title = title
        self.author = author
        self.genre = genre
        self.copies_available = copies_available

class Library:
    def __init__(self):
        self.books = []

    def add_book(self, book):
        self.books.append(book)

    def remove_book(self, book):
        self.books.remove(book)

class Transaction:
    def __init__(self, user, book, transaction_type, date):
        self.user = user
        self.book = book
        self.transaction_type = transaction_type
        self.date = date

class TransactionManager:
    def __init__(self):
        self.transactions = []

    def record_transaction(self, transaction):
        self.transactions.append(transaction)

class ReportGenerator:
    def generate_overdue_report(self):
        # Code to generate overdue books report
        pass

    def generate_popular_books_report(self):
        # Code to generate popular books report
        pass

    def generate_transaction_history_report(self, user):
        # Code to generate user transaction history report
        pass

class Notification:
    def send_notification(self, user, message):
        # Code to send a notification
        pass

# Example usage:
admin = Admin()
library = Library()
transaction_manager = TransactionManager()
report_generator = ReportGenerator()
notification = Notification()

# Create users
user1 = User("john_doe", "password123", "student")
user2 = User("jane_smith", "securepass", "teacher")

# Add users to the system
admin.add_user(user1)
admin.add_user(user2)

# Create books
book1 = Book("Introduction to Python", "John Smith", "Programming", 5)
book2 = Book("History of Science", "Jane Doe", "History", 3)

# Add books to the library
library.add_book(book1)
library.add_book(book2)

# User checks out a book
transaction = Transaction(user1, book1, "checkout", "2023-01-01")
transaction_manager.record_transaction(transaction)

# Generate reports
overdue_report = report_generator.generate_overdue_report()

# Send notifications
notification.send_notification(user1, "Your book is overdue!")
