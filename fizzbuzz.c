#include <stdio.h>
int main()
{
	for(int i = 0; i <= 9999999; i++)
	{
			switch((i%5 == 0) * 2 + (i%3 == 0))
			{
				case 0:
					fprintf(stdout, "%i\n", i);
					break;
				case 1:
					fprintf(stdout, "fizz\n");
					break;
				case 2:
					fprintf(stdout, "buzz\n");
					break;
				case 3:
					fprintf(stdout, "fizzbuzz\n");
					break;
			}
	}
}
