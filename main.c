#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include "functions.c"





int main()
{
    clock_t t1,t2;
    double delta;
    bool premier;
    long long int nbr = 201820192019LL;
    int i;
    double sum=0.0;

    // scanf("%d",&nbr);
    
    for(i=0;i<50;i++){
        t1=clock();
        premier = prime1(nbr);
        t2=clock();
        delta=(double)(t2-t1)/(CLOCKS_PER_SEC);
        sum=+delta;
    }
    printf("Le temps d'execution = %lf ",sum/50);

    
    return 0;
}
