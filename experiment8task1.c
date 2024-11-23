#include<stdio.h> 
int main() {
    char str[100];
    int length = 0 ;
    printf("\t\t***string legth finder***\n\n");
    printf("enter your string:");
    gets(str);
    while(str[length] != '\0'){
        length++;
    }
    printf("string length:%d charachters",length);
    return 0;
}
/****string legth finder***

warning: this program uses gets(), which is unsafe.
enter your string:shaikh
string length:6 charachter*/