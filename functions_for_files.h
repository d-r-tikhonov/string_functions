#ifndef __FUNCTIONS_FOR_FILES_H__
#define __FUNCTIONS_FOR_FILES_H__


/// \brief				The function reads characters from the stream and stores them as a string in the parameter until the end of the string or until the end of the file is reached.
/// \param num 			Number of characters
/// \return 			If successful, the function returns a pointer to string.
char * my_fgets(char * string, int num, FILE * filestream);


#endif