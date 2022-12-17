#include "main.h"

void factor(char *arg)
{

	int sqroot = 0;
	long fact = strtod(arg, NULL);

	sqroot = ceil(sqrt((double)fact));

	for (int i = 3; i <= sqroot; i += 2)
	{
		if (fact % i == 0)
		{
			printf("%li = %li x %d\n", fact, (fact/i), i);
			break;
		}
	}

}
