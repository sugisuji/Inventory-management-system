#include "header/header.h"

int main()
{
	int choice; 
	
	while(1)
	{
		printf("\n>>>>>>>>>> Inventory Management System <<<<<<<<<<\n");
		printf("\nEXIT = 0 :: BOOK = 1 :: HARDWARE = 2 :: SOFTWARE = 3\n ");
		scanf("%d", &choice);
		
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
				printf("\n@@@@@@@@@@@@@@@@@ enter the right choice @@@@@@@@@@@@@@@@@\n");
		}
	}
}
