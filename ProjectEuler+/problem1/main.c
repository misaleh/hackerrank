#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define sumTriangular(X) (X*(X+1)/2)

int main(){
    long int t,j,x,y,z,count = 0, sumx = 0 , sumy = 0,sumz =  0; 
    scanf("%d",&t);
    
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        //n  = 1000000000;
        n--;
        x = n/3 ;
        y = n/5 ;
        z= n/15 ;
        sumx = sumTriangular(x);
        sumy = sumTriangular(y);
        sumz = sumTriangular(z);
        count = 3*sumx + 5*sumy - 15*sumz;  
        printf("%ld\n",count);


        
    }
    return 0;
}
