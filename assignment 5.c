#include <stdio.h>
#include <string.h>

#define MAX 100
void readString(char str[]) {
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';
}
int main() {
    int choice, cmp;
    char str1[MAX], str2[MAX], temp[MAX];
do {
  printf("\n--- String Operations Menu (In-built Functions) ---\n");
  printf("1. Find String Length (strlen)\n");
  printf("2. Copy String (strcpy)\n");
  printf("3. Concatenate Strings (strcat)\n");
 printf("4. Compare Strings (strcmp)\n");
printf("5. Search Substring (strstr)\n");
printf("6. Reverse String (strrev / manual fallback)\n");
printf("7. Exit\n");
printf("Enter your choice (1-7): ");
scanf("%d", &choice);
getchar(); // Consume the newline character left by scanf

  switch (choice) {
            case 1:
                printf("Enter a string: ");
                readString(str1);
                printf("Length of \"%s\" = %zu\n", str1, strlen(str1));
                break;

            case 2:
                printf("Enter source string: ");
                readString(str1);
                strcpy(str2, str1);
                printf("Copied string: \"%s\"\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                readString(str1);
                printf("Enter second string: ");
                readString(str2);
                strcat(str1, str2);
                printf("Concatenated string: \"%s\"\n", str1);
                break;

            case 4:
                printf("Enter first string: ");
                readString(str1);
                printf("Enter second string: ");
                readString(str2);
                cmp = strcmp(str1, str2);
                if (cmp == 0) {
                    printf("Strings are equal.\n");
                } else if (cmp < 0) {
                    printf("\"%s\" comes before \"%s\" alphabetically.\n", str1, str2);
                } else {
                    printf("\"%s\" comes after \"%s\" alphabetically.\n", str1, str2);
                }
                break;

            case 5:
                printf("Enter main string: ");
                readString(str1);
                printf("Enter substring to search: ");
                readString(str2);
                if (strstr(str1, str2) != NULL) {
                    printf("Substring \"%s\" found in \"%s\".\n", str2, str1);
                } else {
                    printf("Substring \"%s\" NOT found in \"%s\".\n", str2, str1);
                }
                break;

            case 6: {
                printf("Enter a string: ");
                readString(str1);
                strcpy(temp, str1);
                // Note: strrev() is non-standard (works on Windows/Turbo C, not GCC/Linux)
                // Standard portable reversal:
                int len = strlen(temp);
                for (int i = 0; i < len / 2; i++) {
                    char ch = temp[i];
                    temp[i] = temp[len - 1 - i];
                    temp[len - 1 - i] = ch;
                }
                printf("Reversed string: \"%s\"\n", temp);
                break;
            }

    case 7:
                printf("Exiting program. Goodbye!\n");
                break;

default:
                printf("Invalid choice! Please enter a number between 1 and 7.\n");
        }
    } while (choice != 7);
return 0;
}
