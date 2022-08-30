#include <stdio.h>
#include "string_f.h"
#include "functions_for_files.h"


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
   	printf("%p, %p\n", new_str, istr);

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