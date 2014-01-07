#include <stdio.h> 

enum {maxval = 10};

void sortValues (double *values, const int number);

int main(void)
{
	double value[maxval];
	
	for (i = 0; i < maxval; i++)
	{
		printf ("Value %i: ", i + 1);
		scanf ("%lf", &value[i]);
	}
	
	sortValues (value, maxval);
	
	printf ("\nThe numbers are: ");
	
	for (i = 0; i < maxval; i++)
	{
		printf ("%.2lf ", value[i]);
	}
	
	return 0;
}

void sortValues (double *values, const int number)
{
	int i;
	int e;
	double temp;
	
	for (i = 0; i < number; i++)
	{
		for (e = i + 1; e < number; e++)
		{
			if (values[i] > values[e])
			{
				temp = values[i];
				value[i] = values[e];
				value[e] = temp;
			}
		}
	}
}