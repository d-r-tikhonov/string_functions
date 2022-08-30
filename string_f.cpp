#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "string_f.h"


int my_puts(const char * str)
{
	for (int countSymb = 0; str[countSymb] != '\0'; countSymb++)
	{
		printf("%c", str[countSymb]);
	}
}

const char * my_strchr(const char *str, int ch)
{
	for (int countSymb = 0; str[countSymb] != '\0'; countSymb++)
	{
		if (str[countSymb] == ch)
		{
			return &str[countSymb];
		}
	}
		
	return NULL;
}


int my_strlen(const char *str)
{
	int lengthString = 0;

	for (int countSymb = 0; str[countSymb] != '\0'; countSymb++)
	{
		lengthString++;
	}

	return lengthString;
}


char *my_strcpy (char *destination, const char *source)
{
	for (int countSymb = 0; source[countSymb] != '\0'; countSymb++)
	{
		destination[countSymb] = source[countSymb];
		destination[countSymb + 1] = '\0';
	}

	return destination;
}


char * my_strncpy( char * destptr, const char * srcptr, int num)
{
	
	for (int countSymb = 0; countSymb <= num; countSymb++)
	{
		if (srcptr[countSymb] == '\0')
			break;

		destptr[countSymb] = srcptr[countSymb];
		destptr[countSymb + 1] ='\0';
	}

	return destptr;
}


char * my_strcat( char * destptr, const char * srcptr )
{
	const int sizeDestptr = my_strlen(destptr);
	const int sizeSrcptr = my_strlen(srcptr);

	for (int countSymb = 0; countSymb <=  sizeSrcptr; countSymb++)
	{
		destptr[countSymb + sizeDestptr] = srcptr[countSymb];
	}

	return destptr;
}


char * my_strncat( char * destptr, char * srcptr, int num )
{
	const int sizeDestptr = my_strlen(destptr);
	
	for (int countSymb = 0; countSymb <= num; countSymb++)
	{
		if (srcptr[countSymb] == '\0')
			break;

		destptr[countSymb + sizeDestptr] = srcptr[countSymb];
		destptr[countSymb + sizeDestptr + 1] = '\0';
	}

	return destptr;
}

char * my_strdup(const char *str)
{
	char *new_str = (char *) calloc(my_strlen(str) + 1, sizeof(char));

	if (new_str == nullptr)
	{
		return nullptr;
	}

	my_strcpy(new_str, str);
	return new_str;
}

size_t my_getline (char **string, size_t *n, FILE *stream)
{
	char incomingSymbol = 0;
	unsigned counterMass = 0;

	if (stream == nullptr || string == nullptr || n == 0)
		return -1;

	if (*string == nullptr)
	{
		*string = (char*) calloc(1, sizeof(char));
		*n = 1;
	}
	else
	{
		*string = (char*) realloc(*string, *n * sizeof(char));
	}

	while( (incomingSymbol = getc(stream)) != '\n' && incomingSymbol != EOF )
	{
		(*string)[counterMass] = incomingSymbol; 

		counterMass++;

		if (counterMass >= *n)
		{
			*string = (char*) realloc(*string, counterMass * sizeof(char));
			*n = counterMass;
		}

	}

	string[counterMass + 1] = '\0';

	return *n;
}