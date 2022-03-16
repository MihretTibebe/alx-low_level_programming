#include <stdio.h>

int main(void)
{
int i = 0;
int j;
int r;	
while (i <= 9)
{
j = 0;
while (j <= 9)
{
r = i * j;
if (r < 10)
_putchar('0' + r);
else
{
_putchar('0' + r / 10);
_putchar('0' + r % 10);
}	
if (j == 9)
break;	
_putchar(',');
_putchar(' ');
if (r < 10)
_putchar(' ');
j++;
}
putchar('\n');
i++;
}
return (0);
}
