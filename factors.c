#include "main.h"

void factor(char *arg)
{

	int sqroot = 0;
	long fact = strtod(arg, NULL);

	sqroot = ceil(sqrt((double)fact));

	for (int i = 2; i <= sqroot; i++)
	{
		if (fact % i == 0)
		{
			printf("%li = %d x %li\n", fact, i, (fact/i));
			break;
		}
	}

}
