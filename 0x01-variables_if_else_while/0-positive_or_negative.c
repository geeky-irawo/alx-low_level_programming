#include <stdlib.h>
#include <time.h>


/**
*main - main code block
*Descirption: program that uses if..else statemnt
*Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0){
printf("%i is positive", n);
}
else if(n == 0){
printf("%i is zero", n);
}
else ( n < 0);{
printf("%i is negative", n);
}
return (0);
}
