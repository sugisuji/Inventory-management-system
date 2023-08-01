#include "hardware.h"

struct hardware *hrdwr_head = '\0';
struct hardware *hrdwr_tail = '\0';

int num_of_hardware_count = 0;

void hardware()
{
	int romsize;
	int ramsize;
	char *hrdwr_name = (char *)malloc(hrdwr_name_size * sizeof(char));
	char *hrdwr_type = (char *)malloc(hrdwr_type_size * sizeof(char));
	char *os = (char *)malloc(os_size * sizeof(char));
	int eat_new_line;
	int option;

	while(1)
	{
		printf("\n************* Enter your option *************\n");
		printf("\nEXIT = 0 :: ADD_HARDWARE = 1\n"); 
		printf("\nCheck_no_of_hardware_available = 2 :: Check_what_are_the_hardware_available = 3\n");
		printf("\nFilter_Hardware_with_type = 4 :: Filter_Hardware_with_ROM = 5 :: Filter_Hardware_with_RAM = 6\n");
		printf("\nFilter_Hardware_with_OS = 7 ::  Search_hardware_by_name = 8\n ");
		scanf("%d", &option);
		
		if(option == 0)
			break;
	
		switch(option)
		{
			case 1:
				add_hardware();
				break;
			
			case 2:
				printf("\n\n$$$$$$$$$$$$  %d hardwares are available  $$$$$$$$$$$$\n\n", num_of_hardware_count);
				break;
			
			case 3:
				display_hardware();
				break;
			
			case 4:
				printf("\n=====> Enter Hardware type\n");
				scanf("%d", eat_new_line);
				scanf("%[^\n]", hrdwr_type);
				Filter_Hardware_with_type(hrdwr_type);
				break;
			
			case 5:
				printf("\n=====> Enter ROM size\n");
				scanf("%d", &romsize);
				Filter_Hardware_with_ROM(romsize);
				break;
				
			case 6:
				printf("\n=====> Enter RAM size\n");
				scanf("%d", &ramsize);
				Filter_Hardware_with_RAM(ramsize);
				break;

			case 7:
				printf("\n=====> Enter Hardware OS\n");
				scanf("%d", eat_new_line);
				scanf("%[^\n]", os);
				Filter_Hardware_with_OS(os);
				break;
			
			case 8:
				printf("\n=====> Enter Hardware name\n");
				scanf("%d", eat_new_line);
				scanf("%[^\n]", hrdwr_name);
				Search_hardware_by_name(hrdwr_name);
				break;
			
			default :
				printf("\n\n@@@@@@@@@@@@@@@@@ Enter the right choice @@@@@@@@@@@@@@@@@\n\n");				
		}
	}
}
