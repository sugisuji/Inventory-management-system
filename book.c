#include "book.h"

struct book *head = '\0';
struct book *tail = '\0';

int num_of_book_count = 0;

void book()
{
	int option;
	
	while(1)
	{

		printf("\nEnter your option :: EXIT = 0 :: ADD_BOOK = 1\n"); 
		printf("Check_no_of_books_available = 2 :: Search_book_by_name = 3\n");
		printf("Search_book_by_ISBN_number = 4 :: Display_the_books_with_entire_info = 5\n ");
		scanf("%d", &option);
		
		if(option == 0)
			break;
		
		switch(option)
		{
			case 1:
				add_book();
				break;
					
			case 2:
				printf("\n%d books are available\n", num_of_book_count);
				break;
			
			case 3:
	//			Search by name of book
				break;
			
			case 4:
	//			ISBN number
				break;
				
			case 5:
				display_book();
				break;
			
			default :
				printf("\nenter the right choice\n");				
		}
	}
}
