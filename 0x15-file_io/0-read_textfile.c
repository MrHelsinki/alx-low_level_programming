#include "main.h"

/**
*read_textfile - read text
*@filename: name of file
*@letters: num of chrs to read
*Return: num chars it was able to read and write
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int data;
	int check_letters;
	ssize_t printed_chars;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	data = open(filename, O_RDONLY);

	check_letters = read(data, buffer, letters);
	if (check_letters < 0)
	{
		free(buffer);
		return (0);
	}
	close(data);
	buffer[check_letters] = '\0';

	printed_chars = write(STDOUT_FILENO, buffer, check_letters);

	if (printed_chars < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (printed_chars);



}
