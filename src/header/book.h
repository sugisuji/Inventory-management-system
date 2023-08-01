#include "header.h"
#define author_size 50
#define title_size 50

struct book{
	int isbn_number;
	int serial_number;
	char *author;
	char *book_title;
	struct book *next;
};

extern struct book *head;
extern struct book *tail;

extern int num_of_book_count;

void add_book();
void display_book();
void search_book(char*);
void search_book_isbn(int);
