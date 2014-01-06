// Datei: uint2str.c
// wandelt eine unsigned int und schreibt sie in einen char-Array
// R. Bonderer, 02.11.2012

#include <stdio.h>
  
enum {bufLen = 16, 
      nrLen = 10};
 
int main(void)
{
  char strBuf[bufLen];
  unsigned int zahl; 
  int i = 0;
  int j;
  
  printf("Vorzeichenlose Zahl eingeben: ");
  scanf("%d", &zahl);
  
  strBuf[i++] = 'W';
  strBuf[i++] = 'e';
  strBuf[i++] = 'r';
  strBuf[i++] = 't';
  strBuf[i++] = ':';
  
  // Index i ist nun der nächste freie Platz
  // die Zahl wird von hinten nach vorne (Annahme: 10 Stellen maximal) in den Array geschrieben
  
  // mit Leerzeichen auffüllen
  for (j = 1; j <= nrLen; ++j)
  {
    strBuf[i++] = ' ';
  }
  
  strBuf[i+1] = '\0';  //Stringende
  do
  {
    strBuf[i--] = '0' + (zahl % 10);  // Achtung: '0' ist der Buchstabe "Null", nicht '\0'
    zahl /= 10;
  } while (zahl > 0);
  
  printf("%s \n", strBuf);
  return 0;
}

