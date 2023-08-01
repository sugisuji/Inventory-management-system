#include "../header/book.h"

void search_book_isbn(int isbn)
{
	if(head == '\0')
	{
		printf("\n\n@@@@@@@@@@@@@@@@@ No book present @@@@@@@@@@@@@@@@@\n\n");

	} else {
		
		struct book *temp = head;
		
		while(temp != '\0')
		{
			if(isbn == (temp -> isbn_number))
			{
				printf("\n<<<<< %d >>>>\n", temp -> isbn_number);
				printf("serial_num = %d\n", temp -> serial_number);
				printf("Book_Title = %s\n", temp -> book_title);
				printf("Author = %s\n", temp -> author);
				return;
			}
			temp = temp -> next;
		}
		printf("\n\n======== Book not available with the given Isbn number ========\n\n");
	}
}
