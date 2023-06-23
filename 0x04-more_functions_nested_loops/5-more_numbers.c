#include <main.h>
/**
* c program
* Return: 0
*/

void more_numbers(void)
{
   int num , r , i ;
   for (r = 1; r <= 10; r++ )
   {
       for (i =0 ; i <= 14; i++ )
       {
           num = i ;
           if (i > 9)
           {
               _putchar(1+ 48);
               num = i % 10;
           }
           _putchar(num + 48);
           }
       }
       _putchar('\n');
   }
}
