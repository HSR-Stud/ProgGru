#include <stdio.h>
  
enum {bufLen = 16, 
      nrLen = 10};
 
int u2a(char* buf, unsigned int zahl, int length);
// schreibt die Zahl zahl rechtsbuendig mit Laenge length in den Buffer buf
// buf: Zielbuffer, muss genuegend gross sein (length+1)
 
int main(void)
{
  char strBuf[bufLen];
  unsigned int zahl; 
  int i = 0;
  
  printf("Vorzeichenlose Zahl eingeben: ");
  scanf("%d", &zahl);
  
  strBuf[i++] = 'W';
  strBuf[i++] = 'e';
  strBuf[i++] = 'r';
  strBuf[i++] = 't';
  strBuf[i++] = ':';
  
  // Index i ist nun der naechste freie Platz
  u2a(&strBuf[i], zahl, nrLen);
  
  printf("%s \n", strBuf);
  return 0;
}

int u2a(char* buf, unsigned int zahl, int length)
{
  int j;

  // mit Leerzeichen auffuellen
  for (j = 1; j <= length; ++j)
  {
    *buf++ = ' ';
  }
  
  *(buf + 1) = '\0';  //Stringende

  do
  {
    *buf-- = '0' + (zahl % 10);  // Achtung: '0' ist der Buchstabe "Null", nicht '\0'
    zahl /= 10;
  } while (zahl > 0);

  return 0;
} 
