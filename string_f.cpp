#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int my_puts(const char * string);
const char * my_strchr(const char *str, int ch);
int my_strlen(const char *str);
char * my_strcpy(char *destination, const char *source);
char * my_strncpy(char * destptr, const char * srcptr, int num);
char * my_strcat(char * destptr, const char * srcptr);
char * my_strncat(char * destptr, char * srcptr, int num );
char * my_strdup(const char *str);
char * my_getline(char* buffer, int num);



int main()
{
	char str[] = "War... War never changes...";
	printf("Example for my_puts(): ");
    my_puts(str);
    printf("\n");

    const char * adressSymb = my_strchr(str, 'c');
    printf("Example for my_strchr(): %d, %d\n", adressSymb, adressSymb - str + 1);

    printf("Example for my_strlen(): %d\n", my_strlen(str));

   	char destination[50] = "\0";
   	printf("Example for my_strcpy(), return: %d\n", my_strcpy(destination, str));
   	printf("Example for my_strcpy(), result: %s\n", destination);

   	char destptr[100];
   	printf("Example for my_strncpy(), return: %d\n", my_strncpy(destptr, str, 6));
   	printf("Example for my_strncpy(), result: %s\n", destptr);

   	char srcptr[] = "War never changes... ";
   	printf("Example for my_strcat(), return: %d\n", my_strcat(destptr, srcptr));
   	printf("Example for my_strcat(), result: %s\n", destptr);

   	char str_plus[] = "The end of the world occurred pretty much as we had predicted.";
   	printf("Example for my_strncat(), return: %d\n", my_strncat(destptr, str_plus, 20));
   	printf("Example for my_strncat(), result: %s\n", destptr);

   	char new_str[11] = "0123456789";
    char *istr = my_strdup(new_str);
   	printf("Example for my_strdup(), return: %d\n", istr);
   	printf("Example for my_strdup(), result: %s\n", istr);
   	printf("%p, %p", new_str, istr);

  	return 0;
}



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
	char nullSymb = '\0';

	for (int countSymb = 0; source[countSymb] != '\0'; countSymb++)
	{
		destination[countSymb] = source[countSymb];
		destination[countSymb + 1] = nullSymb;
	}

	return destination;
}


char * my_strncpy( char * destptr, const char * srcptr, int num)
{
	char nullSymb = '\0';
	
	for (int countSymb = 0; countSymb <= num; countSymb++)
	{
		if (srcptr[countSymb] == '\0')
			break;

		destptr[countSymb] = srcptr[countSymb];
		destptr[countSymb + 1] = nullSymb;
	}

	return destptr;
}


char * my_strcat( char * destptr, const char * srcptr )
{
	const int sizeDestptr = my_strlen(destptr);
	const int sizeSrcptr = my_strlen(srcptr)

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

char * my_getline(char * buffer, int num, char separator)
{
	for (unsigned i = 0; i < num; i++)
	{
		if (buffer[i] = separator)
			break;
		buffer[i] = getchar();
		buffer[i + 1] = '\0'; 
	}

	return buffer;
}