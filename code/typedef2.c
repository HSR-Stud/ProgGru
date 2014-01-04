typedef enum {black, red, green, yellow, blue} Color;
typedef struct
{
 int x;
 int y;
} Point;
typedef struct
{
 Point p1;
 Point p2;
 Color col;
} Line;
int main (void)
{
 Line myLine = {{12, -34},    // p1
				{783, 12},    // p2
				yellow};      // col
 printf ("Anfangspunkt: (%d, %d)\n", myLine.p1.x, myLine.p1.y);
 printf ("Endpunkt:     (%d, %d)\n", myLine.p2.x, myLine.p2.y);
 printf ("Farbe:        %d\n", myLine.col);
 return 0;
}