// Find or check Palindrome;
// Take input from users and check;

#include <stdio.h>
int revNumber(int n) {
    int rev = 0, mod;

    while (n % 10 != 0){
        mod = n % 10;
        rev = (rev * 10) + mod;
        n = n / 10;
    }
    return rev;
}

int isPalindrome(int num) {
    int rev = revNumber(num);

    if (num == rev)
        return 1;
    else
        return 0;
}

int main (){
    int inp;

    printf("\nEnter your number: ");
    scanf("%d", &inp);

    if(isPalindrome(inp))
        printf("\nGiven number is Palindrome.....");
    else
        printf("\nGIven number is not Palindrome.....");
    
    return 0;
}