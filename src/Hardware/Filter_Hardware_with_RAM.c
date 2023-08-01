#include "../header/hardware.h"

void Filter_Hardware_with_RAM(int ramsize)
{
	if(hrdwr_head == '\0')
	{
		printf("\n\n@@@@@@@@@@@@@@@@@ No Hardware present @@@@@@@@@@@@@@@@@\n\n");

	} else {
		
		int i = 1;
		struct hardware *temp = hrdwr_head;
		
		while(temp != '\0')
		{
			if(ramsize == (temp -> ram_size))
			{
				printf("\n<<<<< hardware %d with RAM size %d >>>>\n", i++, temp -> ram_size);
				printf("\nserial_num = %d\n", temp -> serial_number);
				printf("ROM size = %d\n", temp -> rom_size);
				printf("Hardware name = %s\n", temp -> name);
				printf("Hardware type = %s\n", temp -> hardware_type);
				printf("Hardware OS = %s\n", temp -> hrdwr_os);
			}
			temp = temp -> next;
		}
		if(i == 1)
			printf("\n\n ======== Hardware not available with the given RAM size ========\n\n");
	}
}
