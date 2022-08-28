#include <stdio.h>


char * my_fgets(char * string, int num, FILE * filestream);


int main()
{
	FILE * ptrFile = fopen("file.txt" , "r");

	char mystring [100];
 
  	if (ptrFile == NULL) 
  		printf("Error opening files!\n");
   	else
   	{
    	if (my_fgets(mystring, 100, ptrFile) != NULL)
    		puts(mystring); 
    	fclose (ptrFile);
   	}

	return 0;
}

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