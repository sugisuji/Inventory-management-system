#include "../header/book.h"

void display_book()
{
	if(head == '\0')
	{
		printf("\n@@@@@@@@@@@@@@@@@ No book present @@@@@@@@@@@@@@@@@\n");

	} else {
		
		int i = 0;
		struct book *temp = head;
		
		while(temp != '\0')
		{
			printf("\n<<<<< book %d >>>>\n", i++);
			printf("isbn_number = %ld\n", temp -> isbn_number);
			printf("serial_num = %d\n", temp -> serial_number);
			printf("Author = %s\n", temp -> author);
			printf("Book_Title = %s\n", temp -> book_title);
			temp = temp -> next;
		}
	}
}
