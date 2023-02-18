#include<stdio.h>
// include to this package to use strlen 
#include <string.h>


void main(){
    // strings are array of characters
    char name[] = {'v', 'i', 's', 'h', 'a', 'l', '\0'};
    char surname[] = "Maheshwaran";
    printf("%s\n", name);

    // length function in C
    int len = strlen(name);
    printf("%d\n", len);

    //concatenation of strings
    strcat(name,surname);
    printf("%s \n", name);

    //copying a string (store in, from what)
    strcpy(name, surname);
    printf("%s", name);
    
}