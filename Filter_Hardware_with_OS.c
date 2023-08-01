#include "hardware.h"

void Filter_Hardware_with_OS(char *os)
{
	if(hrdwr_head == '\0')
	{
		printf("\n\n@@@@@@@@@@@@@@@@@ No Hardware present @@@@@@@@@@@@@@@@@\n\n");

	} else {
		
		int i = 1;
		struct hardware *temp = hrdwr_head;
		
		while(temp != '\0')
		{
			if(strcmp(os, temp -> hrdwr_os) == 0)
			{
				printf("\n<<<<< hardware %d with OS %s >>>>\n", i++, temp -> hrdwr_os);
				printf("\nserial_num = %d\n", temp -> serial_number);
				printf("RAM size = %d\n", temp -> ram_size);
				printf("ROM size = %d\n", temp -> rom_size);
				printf("Hardware name = %s\n", temp -> name);
				printf("Hardware type = %s\n", temp -> hardware_type);
			}
			temp = temp -> next;
		}
		if(i == 1)
			printf("\n\n ======== Hardware not available with the given OS ========\n\n");
	}
}
