#include <stdio.h>

main ()
{
int x,y;

printf("digite um numero\n");
scanf("%d",&x);
printf("digite outro valor\n");
scanf("%d",&y);
	
if (x>y)
{
printf("o menor: %d e o maior: %d \n", y,x);
}	
else
if (x<y)
{
printf("o menor: %d e o maior: %d \n", x,y);
}	
else
{
printf("são iguais\n");
}	
	
	
}
