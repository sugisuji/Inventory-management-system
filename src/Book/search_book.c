#include "../header/book.h"

void search_book(char *book_name)
{
	if(head == '\0')
	{
		printf("\n\n@@@@@@@@@@@@@@@@@ No book present @@@@@@@@@@@@@@@@@\n\n");

	} else {
		
		struct book *temp = head;
		
		while(temp != '\0')
		{
			if(strcmp(book_name, temp -> book_title) == 0)
			{
				printf("\n<<<<< %s >>>>\n", temp -> book_title);
				printf("serial_num = %d\n", temp -> serial_number);
				printf("Author = %s\n", temp -> author);
				printf("isbn_number = %ld\n", temp -> isbn_number);
				return;
			}
			temp = temp -> next;
		}
		printf("\n\n======== Given book is not available ========\n\n");
	}
}
