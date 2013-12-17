enum {groesse = 3};
void init(int* alpha, int dim);     /* hier ist alpha ein Pointer auf ein Array */
void ausgabe(int alpha[], int dim); /* hier ist alpha vom Typ eines offenen Arrays */
int main(void)
{
	int arr[groesse];
	init(arr, groesse);
	ausgabe(arr, groesse);
	return 0;
}