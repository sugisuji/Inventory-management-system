#include "../header/book.h"

void add_book()
{
	int isbn;
	int srl_num;
	char *author = (char *)malloc(author_size * sizeof(char));
	char *book_title = (char *)malloc(title_size * sizeof(char));
	int eat_new_line;
	
	printf("\n=====> Enter ISBN number\n");
	
	here1 :
	if (scanf("%d", &isbn) != 1)
	{
        while (getchar() != '\n');
        printf("\nError: Invalid ISBN number.. Please enter a valid ISBN number.\n");
        goto here1;
    }
	printf("\n=====> Enter Serial Number\n");
	
	here2 :
	if (scanf("%d", &srl_num) != 1)
	{
        while (getchar() != '\n');
        printf("\nError: Invalid Serial Number.. Please enter a valid Serial Number.\n");
        goto here2;
    }
	printf("\n=====> Enter Author name\n");
	eat_new_line = getchar();
	scanf("%[^\n]", author);
	printf("\n=====> Enter Book Title\n");
	eat_new_line = getchar();
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
	printf("\n\n****** Book Added Successfully ******\n\n");
}
