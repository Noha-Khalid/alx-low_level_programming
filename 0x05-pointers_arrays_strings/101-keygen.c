#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int sum ;
char c;

srand(time(NULL));

while (sum <= 2772)
{
c = rand() % 128;
sum += c;
putchar(c);
} 

putchar(2722 - sum);

return 0;
}
