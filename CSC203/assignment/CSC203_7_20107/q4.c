#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct library
{
    int accession_number;
    char title[30];
    char author[20];
    float price;
    int flag;
};
// bubble sort to sort in ascending order
void bubble_sort(int a[], int n)
{
    int i, j, t;
    for (i = 0; i < n; ++i)
        for (j = 0; j < n - 1; ++j)
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
}
// to print details of a book
void print_book(struct library *book)
{
    printf("\n");
    printf("\n Accesion Number: %d", book->accession_number);
    printf("\n Book Title: %s", book->title);
    printf("\n Author Name: %s", book->author);
    printf("\n Price: %f", book->price);
    printf("\n Issued: %s", book->flag ? "Yes" : "No");
}
// declaring values for 5 students
struct library books[5] = {{2005, "Harry Potter", "Rowling", 800, 1},
                           {2009, "The Fault in Our Stars", "Green", 300, 1},
                           {2003, "A Brief History Of Time", "Hawkings", 1000, 0},
                           {2015, "The Theory of Everything", "Hawkings", 1500, 1},
                           {2001, "Turtles all the way down", "Green", 200, 0}};

int main()
{
    printf("\n\n\n");
    int ch, count = 5, acc, accn[5];
    char aut[20];
    printf("\n \t\t LIBRARY \n");
    printf("\n 1. Add Book Information");
    printf("\n 2. Display book information");
    printf("\n 3. List all books of given author");
    printf("\n 4. List the title of specified book");
    printf("\n 5. List the count of books in the library");
    printf("\n 6. List the books in the order of accession number");
    printf("\n 7. Exit");
    printf("\n Enter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1: // Add Book Information
        printf("\nEnter book information:- \n");
        printf(" Accesion Number: ");
        scanf("%d", &books[count].accession_number);
        printf(" Book Title: ");
        scanf("%s", &books[count].title);
        printf(" Author Name: ");
        scanf("%s", &books[count].author);
        printf(" Price: ");
        scanf("%f", &books[count].price);
        books[count].flag = 0;
        count++;
        break;
    case 2: // Display book information
        printf("\n Accesion Number: ");
        scanf("%d", &acc);
        for (int i = 0; i < count; ++i)
            if (books[i].accession_number == acc)
                print_book(&books[i]);
        break;
    case 3: // List all books of given author
        printf("\n Author Name: ");
        scanf("%s", &aut);
        for (int i = 0; i < count; ++i)
            if (!strcmp(books[i].author, aut))
                print_book(&books[i]);
        break;
    case 4: // List the title of specified book
        printf("\n Accesion Number: ");
        scanf("%d", &acc);
        for (int i = 0; i < count; ++i)
            if (books[i].accession_number == acc)
                printf("\n Book Title: %s", books[i].title);
        break;
    case 5: // List the count of books in the library
        printf("\n The no. of books; %d", count);
        break;
    case 6: // List the books in the order of accession number
        for (int i = 0; i < count; ++i)
            accn[i] = books[i].accession_number;
        bubble_sort(accn, count); // to arrange accession no. in ascending order
        for (int i = 0; i < count; ++i)
            for (int j = 0; j < count; ++j)
                if (books[j].accession_number == accn[i]) // printing in ascending order
                    print_book(&books[j]);
        break;
    case 7: // Exit
        exit(0);
        break;
    default:
        break;
    }
    printf("\n\n\n");
    return 0;
}