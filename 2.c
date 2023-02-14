// Reversing input number using recursion
#include<stdio.h>

int sum = 0, rem;
int reverse_function(int num){
    if(num){ // if we give number 0 then 0 will be false value and it will go in else function
        printf("Value of num: %d\n", num);
        rem=num%10;
        printf("The value of rem is: %d\n", rem);
        printf("The value of sum is: %d\n", sum);
        sum=sum*10+rem; 
        // printf("Enter number %d\n", sum);
        printf("now the value of sum is: %d\n", sum);
        reverse_function(num/10); // it was int data type so on dividing it will store only int values and not float so from here for ex. 502/10 = 50.2 so now the value of num will be 50
    }
    else {
    return sum;
    }
    
}
int main(){
    int num, reverse;
    printf("Enter number\n");
    scanf("%d",&num);
    
    reverse = reverse_function(num);
    printf("after reversing the number is:%d \n", reverse);
    return 0;
}
