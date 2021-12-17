#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int random_num(int l, int r) {
	return (rand() % (r - l + 1)) + l;
}

int main(int argc, char* argv[])
{
	if (argc == 1)
		return 0;

	int str_len = strlen(argv[1]);
	srand(time(0));

	for (int i = 0; i < str_len; i++)
	{
		if (random_num(0, 1) == 0 || argv[1][i] < 65)
			printf("%c", argv[1][i]);
		else
			if (argv[1][i] > 96)
				printf("%c", argv[1][i] - 32);
			else
				printf("%c", argv[1][i] + 32);
	}
	printf("\n");
	return 0;
}
