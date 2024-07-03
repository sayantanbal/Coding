#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store book details
struct Book
{
    char title[100];
    char author[100];
    char publisher[100];
    float cost;
    int accessionNumber;
};

// Function prototypes
void inputBooks(struct Book *books, int n);
void displayMenu();
void displayBooksByAuthor(struct Book *books, int n, char *author);
void displayBooksByPublisher(struct Book *books, int n, char *publisher);
void displayExpensiveBooks(struct Book *books, int n, float minCost);
void displayAllBooks(struct Book *books, int n);

int main()
{
    int n;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    // Dynamically allocate memory for array of books
    struct Book *books = (struct Book *)malloc(n * sizeof(struct Book));
    if (books == NULL)
    {
        printf("Memory allocation failed.");
        return 1;
    }

    // Input book details
    inputBooks(books, n);

    // Display menu
    displayMenu();

    // User choice
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Perform action based on user choice
    switch (choice)
    {
    case 1:
    {
        char author[100];
        printf("Enter author's name: ");
        scanf(" %[^\n]", author);
        displayBooksByAuthor(books, n, author);
    }
    break;
    case 2:
    {
        char publisher[100];
        printf("Enter publisher's name: ");
        scanf(" %[^\n]", publisher);
        displayBooksByPublisher(books, n, publisher);
    }
    break;
    case 3:
    {
        float minCost;
        printf("Enter minimum cost: ");
        scanf("%f", &minCost);
        displayExpensiveBooks(books, n, minCost);
    }
    break;
    case 4:
        displayAllBooks(books, n);
        break;
    default:
        printf("Invalid choice\n");
    }

    // Free dynamically allocated memory
    free(books);

    return 0;
}

// Function to input details of 'n' books
void inputBooks(struct Book *books, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter details for Book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", books[i].title);
        printf("Author: ");
        scanf(" %[^\n]", books[i].author);
        printf("Publisher: ");
        scanf(" %[^\n]", books[i].publisher);
        printf("Cost: ");
        scanf("%f", &books[i].cost);

        // Assign accession number
        books[i].accessionNumber = i + 1;
    }
}

// Function to display menu options
void displayMenu()
{
    printf("\nMenu:\n");
    printf("1. Books of a specific author\n");
    printf("2. Books by a specific Publisher\n");
    printf("3. All Books costing Rs. 500 and above\n");
    printf("4. All Books\n");
}

// Function to display books by a specific author
void displayBooksByAuthor(struct Book *books, int n, char *author)
{
    printf("\nBooks by author '%s':\n", author);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(books[i].author, author) == 0)
        {
            printf("Title: %s, Publisher: %s, Cost: Rs. %.2f, Accession Number: %d\n", books[i].title, books[i].publisher, books[i].cost, books[i].accessionNumber);
        }
    }
}

// Function to display books by a specific publisher
void displayBooksByPublisher(struct Book *books, int n, char *publisher)
{
    printf("\nBooks by publisher '%s':\n", publisher);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(books[i].publisher, publisher) == 0)
        {
            printf("Title: %s, Author: %s, Cost: Rs. %.2f, Accession Number: %d\n", books[i].title, books[i].author, books[i].cost, books[i].accessionNumber);
        }
    }
}

// Function to display books costing Rs. 500 and above
void displayExpensiveBooks(struct Book *books, int n, float minCost)
{
    printf("\nBooks costing Rs. %.2f and above:\n", minCost);
    for (int i = 0; i < n; i++)
    {
        if (books[i].cost >= minCost)
        {
            printf("Title: %s, Author: %s, Publisher: %s, Accession Number: %d\n", books[i].title, books[i].author, books[i].publisher, books[i].accessionNumber);
        }
    }
}

// Function to display all books
void displayAllBooks(struct Book *books, int n)
{
    printf("\nAll Books:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Accession Number: %d, Title: %s, Author: %s, Publisher: %s, Cost: Rs. %.2f\n", books[i].accessionNumber, books[i].title, books[i].author, books[i].publisher, books[i].cost);
    }
}
