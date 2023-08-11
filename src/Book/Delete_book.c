#include "../header/book.h"

void Delete_book()
{
	if(head == '\0')
	{
		printf("\n\n@@@@@@@@@@@@@@@@@ No book present @@@@@@@@@@@@@@@@@\n\n");
		return;

	} else {
		
		struct book *temp = head;
		char *book_name = (char *)malloc(title_size * sizeof(char));
		int	eat_new_line;
		
		printf("\n=====> Enter Book Title which you need to delete:\n");
		eat_new_line = getchar();
		scanf("%[^\n]", book_name);
		struct book *buff;
		
		while(temp != '\0')
		{
			if(check_case_sense(book_name, temp -> book_title) == 0)
			{
				if(temp == head)
				{
					head = temp -> next;
			
					free(temp);
					temp = '\0';	
				} else {

					buff -> next = temp -> next;
			
					free(temp);
					temp ='\0';
				}
				printf("\n\n****** Book Deleted Successfully ******\n\n");
				return;
			}
			buff = temp;
			temp = temp -> next;
		}
		printf("\n\n======== Given book is not available ========\n\n");
	}
}
