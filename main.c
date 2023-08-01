#include "header.h"

int main()
{
	int choice; 
	
	while(1)
	{
		printf("\nEnter your choice :: EXIT = 0\nBOOK = 1 :: HARDWARE = 2 :: SOFTWARE = 3\n ");
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
//				software();
				break;
		
			default :
				printf("\nenter the right choice\n");
		}
	}
}
