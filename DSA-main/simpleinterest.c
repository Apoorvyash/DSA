#include<stdio.h>

    int main(){
        float simple_interest,principle,rate,time;
        printf("enter principle,rate,time:");
        scanf("enter principle:%f",&principle);
        scanf("enter rate:%f",&rate);
        scanf("enter time:%f",&time);
        simple_interest=(principle*rate*time)/100;
        printf("the value of simple interest is:%f",&simple_interest);
    return 0;
}