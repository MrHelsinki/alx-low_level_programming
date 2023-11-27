#include "main.h"

/**
*create_file - create file
*@filename: file
*@text_content: Null char
*Return: 1 on success -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int file;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (!file)
		return (-1);


	write(file, text_content, strlen(text_content));
	close(file);

	return (1);
}
