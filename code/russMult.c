#include <stdio.h>
 
// Funktionsprototypen
int isOdd(unsigned int nr);
// return != 0: nr ungerade
// return    0: nr gerade
 
unsigned int getProduct(unsigned int op1, unsigned int op2);
// multipliziert das Produkt von op1 und op2 mit Hilfe der russischen Bauernmultiplikation


int main(void)
{
  unsigned int zahl1; 
  unsigned int zahl2; 
  unsigned int produkt;
  
  printf("Zwei vorzeichenlose ganze Zahlen eingeben: ");
  scanf("%d %d", &zahl1, &zahl2);

  produkt = getProduct(zahl1, zahl2);
  
  printf("%d * %d = %d \n", zahl1, zahl2, produkt);
  return 0;
}

unsigned int getProduct(unsigned int op1, unsigned int op2)
{
  unsigned int sum = 0;  // Zwischensumme
  
  while (op1 > 0)
  {
    if (isOdd(op1))
    {
      sum = sum + op2;
    }
    op1 = op1 / 2;
    op2 = op2 * 2;
  }
  
  return sum;
} 
 
int isOdd(unsigned int nr)
{
  return nr % 2 != 0;
}
