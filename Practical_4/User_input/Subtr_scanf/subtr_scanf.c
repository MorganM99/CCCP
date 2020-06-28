#include <stdio.h>

int main(){
    int num1;
    int num2;
    int result;
    printf("Enter two integers, with a space between: \n");
    scanf("%d %d",&num1,&num2);
    result=num1-num2;
    printf("%d\n",result);
    return 0;
}