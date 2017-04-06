#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char checkPrime(long n )
{
    int i;
    for(i = 2 ; i<(n/2) ; i++ )
        {
            if(n%i == 0)
                {
                    return 0;   
                }
        }
    return 1;
}
int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long n; 
        scanf("%ld",&n);
        long max = 0;
        int d = 3; /*first prime*/
               while((n%2) == 0) /*remove all d from the number */ 
             {
                max = 2;
                n = n/2;/*remove d from the number */
            }
        while(d*d <= n)  
        {
             if((n%d) == 0) /*remove all d from the number */ 
             {              
                n = n/d;/*remove d from the number */
                max = d;
            }
            else d+=2;
       }
        if(n>max) max = n;
    printf("%ld\n",max);
    }
    return 0;
}

