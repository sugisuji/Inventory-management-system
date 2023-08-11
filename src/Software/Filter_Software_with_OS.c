#include "../header/software.h"

void Filter_Software_with_OS(char *os)
{
	if(sftwr_head == '\0')
	{
		printf("\n@@@@@@@@@@@@@@@@@ No Software present @@@@@@@@@@@@@@@@@\n");

	} else {
		
		int i = 1;
		struct software *temp = sftwr_head;
		
		while(temp != '\0')
		{
			if(check_case_sense(os, temp -> sftwr_os) == 0)
			{
				printf("\n<<<<< Software %d with OS %s >>>>\n", i++, temp -> sftwr_os);
				printf("\nserial_num = %d\n", temp -> serial_number);
				printf("Software name = %s\n", temp -> name);
				printf("License type = %s\n", temp -> license_type);
			}
			temp = temp -> next;
		}
		if(i == 1)
			printf("\n\n ======== Software not available with the given OS ========\n\n");
	}
}
