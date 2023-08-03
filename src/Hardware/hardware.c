#include "../header/hardware.h"

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
		printf("\nEXIT = 0\n"); 
		printf("\nCheck_no_of_hardware_available = 1 :: Check_what_are_the_hardware_available = 2\n");
		printf("\nFilter_Hardware_with_type = 3 :: Filter_Hardware_with_ROM = 4 :: Filter_Hardware_with_RAM = 5\n");
		printf("\nFilter_Hardware_with_OS = 6 ::  Search_hardware_by_name = 7\n ");
		loop:
		if (scanf("%d", &option) != 1)
		{
   		    while (getchar() != '\n');
    	    printf("\nError: Invalid input. Please enter a valid option.\n");
    	    goto loop;
   		}
		
		if(option == 0)
			break;
	
		switch(option)
		{
			case 1:
				printf("\n\n$$$$$$$$$$$$  %d hardwares are available  $$$$$$$$$$$$\n\n", num_of_hardware_count);
				break;
			
			case 2:
				display_hardware();
				break;
			
			case 3:
				printf("\n=====> Enter Hardware type\n");
				eat_new_line = getchar();
				scanf("%[^\n]", hrdwr_type);
				Filter_Hardware_with_type(hrdwr_type);
				break;
			
			case 4:
				printf("\n=====> Enter ROM size\n");
				loop1:
				if (scanf("%d", &romsize) != 1)
				{
   				    while (getchar() != '\n');
    			    printf("\nError: Invalid ROM size. Please enter a valid ROM size.\n");
    			    goto loop1;
   				}
				Filter_Hardware_with_ROM(romsize);
				break;
				
			case 5:
				printf("\n=====> Enter RAM size\n");
				loop2:
				if (scanf("%d", &ramsize) != 1)
				{
   				    while (getchar() != '\n');
    			    printf("\nError: Invalid RAM size. Please enter a valid RAM size.\n");
    			    goto loop2;
   				}
				Filter_Hardware_with_RAM(ramsize);
				break;

			case 6:
				printf("\n=====> Enter Hardware OS\n");
				eat_new_line = getchar();
				scanf("%[^\n]", os);
				Filter_Hardware_with_OS(os);
				break;
			
			case 7:
				printf("\n=====> Enter Hardware name\n");
				eat_new_line = getchar();
				scanf("%[^\n]", hrdwr_name);
				Search_hardware_by_name(hrdwr_name);
				break;
			
			default :
				printf("\n\nError: Enter the right choice\n\n");				
		}
	}
}
