#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc < 1)
	{
		printf("Error #1: Not enough parameters.\n");
		return -1;
	}
	
	int n = atoi(argv[1]);
	double s = 0.;
	for (int j = 1; j < n+1; j++)
		s += j;
	
	printf("Sum of all integers in range 1..%d is: %d.\n", n, s);
	return 0;
}