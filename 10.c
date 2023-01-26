#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_RESET "\x1b[0m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int year, i = 0, j = 1;
	char var_year[10];

	printf(ANSI_COLOR_RED);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("~\t\t\tLEAP YEAR TEST\t\t\t~\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	printf(ANSI_COLOR_RESET);

	printf("ENTER YEAR: ");
	fgets(var_year, 10, stdin);
	year = atoi(var_year);
	if (year % 400 == 0) printf("%d is a leap year.", year); 
	else if (year % 100 == 0) printf("%d is not a leap year", year);
	else if (year % 4 == 0) printf("%d is a leap year.", year); 
	else { printf("%d is not a leap year.", year); }

	printf("\n\n\nNEXT 20 LEAP YEARS FROM INPUT YEAR: ");
	while (i < 20) {
		if ((year + j) % 400 == 0 || (year + j) % 4 == 0) {
			if (i == 0) printf("\t%d\n", year + j);
			else { printf("\t\t\t\t\t%d\n", year + j); }
			i++;
		}
		j++;
	}

	printf(ANSI_COLOR_GREEN);
	printf("\n\n\n");
	
	return 0;
}
