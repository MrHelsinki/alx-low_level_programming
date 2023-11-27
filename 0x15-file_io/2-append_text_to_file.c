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
	int x;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
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
