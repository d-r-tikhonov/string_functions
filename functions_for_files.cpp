#include <stdio.h>

#include "functions_for_files.h"

char * my_fgets(char * string, int num, FILE * filestream)
{	
	if (string == NULL)
		return NULL;

	for (unsigned i = 0; i <= num; i++)
	{
		string[i]   = getc(filestream);
		string[i + 1] = '\0';
		if (string[i] == '\n')
			break;
	}

	return string;
}