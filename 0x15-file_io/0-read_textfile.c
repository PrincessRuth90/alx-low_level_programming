#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

int file;
ssize_t rcount, wcount;
char *buffer;

if (filename == NULL)
	return (0);

file = open(filename, O_RDWR);
if (file == -1)
	return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
	free(buffer);
	return (0);
}

rcount = read(file, buffer, letters);
if (rcount == -1)
	return (0);

wcount = write(STDOUT_FILENO, buffer, rcount);

if (wcount == -1 || rcount != wcount)
	return (0);

free(buffer);

close(file);

return (wcount);
}

