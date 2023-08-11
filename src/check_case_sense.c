#include "header/header.h"
#include "header/inventory.h"

int check_case_sense(char *name, char *string)
{
//97 - 65 == 32
	int i = 0;
	char arry[strlen(string)]; 
	
	strcpy(arry, string);
	
	for(i = 0; name[i] != '\0'; i++)
	{
		if((name[i] >= 65) && (name[i] <= 90))
		{
			name[i] = name[i] + 32;
		}
	}

	
	for(i = 0; arry[i] != '\0'; i++)
	{
		if((arry[i] >= 65) && (arry[i] <= 90))
		{
			// string[i] = string[i] + 32;
			arry[i] = arry[i] + 32;
		}
	}
	

	return strcmp(name, arry);
}

