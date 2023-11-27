#include "main.h"

/**
*main - main
*@argc: arg count
*@argv: args
*Return: 1;
*/

int main(int argc, char **argv)
{
	int file_from, file_to;
	char *f_from, *f_to;
	int n;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_from = argv[1];
	file_from = open(f_from, O_RDONLY);
	if (!file_from)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
		exit(98);
	}
	f_to = argv[2];
	file_to = open(f_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (!file_to)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_to);
		exit(99);
	}
	while ((n = read(file_from, buffer, BUFSIZ)) > 0)
		write(file_to, buffer, n);
	if (n < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
		exit(98);
	}
	if (close(file_from) < 0 || close(file_to) < 0)
	{
		if (file_from < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		if (file_to < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
