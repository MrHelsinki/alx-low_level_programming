#include "main.h"

/**
*append_text_to_file - add text to the end of file
*@filename: name of file
*@text_content: text to append
*Return: 1 on success and - 1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (text_content)
	{
		write(file, text_content, strlen(text_content));
	}

	close(file);
	return (1);
}
