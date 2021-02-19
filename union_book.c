#include<stdio.h>
#include<string.h>

union Book{
    char title[20];
    char authore[30];
    float price;
};

int main()
{
    union Book b1, b2;

    printf("Book Details:");

    strcpy(b1.title, "Wings of Fire: An Autobiography");
    printf("Book Title: %s\n", b1.title);

    strcpy(b1.authore, "APJ Abdul Kalam");
    printf("Book Authore: %s\n", b1.authore);

    b1.price = 200.00;
    printf("Price: Rs. %.2f\n\n", b1.price);

    printf("Book Details:\n");

    strcpy(b2.title, "India 2020: A Vision for the New Millennium");
    printf("Book Title: %s\n", b2.title);

    strcpy(b2.authore, " APJ Abdul Kalam");
    printf("Book Authore: %s\n", b2.authore);

    b2.price = 250.00;
    printf("Price: Rs. %.2f\n", b2.price);

    return 0;
}

