#include<stdio.h>
#include<string.h>
/*Name:Misbah Shaikh
roll no:51
UIN:241A060
Branch:AI&DS
*/
int main()

{

char str[100];

int i;

printf("\t\t ***Palindrome Finder ***\n\n");

printf ("Enter Your String:");

gets(str);

for (i = 0;i< strlen(str) - 1; i++) {

if (str[i]!=str[strlen(str)- 1 - i]){

printf("The String is NOT a Palindrome");

return 0;

}

}


printf("The String is a Palindrome");

return 0;

}
/****Palindrome Finder ***
Enter Your String:misbah
The String is NOT a Palindrome*/
