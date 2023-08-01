#include "software.h"

struct software *sftwr_head = '\0';
struct software *sftwr_tail = '\0';

void software()
{
	char *sftwr_name = (char *)malloc(sftwr_name_size * sizeof(char));
	char *os = (char *)malloc(os_size * sizeof(char));
	int eat_new_line;
	int option;
	
	while(1)
	{
		printf("\n************* Enter your option *************\n");
		printf("\nEXIT = 0 :: ADD_SOFTWARE = 1\n"); 
		printf("\nCheck_what_are_the_software_available = 2\n");
		printf("\nFilter_Software_with_OS = 3 :: Search_Software_by_name = 4\n ");
		scanf("%d", &option);
		
		if(option == 0)
			break;
	
		switch(option)
		{
			case 1:
				add_software();
				break;
			
			case 2:
				display_software();
				break;
			
			case 3:
				printf("\n=====> Enter Software OS\n");
				scanf("%d", eat_new_line);
				scanf("%[^\n]", os);
				Filter_Software_with_OS(os);
				break;
			
			case 4:
				printf("\n=====> Enter Software name\n");
				scanf("%d", eat_new_line);
				scanf("%[^\n]", sftwr_name);
				Search_Software_by_name(sftwr_name);
				break;
			
			default :
				printf("\n\n@@@@@@@@@@@@@@@@@ enter the right choice @@@@@@@@@@@@@@@@@\n\n");				
		}
	}
}
