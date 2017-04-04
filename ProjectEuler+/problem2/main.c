#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long evenFob(long x)
{
    long i = 0,last = 0,first = 1, second = 2,count = 2,element = 0;
    while((first+second) < x)
        {
            element = first+second;
            if((element%2) == 0)count += element;
            first = second;
            second =element;
           // printf("%ld %ld\n",first,second);
            
        }
    return count;

}
int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long n; 
        scanf("%ld",&n);  
        printf("%ld\n",evenFob(n));
        
    }
    return 0;
}

