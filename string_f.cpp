#include <stdio.h>
#include <string.h>

int my_puts(const char * string);
const char * my_strchr(const char *str, int ch);
int my_strlen(const char *str);
char * my_strcpy(char *destination, const char *source);
char * my_strncpy(char * destptr, const char * srcptr, int num);
char * my_strcat( char * destptr, const char * srcptr );


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

   	char srcptr[] = "War never changes...";
   	printf("Example for my_strcat(), result: %s\n", my_strcat(destptr, srcptr));
   	printf("Example for my_strcat(), result: %d\n", destptr);

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
	const char * nullSymb = "\0";

	for (int countSymb = 0; source[countSymb] != '\0'; countSymb++)
	{
		destination[countSymb] = source[countSymb];
		destination[countSymb + 1] = nullSymb[0];
	}

	return destination;
}

char * my_strncpy( char * destptr, const char * srcptr, int num)
{
	const char * nullSymb = "\0";
	
	for (int countSymb = 0; countSymb <= num; countSymb++)
	{
		destptr[countSymb] = srcptr[countSymb];
		destptr[countSymb + 1] = nullSymb[0];
	}

	return destptr;
}

char * my_strcat( char * destptr, const char * srcptr )
{
	const char * nullSymb = "\0";
	const int sizeDestptr = my_strlen(destptr);

	for (int countSymb = 0; countSymb <= my_strlen(srcptr); countSymb++)
	{
		destptr[countSymb + sizeDestptr] = srcptr[countSymb];
	}

	return destptr;
}