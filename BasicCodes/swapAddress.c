# include<stdio.h>

void swap(int *pA, int *pB){
    int temp = *pA;
    *pA = *pB;
    *pB = temp;
    printf("a = %d\n", *pA);
    printf("b = %d\n", *pB);
}
void main(){
    int a = 10;
    int b = 20;
    int *pA = &a;
    int *pB = &b;
     swap(pA, pB);
}

