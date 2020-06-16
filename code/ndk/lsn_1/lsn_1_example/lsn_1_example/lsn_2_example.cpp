#include <stdbool.h>
#include "lsn_2_example.h"

int main()
{
	int i = 10;
	int *p = &i;
	printf("%s\n",&i);
	printf("%s\n", &p);
	system("pause");

	return 0;
}