void binaerZahlIter (unsigned int zahl1)
{
	// Anzahl Bytes des Typs int
	int array [sizeof(int)*8] = {0};
	int zahl2;
	for (zahl2 = 0; zahl1; zahl2++, zahl1 /= 2)
		array[zahl2] = zahl1 % 2;
	for (--zahl2; zahl2 >= 0; zahl2--)
		printf ("%d ", array[zahl2]);
}