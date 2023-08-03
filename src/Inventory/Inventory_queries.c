#include "../header/inventory.h"

void Inventory_queries()
{
	int choice; 
	
	while(1)
	{
		printf("\n=======> Enter your choice which you need to enquire\n");
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
				book();
				break;
			
			case 2:
				hardware();
				break;
		
			case 3:
				software();
				break;
		
			default :
				printf("\n\nError: enter the right choice\n\n");
		}
	}
}
