#include "../header/hardware.h"

void add_hardware()
{
	int srl_num;
	int romsize;
	int ramsize;
	char *hrdwr_name = (char *)malloc(hrdwr_name_size * sizeof(char));
	char *hrdwr_type = (char *)malloc(hrdwr_type_size * sizeof(char));
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
    
	printf("\n=====> Enter ROM size\n");
	loop2:
	if (scanf("%d", &romsize) != 1)
	{
        while (getchar() != '\n');
        printf("\nError: Invalid ROM size. Please enter a valid ROM size.\n");
        goto loop2;
    }
    
	printf("\n=====> Enter RAM size\n");
	loop3:
	if (scanf("%d", &ramsize) != 1)
	{
        while (getchar() != '\n');
        printf("\nError: Invalid RAM size. Please enter a valid RAM size.\n");
        goto loop3;
    }
	
	printf("\n=====> Enter Hardware name\n");
	eat_new_line = getchar();
	scanf("%[^\n]", hrdwr_name);
	
	printf("\n=====> Enter Hardware type\n");
	eat_new_line = getchar();
	scanf("%[^\n]", hrdwr_type);
	
	printf("\n=====> Enter Hardware OS\n");
	eat_new_line = getchar();
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
	printf("\n\n****** Hardware Added Successfully ******\n\n");
}
