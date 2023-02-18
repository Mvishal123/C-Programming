#include<stdio.h>

struct Student{
    int age;
    int id;
};


void display(struct Student *p1){
    printf("age = %d\n", p1 -> age);
    printf("Id =  %d", p1 -> id);
}

void main(){
struct Student s1;
s1.id = 31;
s1.age = 18;
display(&s1);
}