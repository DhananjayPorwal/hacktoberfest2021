#include <stdio.h>
#include <conio.h>

int reverse(int num);
int isPalindrome(int num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(isPalindrome(num) == 1)
    {
        printf("the given number is a palindrome");
    }
    else
    {
        printf("the given number is not a palindrome number");
    }
    return 0;
