// Task

// You have to print the character,ch , in the first line.
//  Then print s in next line. In the last line print the sentence,sen .

// Input Format

// First, take a character, ch as input.
// Then take the string, s as input.
// Lastly, take the sentence sen as input.

// Constraints

// Strings for s and sen will have fewer than 100 characters, including the newline.

// Output Format

// Print three lines of output. The first line prints the character,ch .
// The second line prints the string, s.
// The third line prints the sentence,sen .



#include <stdio.h>
int main()
{
    char ch;
    char s[100];
    char sen[100];
    scanf("%c\n",&ch);
    scanf("%s\n",&s);
    scanf("%[^\n]%*c",&sen);
    printf("THE CHARACTER :%c\n",ch);
    printf("THE STRING IS :%s\n",s);
    printf("THE LINE IS :%s",sen);
}