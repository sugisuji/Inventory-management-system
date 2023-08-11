#include "../header/hardware.h"

void Update_hardware()
{
	if(hrdwr_head == '\0')
	{
		printf("\n\n@@@@@@@@@@@@@@@@@ No Hardware present @@@@@@@@@@@@@@@@@\n\n");
		return;

	} else {
		struct hardware *temp = hrdwr_head;
		
		int choice;
		int srl_num;
		int romsize;
		int ramsize;
		char *hrdwr_name = (char *)malloc(hrdwr_name_size * sizeof(char));
		char *hrdwr_type = (char *)malloc(hrdwr_type_size * sizeof(char));
		char *os = (char *)malloc(os_size * sizeof(char));
		int eat_new_line;
		
		printf("\n=====> Enter Hardware name which you need to update:\n");
		eat_new_line = getchar();
		scanf("%[^\n]", hrdwr_name);
		
		while(temp != '\0')
		{
			if(check_case_sense(hrdwr_name, temp -> name) == 0)
			{
				while(1)
				{
					printf("\n=======> Enter your choice which you need to update \n");
					printf("\nEXIT = 0 :: Serial_number = 1 :: rom_size = 2\n ");
					printf("\nram_size = 3 :: Hardware_name = 4\n ");
					printf("\nHardware_type = 5 :: Hardware_OS = 6\n ");
					
					loop:
					if (scanf("%d", &choice) != 1)
					{
    				    while (getchar() != '\n');
    				    printf("\nError: Invalid choice. Please enter a valid choice.\n");
    	    			goto loop;
    				}
    				
    				if(choice == 0)
						break;
    				
    				switch(choice)
    				{
    					case 1:
    						printf("\n=====> Enter Serial Number\n");
							loop1:
							if (scanf("%d", &srl_num) != 1)
							{
        						while (getchar() != '\n');
        						printf("\nError: Invalid Serial Number. Please enter a valid Serial Number.\n");
        						goto loop1;
    						}
    						temp -> serial_number = srl_num;
    						break;
    					
    					case 2:
							printf("\n=====> Enter ROM size\n");
							loop2:
							if (scanf("%d", &romsize) != 1)
							{
       							while (getchar() != '\n');
        						printf("\nError: Invalid ROM size. Please enter a valid ROM size.\n");
        						goto loop2;
    						}
    						temp -> rom_size = romsize;
    						break;
    						
    					case 3:
							printf("\n=====> Enter RAM size\n");
							loop3:
							if (scanf("%d", &ramsize) != 1)
							{
        						while (getchar() != '\n');
        						printf("\nError: Invalid RAM size. Please enter a valid RAM size.\n");
        						goto loop3;
    						}
							temp -> ram_size = ramsize;
							break;
						
						case 4:
							printf("\n=====> Enter Hardware name\n");
							eat_new_line = getchar();
							scanf("%[^\n]", hrdwr_name);
							temp -> name = hrdwr_name;
							break;
							
						case 5:
							printf("\n=====> Enter Hardware type\n");
							eat_new_line = getchar();
							scanf("%[^\n]", hrdwr_type);
							temp -> hardware_type = hrdwr_type;
							break;
							
						case 6:
							printf("\n=====> Enter Hardware OS\n");
							eat_new_line = getchar();
							scanf("%[^\n]", os);
							temp -> hrdwr_os = os;
							break;
							
						default :
							printf("\n\nError: enter the right choice\n\n");
					}
				}
				printf("\n\n****** Hardware Updated Successfully ******\n\n");
				return;
			}
			temp = temp -> next;
		}
		printf("\n\n======== Given Hardware is not available ========\n\n");
	}
}
