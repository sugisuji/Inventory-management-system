#include "book.h"

void add_book()
{
	int isbn;
	int srl_num;
	char *author = (char *)malloc(author_size * sizeof(char));
	char *book_title = (char *)malloc(title_size * sizeof(char));
	int eat_new_line;
	
	printf("\nenter ISBN number\n");
	scanf("%d", &isbn);
	printf("\nenter Serial Number\n");
	scanf("%d", &srl_num);
	printf("\nenter Author name\n");
	scanf("%d", eat_new_line);
	scanf("%[^\n]", author);
	printf("\nenter Book Title\n");
	scanf("%d", eat_new_line);
	scanf("%[^\n]", book_title);

	struct book *buff = (struct book*)malloc(sizeof(struct book));
	
	buff -> isbn_number = isbn;
	buff -> serial_number = srl_num;
	buff -> author = author;
	buff -> book_title = book_title;
		
	if(head == '\0')
	{
		buff -> next = head;
		head = buff; 
		tail = buff;
	}
	else
	{		
		buff -> next = tail -> next;
		tail -> next = buff;
		tail = buff;
	}	
	num_of_book_count++;
}
