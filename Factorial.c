#include <stdio.h>

int main(){
    int n;
    int fact = 1;

    if(n <1){
        printf("Factorial cannot be negative");
    }
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(int i = 1; i <=n; i++){
        fact = fact*i;
    }

    printf("Factorial = %d", fact);

    return 0;

}