#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n_bytes, i;
	void (*ptr)() = (void (*)())main;
	unsigned char *dir = (unsigned char *)ptr;

	if (argc == 2)
	{
		n_bytes = atoi(argv[1]);
		if (n_bytes < 0)
		{
			printf("Error\n");
			exit(2);
		}
		for (i = 0; i < n_bytes; i++)
		{
			printf("%02x, ", dir[i]);
			if (i < (n_bytes - 1))
				printf(" ");
		}
		printf("\n");
	}
	else
	{
		printf("Error\n");
		exit(1);
	}
}
