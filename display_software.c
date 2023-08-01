#include "software.h"

void display_software()
{
	if(sftwr_head == '\0')
	{
		printf("\n No Software present\n");

	} else {
		
		int i = 0;
		struct software *temp = sftwr_head;
		
		while(temp != '\0')
		{
			printf("\n<<<<< Software %d >>>>\n", i++);
			printf("\nserial_num = %d\n", temp -> serial_number);
			printf("Software name = %s\n", temp -> name);
			printf("License type = %s\n", temp -> license_type);
			printf("Software OS = %s\n", temp -> sftwr_os);
			temp = temp -> next;
		}
	}
}
