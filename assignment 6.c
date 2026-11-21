#include <stdio.h>
long long factorialWithoutRecursion(int n) {
long long fact = 1;
int i;
for (i = 1; i <= n; i++) {
fact = fact * i;
}
return fact;
}
long long factorialWithRecursion(int n) {
if (n == 0 || n == 1) {
return 1;
}
return n * factorialWithRecursion(n - 1);
}
int main() {
int num;
printf("Enter a positive integer: ");
scanf("%d", &num);
if (num < 0) {
printf("Factorial of a negative number doesn't exist.\n");
} else {
printf("Factorial without recursion: %lld\n", factorialWithoutRecursion(num));
printf("Factorial with recursion: %lld\n", factorialWithRecursion(num));
}
return 0;
}
