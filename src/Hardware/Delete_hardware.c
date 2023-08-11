#include "../header/hardware.h"

void Delete_hardware()
{
	if(hrdwr_head == '\0')
	{
		printf("\n\n@@@@@@@@@@@@@@@@@ No Hardware present @@@@@@@@@@@@@@@@@\n\n");
		return;

	} else {
		
		struct hardware *temp = hrdwr_head;
		char *hrdwr_name = (char *)malloc(hrdwr_name_size * sizeof(char));
		int	eat_new_line;
		
		printf("\n=====> Enter Hardware name which you need to delete:\n");
		eat_new_line = getchar();
		scanf("%[^\n]", hrdwr_name);
		struct hardware *buff;
		
		while(temp != '\0')
		{
			if(check_case_sense(hrdwr_name, temp -> name) == 0)
			{
				if(temp == hrdwr_head)
				{
					hrdwr_head = temp -> next;
			
					free(temp);
					temp = '\0';	
				} else {

					buff -> next = temp -> next;
			
					free(temp);
					temp ='\0';
				}
				printf("\n\n****** Hardware Deleted Successfully ******\n\n");
				return;
			}
			buff = temp;
			temp = temp -> next;
		}
		printf("\n\n======== Given Hardware is not available ========\n\n");
	}
}
