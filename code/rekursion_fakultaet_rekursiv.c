unsigned long faku(unsigned int n)
{
	if (n > 1)
		return n * faku(n-1);
	else
		return 1UL;
}