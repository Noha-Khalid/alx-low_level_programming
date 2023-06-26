#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int sum = 0;
char c;

srand(time(0));

do
{
c = rand() % 256;
sum += c;
putchar(c);
} while (sum <= 2772);

putchar('\n');
putchar(sum % 256);

return 0;
}
