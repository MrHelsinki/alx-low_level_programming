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
	size_t x;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (!file)
		return (-1);

	if (text_content)
	{
		x = write(file, text_content, strlen(text_content));
		if (x != strlen(text_content))
			return (-1);
	}
	close(file);
	return (1);
}
