void binaerZahlReku (unsigned int zahl)
{
	if (zahl > 0)
	{
		binaerZahlReku (zahl / 2);
		printf ("%d ", zahl % 2);
	}
}