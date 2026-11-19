#include <stdio.h>
#include <string.h>
struct Student {
    int rollNo;
    char name[50];
    float marks[NUM_SUBJECTS];
    float total;
    float percentage;
    char result[10];
};
int main() {
printf("Enter the number of students (1-%d): ", MAX_STUDENTS);
scanf("%d", &n);
if (n <= 0 || n > MAX_STUDENTS) {
printf("Invalid number of students.\n");
return 1;
    }
for (int i = 0; i < n; i++) {
        printf("\n--- Enter details for Student %d ---\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        getchar(); // Clear newline from input buffer

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        students[i].total = 0;
        int passedAll = 1;

        printf("Enter marks for %d subjects (out of 100):\n", NUM_SUBJECTS);
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
            students[i].total += students[i].marks[j];

            if (students[i].marks[j] < 40.0) {
                passedAll = 0; // Failed if any single subject is below 40
            }
        }

     students[i].percentage = students[i].total / NUM_SUBJECTS;
if (passedAll && students[i].percentage >= 40.0) {
            strcpy(students[i].result, "PASS");
        } else {
            strcpy(students[i].result, "FAIL");
        }
    }

    printf("\n================\n");
    printf("%-10s %-20s %-10s %-12s %-10s\n", "Roll No", "Name", "Total", "Percentage", "Result");
    printf("====================================================================\n");

    for (int i = 0; i < n; i++) {
        printf("%-10d %-20s %-10.2f %-11.2f%% %-10s\n",
               students[i].rollNo,
               students[i].name,
               students[i].total,
               students[i].percentage,
               students[i].result);
    }
    printf("====================================================================\n");

    return 0;
}
