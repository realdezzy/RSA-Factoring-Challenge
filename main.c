#include "main.h"

/**
  * main - Main function for factorisation program
  * @argc: Length of input from commandline
  * @argv: Array of input strings
  *
  * Return: 0 or 1
  */

int main(int argc, char *argv[])
{
	FILE *file;

	if (argc != 2)
	{
		fprintf(stderr,"Usage: factors file");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1],"r");

	if (file == NULL)
	{
		fprintf(stderr,"Can't open file");
		exit(EXIT_FAILURE);
	}

	parse_file(file);

	return (0);

}

