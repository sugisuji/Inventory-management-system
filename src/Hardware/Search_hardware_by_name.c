#include "../header/hardware.h"

void Search_hardware_by_name(char *hrdwr_name)
{
	if(hrdwr_head == '\0')
	{
		printf("\n\n@@@@@@@@@@@@@@@@@ No Hardware present @@@@@@@@@@@@@@@@@\n\n");

	} else {
		int i = 1;
		struct hardware *temp = hrdwr_head;
		
		while(temp != '\0')
		{
			if(strcmp(hrdwr_name, temp -> name) == 0)
			{
				printf("\n<<<<< hardware %d in %s >>>>\n", i++, temp -> name);
				printf("\nserial_num = %d\n", temp -> serial_number);
				printf("ROM size = %d\n", temp -> rom_size);
				printf("RAM size = %d\n", temp -> ram_size);
				printf("Hardware Type = %s\n", temp -> hardware_type);
				printf("Hardware OS = %s\n", temp -> hrdwr_os);
			}
			temp = temp -> next;
		}
		if(i == 1)
			printf("\n\n ======== Hardware not available with the given Name ========\n\n");
	}
}
