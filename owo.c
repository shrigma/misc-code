#include <stdio.h>
static char text[1024];
int main(int argc, char *argv[])
{
	/********************************************\
	 *this is an owoifyer                       *
	 *it will turn normal text into OwO/uwu text*
	 *i really fucking hate this creation  	    *
	\********************************************/
	if(argc > 1)
	{
		for(int j = 1; j < argc; j++)
		{
			for(int i = 0; i < 255; i++)
			{
				switch(argv[j][i])
				{
					case 'r':
					case 'l':
						argv[j][i] = 'w';
						break;
					case 'R':
					case 'L':
						argv[j][i] = 'W';
						break;
					default:
						break;
				}
			}
		}
		for(int j = 1; j < argc; j++)
			fprintf(stdout, "%s ", argv[j]);
		fprintf(stdout, "\n");
		return 0;
	}
	for(;;)
	{
		if(fgets(text, 1024, stdin) == NULL)
		{
			if(feof(stdin) != 0)
				return 0;
			else
			{
				fputs("ERR: Failed to read from stdin", stderr);
				return 1;
			}
                                }
				for(int i = 0; i < 1024; i++)
				{
					switch(text[i])
					{
						case 'r':
						case 'l':
							text[i] = 'w';
							break;
						case 'R':
						case 'L':
							text[i] = 'W';
							break;
						default:
						break;
					}
				}
				fprintf(stdout, "%s", text);
	}
}
