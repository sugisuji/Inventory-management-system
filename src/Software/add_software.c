#include "../header/software.h"

void add_software()
{
	int srl_num;
	char *sftwr_name = (char *)malloc(sftwr_name_size * sizeof(char));
	char *licensetype = (char *)malloc(license_type_size * sizeof(char));
	char *os = (char *)malloc(os_size * sizeof(char));
	int eat_new_line;

	printf("\n=====> Enter Serial Number\n");
	loop1:
	if (scanf("%d", &srl_num) != 1)
	{
        while (getchar() != '\n');
        printf("\nError: Invalid Serial Number. Please enter a valid Serial Number.\n");
        goto loop1;
    }
	
	printf("\n=====> Enter Software name\n");
	eat_new_line = getchar();
	scanf("%[^\n]", sftwr_name);
	
	printf("\n=====> Enter license type\n");
	eat_new_line = getchar();
	scanf("%[^\n]", licensetype);
	
	printf("\n=====> Enter Software OS\n");
	eat_new_line = getchar();
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
	printf("\n\n****** Software Added Successfully ******\n\n");
}
