int main(void)
{
 int arr[5];
 int (*alpha)[5] = &arr;
 printf("Adresse von alpha : %p\n", alpha);
 printf("Adresse von (alpha+1): %p\n", alpha+1);
 return 0;
}