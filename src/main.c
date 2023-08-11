#include "header/header.h"
#include "header/inventory.h"

int main()
{
	int choice; 
	
	add_default_item();
	while(1)
	{
		printf("\n>>>>>>>>>> Inventory Management System <<<<<<<<<<\n");
		printf("\nEXIT = 0 :: Add_Inventory = 1 :: Update_Inventory = 2 :: ");
		printf("Delete_Inventory = 3  ::  Inventory_queries = 4\n");

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
				Add_Inventory();
				break;
			
			case 2:
				Update_Inventory();
				break;
		
			case 3:
				Delete_Inventory();
				break;
				
			case 4:
				Inventory_queries();
				break;
		
			default :
				printf("\n\nError: enter the right choice\n\n");
		}
	}
}
