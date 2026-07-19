#include <stdio.h>
#include <stdbool.h>

int main() {
    double age = 21;
    int year = 2026;
    int quantity = 2;
    float gpa = 7.0;
    float price = 90.99;
    double pi = 3.14159;
    double e = 2.7182818284;
    char name = 'A';
    char symbol = '#';
    char name1[] ="nithish raj";
    char food[] = "pizza";
    bool isstudent = 0;
    if(isstudent){
        printf("you are a student\n");
    }
    else{
        printf("youre not a student\n");
    }
    
    printf("your fav food is %s\n",food);
    printf("your name is %s\n",name1);
    printf("your fav symbol is %c\n",symbol);
    printf("the grade is %c\n",name);
    printf("the value of pi is %.15lf\n",pi);
    printf("the value of e is %.15lf\n",e);
    printf("the price is $%f\n",price);
    printf("your gpa is %.1f\n",gpa);
    printf("you are %.1f years old\n", age);
    printf("you will be %.1f years old in %d\n",age,year);
    printf("you have %d items\n", quantity);

    return 0;
}