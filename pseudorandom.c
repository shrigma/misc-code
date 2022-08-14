#define _GNU_SOURCE 1
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <sys/random.h>
#include <sys/syscall.h>
int pseudorandom(int min, int max, int seedLoop)
{
	unsigned int prn; //psuedo random number
	for(int i = min; i <= seedLoop; i++)
	{
		void *buf = NULL;
		size_t l = 5;
		unsigned int o = 1;
		int TrueSeed = syscall(SYS_getrandom, buf, l, o);
		TrueSeed = TrueSeed + getentropy(buf, l);
		int temp = i << (int)time(NULL);
		prn = temp ^ (unsigned int)time(NULL) + (prn & (TrueSeed + seedLoop));
		prn = prn%max;
		prn = ~prn;
		prn = prn % max;
		if(prn > min)
			prn += min;
	}
	return prn;
}
int main()
{
	int min = 500;
	int max = 800;
	int rn = pseudorandom(min, max, ((unsigned int)time(NULL)%100));
	for(int i = 0; i <= (int)time(NULL)%69; i++)
	rn = pseudorandom(min, max, (unsigned int)~rn+(unsigned int)time(NULL)%20);
	fprintf(stdout, "%d\n", rn);
	return rn;
}
