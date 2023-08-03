#include "../header/software.h"

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
		printf("\nEXIT = 0\n"); 
		printf("\nCheck_what_are_the_software_available = 1\n");
		printf("\nFilter_Software_with_OS = 2 :: Search_Software_by_name = 3\n ");

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
				display_software();
				break;
			
			case 2:
				printf("\n=====> Enter Software OS\n");
				eat_new_line = getchar();
				scanf("%[^\n]", os);
				Filter_Software_with_OS(os);
				break;
			
			case 3:
				printf("\n=====> Enter Software name\n");
				eat_new_line = getchar();
				scanf("%[^\n]", sftwr_name);
				Search_Software_by_name(sftwr_name);
				break;
			
			default :
				printf("\n\nError: Enter the right choice\n\n");				
		}
	}
}
