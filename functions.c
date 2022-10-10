#include <stdlib.h>
#include <stdbool.h>

bool prime1(long long int number){
    long long int  i = 2LL;
    bool isPrime = true && number != 1;
    while(i < number && isPrime){
        if(number % i == 0LL){
            isPrime = false;
        }
        else i++;
    }
    return isPrime;
}

bool prime2(int number){
    long long int i = 2LL;
    bool isPrime = true && number != 1;
    while(i <= (number / 2) && isPrime){
        if(number % i == 0){
            isPrime = false;
        }
        else i++;
    }
    return isPrime;
}

bool prime3(int number){
    long long int i;
    bool isPrime = true;
    if((number != 2 && number % 2 == 0) ||  number == 1)
        isPrime = false;
    else if(number != 2){
        i = 3;
        while(i < number && isPrime){
            if(number % i == 0){
                isPrime = false;
            }
            else i+=2;
        }
    }
    return isPrime;
}

bool prime4(int number){
    long long int i;
    bool isPrime = true;
    if((number != 2 && number % 2 == 0) ||  number == 1)
        isPrime = false;
    else if(number != 2){
        i = 3;
        while(i <= (number/2) && isPrime){
            if(number % i == 0){
                isPrime = false;
            }
            else i+=2;
        }
    }
    return isPrime;
}

bool prime5(int number){
    bool isPrime = true && number != 1;
    long long int i = 2LL;
    while(i <= sqrt(number) && isPrime){
        if(number % i == 0){
            isPrime = false;
        }
        else i++;
    }
    return isPrime;
}

bool prime6(int number){
    long long int i;
    bool isPrime = true;
    if((number != 2 && number % 2 == 0) ||  number == 1)
        isPrime = false;
    else if(number != 2){
        i = 3LL;
        while(i <= sqrt(number) && isPrime){
            if(number % i == 0){
                isPrime = false;
            }
            else i+=2;
        }
    }
    return isPrime;
}


