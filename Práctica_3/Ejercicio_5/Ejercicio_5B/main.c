#include <stdio.h>
#include <conio.h>
void main()
{
int ma[3][3];
int a, b;
for(a=0;a<3;a++)
{
 for(b=0;b<3;b++)
 {
 printf(�Introduce el valor de %d�);
 scanf(�%d�,&ma[a][b]);
 }
 }
}
printf(�La inversa de la matriz a es..: �);
for(a=0;a<3;a++)
{
 for(b=0;b<3;b++)
 {
 printf(� %d �,ma[b][a]);
 }
printf(�\n�);
 }
}
getch();
}
