#include <stdio.h>
int main(){
	float perc;
	float ammL;
	float finammL;
	float price;
	fprintf(stdout, "What is the alcohol Percentage: ");
	scanf("%f", &perc);
	perc = perc / 100;
	fprintf(stdout, "What is the Volume in Litres: ");
	scanf("%f", &ammL);
	finammL = perc * ammL;
	fprintf(stdout, "%fL pure alcohol\n", finammL);
	fprintf(stdout, "What is the Price: ");
	scanf("%f", &price);
	fprintf(stdout, "you are paying %f for per Litre of Pure Alcohol\n", (price/finammL));
	return 0;
}
