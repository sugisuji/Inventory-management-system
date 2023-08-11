#include "../header/book.h"

void Update_book()
{
	if(head == '\0')
	{
		printf("\n\n@@@@@@@@@@@@@@@@@ No book present @@@@@@@@@@@@@@@@@\n\n");
		return;

	} else {
		struct book *temp = head;
		
		int choice;
		long int isbn;
		int srl_num;
		char *author = (char *)malloc(author_size * sizeof(char));
		char *book_name = (char *)malloc(title_size * sizeof(char));
		int eat_new_line;
		
		printf("\n=====> Enter Book Title which you need to update:\n");
		eat_new_line = getchar();
		scanf("%[^\n]", book_name);
		
		while(temp != '\0')
		{
			if(check_case_sense(book_name, temp -> book_title) == 0)
			{
				while(1)
				{
					printf("\n=======> Enter your choice which you need to update \n");
					printf("\nEXIT = 0 :: Isbn_number = 1 :: serial_number = 2\n ");
					printf("\nAuthor = 3 :: Book_title = 4\n ");
					loop:
					if (scanf("%d", &choice) != 1)
					{
    				    while (getchar() != '\n');
    				    printf("\nError: Invalid choice. Please enter a valid choice.\n");
    	    			goto loop;
    				}
    				
    				if(choice == 0)
						break;
    				
    				switch(choice)
    				{
    					case 1:
    						printf("\n=====> Enter ISBN number\n");
							loop1:
							if (scanf("%ld", &isbn) != 1)
							{
        						while (getchar() != '\n');
        						printf("\nError: Invalid ISBN number.. Please enter a valid ISBN number.\n");
        						goto loop1;
    						}
    						temp -> isbn_number = isbn;
    						break;
    					
    					case 2:
							printf("\n=====> Enter Serial Number\n");
    						loop2:
							if (scanf("%d", &srl_num) != 1)
							{
      							while (getchar() != '\n');
        						printf("\nError: Invalid Serial Number.. Please enter a valid Serial Number.\n");
        						goto loop2;
    						}
    						temp -> serial_number = srl_num;
    						break;
    						
    					case 3:
							printf("\n=====> Enter Author name\n");
							eat_new_line = getchar();
							scanf("%[^\n]", author);
							temp -> author = author;
							break;
						
						case 4:
							printf("\n=====> Enter Book Title\n");
							eat_new_line = getchar();
							scanf("%[^\n]", book_name);
							temp -> book_title = book_name;
							break;
							
						default :
							printf("\n\nError: enter the right choice\n\n");
					}
				}
				printf("\n\n****** Book Updated Successfully ******\n\n");
				return;
			}
			temp = temp -> next;
		}
		printf("\n\n======== Given book is not available ========\n\n");
	}
}
