#include "../header/software.h"


void Update_software()
{
	if(sftwr_head == '\0')
	{
		printf("\n\n@@@@@@@@@@@@@@@@@ No Software present @@@@@@@@@@@@@@@@@\n\n");
		return;

	} else {
		struct software *temp = sftwr_head;
		
		int choice;
		int srl_num;
		char *sftwr_name = (char *)malloc(sftwr_name_size * sizeof(char));
		char *licensetype = (char *)malloc(license_type_size * sizeof(char));
		char *os = (char *)malloc(os_size * sizeof(char));
		int eat_new_line;
		
		printf("\n=====> Enter Software name which you need to update:\n");
		eat_new_line = getchar();
		scanf("%[^\n]", sftwr_name);
		
		while(temp != '\0')
		{
			if(strcmp(sftwr_name, temp -> name) == 0)
			{
				while(1)
				{
					printf("\n=======> Enter your choice which you need to update \n");
					printf("\nEXIT = 0 :: Serial_number = 1 :: Software_name = 2\n ");
					printf("\nlicense_type = 3 :: Software_OS = 4\n ");
					
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
							printf("\n=====> Enter Software name\n");
							eat_new_line = getchar();
							scanf("%[^\n]", sftwr_name);
							temp -> name = sftwr_name;
							break;
							
						case 3:
							printf("\n=====> Enter license type\n");
							eat_new_line = getchar();
							scanf("%[^\n]", licensetype);
							temp -> license_type = licensetype;
							break;
							
						case 4:
							printf("\n=====> Enter Software OS\n");
							eat_new_line = getchar();
							scanf("%[^\n]", os);
							temp -> sftwr_os = os;
							break;
							
						default :
							printf("\n\nError: enter the right choice\n\n");
					}
				}
				printf("\n\n****** Software Updated Successfully ******\n\n");
				return;
			}
			temp = temp -> next;
		}
		printf("\n\n======== Given Software is not available ========\n\n");
	}
}
