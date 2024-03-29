#include "main.h"

/**
 * append_text_to_file -This will append txt at the end of each file.
 * @filename: Pointer to the name of the file.
 * @text_content: String to add by the end of the file.
 *
 * Return: If the functions fail or filename is NULL or ZERO - -1.
 *         If the file does not exist the user will not have write permissions - -1.
 *         Other than that - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
