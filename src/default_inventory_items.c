#include "header/header.h"
#include "header/inventory.h"

void add_temp_sftwr_data(int srl_num, char *sftwr_name, char *licensetype, char *os)
{
	struct software *buff = (struct software*)malloc(sizeof(struct software));

	buff -> serial_number = srl_num;
	buff -> name = sftwr_name;
	buff -> license_type = licensetype;
	buff -> sftwr_os = os;
		
	if(sftwr_head == '\0')
	{
		buff -> next = sftwr_head;
		sftwr_head = buff; 
		sftwr_tail = buff;
	}
	else
	{		
		buff -> next = sftwr_tail -> next;
		sftwr_tail -> next = buff;
		sftwr_tail = buff;
	}
}

void add_temp_hrdwr_data(int srl_num, int romsize, int ramsize, char *hrdwr_name, char *hrdwr_type, char *os)
{

	struct hardware *buff = (struct hardware*)malloc(sizeof(struct hardware));

	buff -> serial_number = srl_num;
	buff -> rom_size = romsize;
	buff -> ram_size = ramsize;
	buff -> name = hrdwr_name;
	buff -> hardware_type = hrdwr_type;
	buff -> hrdwr_os = os;
	
	if(hrdwr_head == '\0')
	{
		buff -> next = hrdwr_head;
		hrdwr_head = buff; 
		hrdwr_tail = buff;
	}
	else
	{		
		buff -> next = hrdwr_tail -> next;
		hrdwr_tail -> next = buff;
		hrdwr_tail = buff;
	}	
	num_of_hardware_count++;
}

void add_temp_books(long int isbn, int srl_num, char *author, char *book_title)
{
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

void add_default_item()
{
	add_temp_sftwr_data(1, "Office", "Fixed", "macOS");
	add_temp_sftwr_data(2, "Adobe Photoshop", "Floating", "Windows");
	add_temp_sftwr_data(3, "AutoCAD", "Fixed", "macOS");
	add_temp_sftwr_data(4, "MATLAB", "Floating", "Linux");
	add_temp_sftwr_data(5, "QuickBooks", "Fixed", "macOS");
	
	add_temp_hrdwr_data(1, 512, 16, "Dell XPS 13", "Laptop", "Windows 10");
	add_temp_hrdwr_data(2, 256, 8, "Samsung Galaxy S21", "Smartphone", "Android 12");
	add_temp_hrdwr_data(3, 512, 16, "Apple iMac", "Desktop PC", "macOS");
	add_temp_hrdwr_data(4, 128, 4, "Apple iPad Pro", "Tablet", "iPadOS");
	add_temp_hrdwr_data(5, 512, 16, "Dell XPS 13", "Gaming Console", "macOS");
	
	add_temp_books(9780451524935, 1, "George Orwell", "1984");
	add_temp_books(9780743273565, 2, "F. Scott Fitzgerald", "The Great Gatsby");
	add_temp_books(9780141439518, 3, "Jane Austen", "Pride and Prejudice");
	add_temp_books(9780590353427, 4, "J.K. Rowling", "Harry Potter and the Sorcerer's Stone");
	add_temp_books(9780590353427, 5, "J.K. Rowling", "Harry Potter and the Sorcerer's Stone");

	
}
