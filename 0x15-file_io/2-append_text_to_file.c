#include "main.h"

/**
 * append_text_to_file - Appends the text at the end of a file.
 * @filename: points to name of the file.
 * @text_content: String to add at the end of the file.
 *
 * Return: -1 if the function fails or the file name is NULL
 *         -1 if the file does not exists or the user lacks write permissions.
 *         Otherwise return 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int t, w, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

t = open(filename, O_WRONLY | O_APPEND);
w = write(t, text_content, len);

if (t == -1 || w == -1)
return (-1);

close(t);

return (1);
}
