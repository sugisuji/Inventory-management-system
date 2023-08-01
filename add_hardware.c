#include "hardware.h"

void add_hardware()
{
	int srl_num;
	float romsize;
	float ramsize;
	char *hrdwr_name = (char *)malloc(hrdwr_name_size * sizeof(char));
	char *hrdwr_type = (char *)malloc(hrdwr_type_size * sizeof(char));
	char *os = (char *)malloc(os_size * sizeof(char));
	int eat_new_line;

	printf("\nenter Serial Number\n");
	scanf("%d", &srl_num);
	printf("\nenter ROM size\n");
	scanf("%f", &romsize);
	printf("\nenter RAM size\n");
	scanf("%f", &ramsize);
	printf("\nenter Hardware name\n");
	scanf("%d", eat_new_line);
	scanf("%[^\n]", hrdwr_name);
	printf("\nenter Hardware type\n");
	scanf("%d", eat_new_line);
	scanf("%[^\n]", hrdwr_type);
	printf("\nenter Hardware OS\n");
	scanf("%d", eat_new_line);
	scanf("%[^\n]", os);

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
