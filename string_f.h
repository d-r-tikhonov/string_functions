#ifndef __STRING_F_H__
#define __STRING_F_H__


/// \brief				The puts function outputs a char* type string pointed to by the string parameter to the standard output stream and adds a newline character 'n'.
/// \param string 		C is a string for output to a standard output stream.
/// \return 			If successful, a non-negative value is returned.
/// \return 			In case of an error, the function returns the value EOF.
int my_puts(const char * string);


/// \brief				The strchr function searches for the first occurrence of the symbol symbol in the string string.	
/// \param str 			A pointer to a string.
/// \param ch 			The desired character is passed to the function as an integer. After the corresponding value is found, the function converts it to a symbol.
/// \return 			A pointer to the first occurrence of a character in a string.
/// \return 			If the value is not found, the function returns a null pointer.
const char * my_strchr(const char *str, int ch);


/// \brief				The strlen function sees the beginning of the C-string and starts counting the number of characters first
/// \param str 			C-string. 				
/// \return 			The length of the string.
int my_strlen(const char *str);


/// \brief				The function copies the srcptr C-strings, including the terminating null character to the destination string referenced by the destptr pointer.
/// \param destination	A pointer to the destination string where the source string will be copied.
/// \param source		A pointer to the string to be copied.		
/// \return 			A pointer to the destination string.
char * my_strcpy(char *destination, const char *source);


/// \brief				The function copies the first num characters from the srcptr string to the destptr string.			
/// \param destptr  	A pointer to the destination string (where the characters will be copied).	
/// \param srcptr		Copied string — the string from which the characters will be copied.
/// \param num 			The maximum number of copied characters of the srcptr string.
/// \return 			A pointer to the destination string.
char * my_strncpy(char * destptr, const char * srcptr, int num);


/// \brief				Concatenation of strings.
/// \param destptr 		A pointer to the destination string to which the source string characters will be added.
/// \param srcptr 		C is a string that is appended to the end of the destination string.
/// \return 			A pointer to destination.
char * my_strcat(char * destptr, const char * srcptr);


/// \brief				The function adds the first num characters of the srcptr string to the end of the destptr string, plus the end-of-line character.		
/// \param destptr 		A pointer to the destination string to which the source string characters will be added.
/// \param srcptr 		C is a string that is appended to the end of the destination string.		
/// \return 			Pointer to the string with the result of concatenation.
char * my_strncat(char * destptr, char * srcptr, int num );


/// \brief				The strdup function duplicates the string pointed to by the str argument.		
/// \param str 			A pointer to the duplicated string.
/// \return 			NULL – if it is not possible to allocate memory for a new line or copy the line pointed to by the argument str.
/// \return  			A pointer to a duplicate string.
char * my_strdup(const char *str);

	
/// \brief				It is used to receive an input string from the user in one or more lines until a special character (separator) appears.
/// \param buffer 		C-string for incoming characters
/// \param num 			Number of characters
/// \param separator 	Separator character
/// \return 			Pointer to the string with the result.
char * my_getline(char* buffer, int num, char separator);

#endif