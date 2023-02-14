// find the greatest
#include <stdio.h>
int main(){
    int n1, n2, n3;
    // printf("Enter the value of n1:, n2:, n3:\n");
    // // scanf("%d, %d, %d",n1, n2, n3); // if we do not put & with them then we will get the address of those datatypes
    // scanf("%d, %d, %d",&n1, &n2, &n3);
    printf("first number: \n");
    scanf("%d", &n1);
    printf("second number: \n");
    scanf("%d", &n2);
    printf("third number: \n");
    scanf("%d", &n3);

    if (n1>n2 && n1>n3){
        printf("%d is the greatest\n", n1);
    }
    else if (n2>n3 && n2>n1){
        printf("%d is the greatest\n", n2);
    }
    else if (n3>n2 && n3>n1){
        printf("%d is the greatest\n", n3);
    }

    return 0;
}