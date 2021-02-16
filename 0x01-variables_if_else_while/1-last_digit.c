#include <stdlib.h>                                                                                                                                                             
#include <time.h>                                                                                                                                                               
#include <stdio.h>                                                                                                                                                              
                                                                                                                                                                                
/**                                                                                                                                                                             
 *main - main is the is the main algorithm of hte program                                                                                                                       
 *Description - Progam that uses Logoical operand and if..else*                                                                                                                 
 *Return: 0                                                                                                                                                                     
 */                                                                                                                                                                             
int main(void)                                                                                                                                                                  
{                                                                                                                                                                               
int n;                                                                                                                                                                          
                                                                                                                                                                                
srand(time(0));                                                                                                                                                                 
n = rand() - RAND_MAX / 2;                                                                                                                                                      
                                                                                                                                                                                
int ld = abs(n % 10);                                                                                                                                                           
if (ld > 5)                                                                                                                                                                     
{                                                                                                                                                                               
printf("Last digit of %i is %i and is greater than 5\n", n, ld);                                                                                                                
}                                                                                                                                                                               
else if (ld == 0)                                                                                                                                                               
{                                                                                                                                                                               
printf("Last digit of %i is %i and is 0\n", n, ld);                                                                                                                             
}                                                                                                                                                                               
else if (ld < 6 && ld != 0)                                                                                                                                                     
{                                                                                                                                                                               
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, ld);                                                                                                         
}                                                                                                                                                                               
return (0);                                                                                                                                                                     
}
