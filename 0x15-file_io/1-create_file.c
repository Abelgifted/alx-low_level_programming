#include "main.h"

/**
 * create_file - Create file.
 * @filename: points to name of the file to be created.
 * @text_content: points to string to write to the file.
 *
 * Return: --1 if the function fails
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
int fo, w, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

fo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(fo, text_content, len);

if (fo == -1 || w == -1)
return (-1);

close(fo);

return (1);
}
