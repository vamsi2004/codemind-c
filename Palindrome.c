#include <stdio.h>
int main() {
  int n, reversed = 0, remainder, original;
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("True");
    else
        printf("False");

    return 0;
}


