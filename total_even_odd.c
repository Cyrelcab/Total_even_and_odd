#include<stdio.h>

int main(){
    int x, input[100], i = 0, total_even = 0, total_odd = 0;

    printf("How many numbers to be inputted: ");
    scanf("%d", &x);

    for(i = 1; i <= x; i++){
        printf("\nInput a number: ");
        scanf("%d", &input[i]);

        if(input[i] % 2 == 0){
            total_even += input[i];
        }else{
            total_odd += input[i];
        }
    }
    printf("\nThe total even is %d\n", total_even);
    printf("The total odd is %d\n", total_odd);

    return 0;
}
