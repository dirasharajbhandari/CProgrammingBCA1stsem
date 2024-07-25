#include <stdio.h>

int main() {
    float english, math, digital_logic, cfa, st,total, percentage;
    
    printf("Enter the value of five different subjects[english,math,digital logic, cfa and society]: ");
    scanf("%f%f%f%f%f",&english,&math,&digital_logic,&cfa,&st);
    total = english+math+digital_logic+cfa+st;
    percentage = (total/500)*100;
    
    //use of else if statement
    if(percentage>=90)
    {
        printf("A Grade");
    }
    else if(percentage>=80)
    {
        printf("B Grade");
    }
    else if(percentage>=70)
    {
        printf("C Grade");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}