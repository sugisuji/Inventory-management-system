#include "book.h"

struct book *head = '\0';
struct book *tail = '\0';

int num_of_book_count = 0;

void book()
{
	int isbn;
	char *book_name = (char *)malloc(title_size * sizeof(char));
	int eat_new_line;
	int option;
	
	while(1)
	{
		printf("\n************* Enter your option *************\n");
		printf("\nEXIT = 0 :: ADD_BOOK = 1\n"); 
		printf("\nCheck_no_of_books_available = 2 :: Search_book_by_name = 3\n");
		printf("\nSearch_book_by_ISBN_number = 4 :: Display_the_books_with_entire_info = 5\n ");
		scanf("%d", &option);
		
		if(option == 0)
			break;
		
		switch(option)
		{
			case 1:
				add_book();
				break;
					
			case 2:
				printf("\n\n$$$$$$$$$$$$  %d books are available  $$$$$$$$$$$$\n\n", num_of_book_count);
				break;
			
			case 3:
				printf("\n=====> Enter Book Title\n");
				scanf("%d", eat_new_line);
				scanf("%[^\n]", book_name);
				search_book(book_name);
				break;
			
			case 4:
				printf("\n=====> Enter ISBN number\n");
				scanf("%d", &isbn);
				search_book_isbn(isbn);
				break;
				
			case 5:
				display_book();
				break;
			
			default :
				printf("\n\n@@@@@@@@@@@@@@@@@ enter the right choice @@@@@@@@@@@@@@@@@\n\n");				
		}
	}
}
