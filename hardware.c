#include "hardware.h"

struct hardware *hrdwr_head = '\0';
struct hardware *hrdwr_tail = '\0';

int num_of_hardware_count = 0;

void hardware()
{
	int option;

	while(1)
	{
	
		printf("\nEnter your option\nEXIT = 0 :: ADD_HARDWARE = 1\n"); 
		printf("Check_no_of_hardware_available = 2 :: Check_what_are_the_hardware_available = 3\n");
		printf("Filter_Hardware_with_type = 4 :: Filter_Hardware_with_RAM = 5 :: Filter_Hardware_with_ROM = 6\n");
		printf("Filter_Hardware_with_OS = 7 ::  Search_hardware_by_name = 8\n ");
		scanf("%d", &option);
		
		if(option == 0)
			break;
	
		switch(option)
		{
			case 1:
				add_hardware();
				break;
			
			case 2:
				printf("\n%d hardwares are available\n", num_of_hardware_count);
				break;
			
			case 3:
				display_hardware();
				break;
			
			case 4:	
	
				break;
			
			case 5:

				break;
			
			case 6:

				break;
			
			case 7:
	
				break;
			
			case 8:	
	
				break;
			
			default :
				printf("\nenter the right choice\n");				
		}
	}
}
