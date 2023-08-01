#include "software.h"

void add_software()
{
	int srl_num;
	char *sftwr_name = (char *)malloc(sftwr_name_size * sizeof(char));
	char *licensetype = (char *)malloc(license_type_size * sizeof(char));
	char *os = (char *)malloc(os_size * sizeof(char));
	int eat_new_line;

	printf("\nenter Serial Number\n");
	scanf("%d", &srl_num);
	printf("\nenter Software name\n");
	scanf("%d", eat_new_line);
	scanf("%[^\n]", sftwr_name);
	printf("\nenter license type\n");
	scanf("%d", eat_new_line);
	scanf("%[^\n]", licensetype);
	printf("\nenter Software OS\n");
	scanf("%d", eat_new_line);
	scanf("%[^\n]", os);

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
