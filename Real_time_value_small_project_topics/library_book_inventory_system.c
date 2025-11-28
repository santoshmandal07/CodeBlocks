#include <stdio.h>

#define MAX 100   // Maximum number of books

// Function to display all books using pointers
void displayBooks(int *ptr, int count)
{
    if(count == 0)
    {
        printf("\nNo books available.\n");
        return;
    }

    printf("\nAvailable Books (Book IDs):\n");
    for(int i = 0; i < count; i++)
        printf("%d ", *(ptr + i));   // pointer arithmetic

    printf("\n");
}

// Function to search a book using linear search
int searchBook(int *ptr, int count, int id)
{
    for(int i = 0; i < count; i++)
    {
        if(*(ptr + i) == id)  // pointer access
            return i;         // return index
    }
    return -1;
}

// Function to add a book
void addBook(int *ptr, int *count, int id)
{
    if(*count >= MAX)
    {
        printf("\nInventory Full! Cannot add more books.\n");
        return;
    }

    *(ptr + *count) = id;  // adding at end
    (*count)++;

    printf("\nBook ID %d added successfully.\n", id);
}

// Function to delete a book
void deleteBook(int *ptr, int *count, int id)
{
    int index = searchBook(ptr, *count, id);

    if(index == -1)
    {
        printf("\nBook ID %d not found.\n", id);
        return;
    }

    // Shift elements left
    for(int i = index; i < *count - 1; i++)
        *(ptr + i) = *(ptr + i + 1);

    (*count)--;

    printf("\nBook ID %d deleted successfully.\n", id);
}

int main()
{
    int books[MAX];
    int count = 0;
    int choice, id;

    while(1)
    {
        printf("\n===== LIBRARY BOOK INVENTORY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Delete Book\n");
        printf("3. Search Book\n");
        printf("4. Show All Books\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Book ID to add: ");
                scanf("%d", &id);
                addBook(books, &count, id);
                break;

            case 2:
                printf("Enter Book ID to delete: ");
                scanf("%d", &id);
                deleteBook(books, &count, id);
                break;

            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &id);
                int pos;
                pos = searchBook(books, count, id);
                if(pos == -1)
                    printf("\nBook not found.\n");
                else
                    printf("\nBook found at position %d.\n", pos + 1);
                break;

            case 4:
                displayBooks(books, count);
                break;

            case 5:
                printf("\nExiting program...\n");
                return 0;

            default:
                printf("\nInvalid choice! Try again.\n");
        }
    }

    return 0;
}
