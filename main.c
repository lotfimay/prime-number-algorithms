#include <stdio.h>
#include <stdlib.h>
#include "functions.c"



int main(){
    int i = 1;
    for(i = 1 ; i <= 100 ; i++){
        if(prime6(i) == true){
            printf("%d\n" , i);
        }
    }

}