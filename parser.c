#include "main.h"


/**
  * parse_file - Parse filename and get each line input
  * @filename: name of file to be read from
  *
  * Return: void
  */

void parse_file(FILE *filename)
{
           FILE *stream;
           char *line = NULL;
           size_t len = 0;
           ssize_t nread;

           stream = filename;
           if (stream == NULL)
	   {
               exit(EXIT_FAILURE);
           }

           while ((nread = getline(&line, &len, stream)) != -1)
	   {
		   factor(line);
           }

           free(line);
           fclose(stream);
           exit(EXIT_SUCCESS);
}
