#include "hardware.h"

void display_hardware()
{
	if(hrdwr_head == '\0')
	{
		printf("\n No Hardware present\n");

	} else {
		
		int i = 0;
		struct hardware *temp = hrdwr_head;
		
		while(temp != '\0')
		{
			printf("\n<<<<< hardware %d >>>>\n", i++);
			printf("\nserial_num = %d\n", temp -> serial_number);
			printf("ROM size = %f\n", temp -> rom_size);
			printf("RAM size = %f\n", temp -> ram_size);
			printf("Hardware name = %s\n", temp -> name);
			printf("Hardware type = %s\n", temp -> hardware_type);
			printf("Hardware OS = %s\n", temp -> hrdwr_os);
			temp = temp -> next;
		}
	}
}
