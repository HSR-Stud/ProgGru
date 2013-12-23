#include <stdio.h>
void textAusgabe(char** textPointer, 
								 int zeilen)
{
	int i;
	for (i = 0; i < zeilen; i++)
		printf("%s\n",*textPointer++);
}
int main(void)
{
	char* strTable[] = {"Pflaume",
											"Apfel",
											"Johannisbeere"};
	textAusgabe(strTable, 3);
	return 0;
}