#include <stdio.h>

int main(){
    int n, isPrime = 1;

    printf("Enter a number:");
    scanf("%d", &n);

    if(n <=1 ){
        printf("Prime number cannot be negative or one");
    }

    else{

        for(int i = 2; i < n; i++){

            if( n % i == 0){
                isPrime = 0;
                break;
            }
        }
    }

    if( n > 1 && isPrime == 1){
        printf("Prime Number\n");
    }
    if( n > 1 && isPrime == 0){
        printf("Not a Prime number\n");
    }

    return 0;

}