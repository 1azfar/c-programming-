#include <stdio.h>

int main(){
    int x,y;

    printf("Enter two numbers:");
    scanf("%d %d", &x, &y);
    printf("sum = %d \n", x + y);
    printf("subraction = %d \n", x - y);
    printf("division = %d \n", x / y);
    printf("multiplication = %d \n", x * y);
    
    return 0;
}