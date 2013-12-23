unsigned long faku(unsigned int n)
{
	unsigned long fak = 1UL;
	unsigned int i;
	for (i = 2; i <= n; ++i)
		fak = fak * i;
	return fak;
}