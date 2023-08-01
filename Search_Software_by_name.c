#include "software.h"

void Search_Software_by_name(char *sftwr_name)
{
	if(sftwr_head == '\0')
	{
		printf("\n@@@@@@@@@@@@@@@@@ No Software present @@@@@@@@@@@@@@@@@\n");

	} else {
		
		int i = 1;
		struct software *temp = sftwr_head;
		
		while(temp != '\0')
		{
			if(strcmp(sftwr_name, temp -> name) == 0)
			{
				printf("\n<<<<< Software %d in %s >>>>\n", i++, temp -> name);
				printf("\nserial_num = %d\n", temp -> serial_number);
				printf("Software OS = %s\n", temp -> sftwr_os);
				printf("License type = %s\n", temp -> license_type);
			}
			temp = temp -> next;
		}
		if(i == 1)
			printf("\n\n ======== Software not available with the given Name ========\n\n");
	}
}
