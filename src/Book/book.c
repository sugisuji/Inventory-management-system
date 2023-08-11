#include "../header/book.h"

struct book *head = '\0';
struct book *tail = '\0';

int num_of_book_count = 0;

void book()
{
	long int isbn;
	char *book_name = (char *)malloc(title_size * sizeof(char));
	int eat_new_line;
	int option;
	
	while(1)
	{
		printf("\n************* Enter your option *************\n");
		printf("\nEXIT = 0\n"); 
		printf("\nCheck_no_of_books_available = 1 :: Search_book_by_name = 2\n");
		printf("\nSearch_book_by_ISBN_number = 3 :: Display_the_books_with_entire_info = 4\n ");
		loop:
		if (scanf("%d", &option) != 1) {
            // Invalid input, clear the input buffer
            while (getchar() != '\n');
            printf("\nError: Invalid input. Please enter a valid option.\n");
            goto loop;
        }
        
		if(option == 0)
			break;
		
		switch(option)
		{
			case 1:
				printf("\n\n$$$$$$$$$$$$  %d books are available  $$$$$$$$$$$$\n\n", num_of_book_count);
				break;
			
			case 2:
				printf("\n=====> Enter Book Title\n");
				eat_new_line = getchar();
				scanf("%[^\n]", book_name);
				search_book(book_name);
				break;
			
			case 3:
				printf("\n=====> Enter ISBN number\n");
				loop1:
				if (scanf("%ld", &isbn) != 1) {
            		while (getchar() != '\n');
           			printf("\nError: Invalid ISBN number. Please enter a valid ISBN number.\n");
            		goto loop1;
        		}
				search_book_isbn(isbn);
				break;
				
			case 4:
				display_book();
				break;
			
			default :
				printf("\n\nError: Enter the right choice\n\n");				
		}
	}
}
