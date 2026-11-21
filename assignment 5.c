#include <stdio.h>
#include <string.h>
int main() {
char str1[100], str2[100];
int choice, res;
while (1) {
printf("\n1. String Length (strlen)\n2. String Copy (strcpy)\n3. String Concatenation (strcat)\n4. String Comparison (strcmp)\n5. Find Substring (strstr)\n6. Exit\nEnter choice: ");
scanf("%d", &choice);
if (choice == 6) {
break;
}
switch (choice) {
case 1:
printf("Enter string: ");
scanf(" %[^\n]", str1);
printf("Length of string: %zu\n", strlen(str1));
break;
case 2:
printf("Enter source string: ");
scanf(" %[^\n]", str1);
strcpy(str2, str1);
printf("Copied string: %s\n", str2);
break;
case 3:
printf("Enter first string: ");
scanf(" %[^\n]", str1);
printf("Enter second string: ");
scanf(" %[^\n]", str2);
strcat(str1, str2);
printf("Concatenated string: %s\n", str1);
break;
case 4:
printf("Enter first string: ");
scanf(" %[^\n]", str1);
printf("Enter second string: ");
scanf(" %[^\n]", str2);
res = strcmp(str1, str2);
if (res == 0) {
printf("Strings are equal.\n");
} else if (res < 0) {
printf("First string is smaller than second.\n");
} else {
printf("First string is greater than second.\n");
}
break;
case 5:
printf("Enter main string: ");
scanf(" %[^\n]", str1);
printf("Enter substring to find: ");
scanf(" %[^\n]", str2);
if (strstr(str1, str2) != NULL) {
printf("Substring found.\n");
} else {
printf("Substring not found.\n");
}
break;
default:
printf("Invalid choice.\n");
}
}
return 0;
}
