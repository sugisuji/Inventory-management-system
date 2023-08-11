#include "../header/software.h"

void Delete_software()
{
	if(sftwr_head == '\0')
	{
		printf("\n\n@@@@@@@@@@@@@@@@@ No Software present @@@@@@@@@@@@@@@@@\n\n");
		return;

	} else {
		
		struct software *temp = sftwr_head;
		char *sftwr_name = (char *)malloc(sftwr_name_size * sizeof(char));
		int	eat_new_line;
		
		printf("\n=====> Enter Software name which you need to delete:\n");
		eat_new_line = getchar();
		scanf("%[^\n]", sftwr_name);
		struct software *buff;
		
		while(temp != '\0')
		{
			if(check_case_sense(sftwr_name, temp -> name) == 0)
			{
				if(temp == sftwr_head)
				{
					sftwr_head = temp -> next;
			
					free(temp);
					temp = '\0';	
				} else {

					buff -> next = temp -> next;
			
					free(temp);
					temp ='\0';
				}
				printf("\n\n****** Software Deleted Successfully ******\n\n");
				return;
			}
			buff = temp;
			temp = temp -> next;
		}
		printf("\n\n======== Given Software is not available ========\n\n");
	}
}
