#include "hardware.h"

void Filter_Hardware_with_type(char *hrdwr_type)
{
	if(hrdwr_head == '\0')
	{
		printf("\n\n@@@@@@@@@@@@@@@@@ No Hardware present @@@@@@@@@@@@@@@@@\n\n");

	} else {
		int i = 1;
		struct hardware *temp = hrdwr_head;
		
		while(temp != '\0')
		{
			if(strcmp(hrdwr_type, temp -> hardware_type) == 0)
			{
				printf("\n<<<<< hardware %d with type %s >>>>\n", i++, temp -> hardware_type);
				printf("\nserial_num = %d\n", temp -> serial_number);
				printf("ROM size = %d\n", temp -> rom_size);
				printf("RAM size = %d\n", temp -> ram_size);
				printf("Hardware name = %s\n", temp -> name);
				printf("Hardware OS = %s\n", temp -> hrdwr_os);
			}
			temp = temp -> next;
		}
		if(i == 1)
			printf("\n\n ======== Hardware not available with the given type ========\n\n");
	}
}
