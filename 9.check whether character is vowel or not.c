
//C Program to check whether character is vowel or not...

#include<stdio.h>

main()
{
    char c;
    printf("Enter the character: ");
    scanf("%c",&c);

    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        printf("The character is a VOWEL.");
    else
        printf("The character is not a VOWEL.");
}
