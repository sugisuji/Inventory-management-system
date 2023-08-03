#include "../header/inventory.h"

void Update_Inventory()
{
	int choice; 
	
	while(1)
	{
		printf("\n=======> Enter your choice which you need to update \n");
		printf("\nEXIT = 0 :: BOOK = 1 :: HARDWARE = 2 :: SOFTWARE = 3\n ");
		if (scanf("%d", &choice) != 1)
		{
    		// Invalid input, clear the input buffer
    	    while (getchar() != '\n');
    	    printf("\nError: Invalid input. Please enter a valid choice.\n");
    	    continue;
    	}

		if(choice == 0)
			break;
			
		switch(choice)
		{
			case 1:
				Update_book();
				break;
				
			case 2:
				Update_hardware();
				break;
		
			case 3:
				Update_software();
				break;
		
			default :
				printf("\n\nError: enter the right choice\n\n");
		}
	}
}
