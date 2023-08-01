#include "software.h"

struct software *sftwr_head = '\0';
struct software *sftwr_tail = '\0';

void software()
{
	int option;
	
	while(1)
	{	
		printf("\nEnter your option :: EXIT = 0 :: ADD_SOFTWARE = 1\n"); 
		printf("Check_what_are_the_software_available = 2\n");
		printf("Filter_Software_with_OS = 3 :: Search_Software_by_name = 4\n ");
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
	
				break;
			
			case 4:	
	
				break;
			
			default :
				printf("\nenter the right choice\n");				
		}
	}
}
