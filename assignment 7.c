#include <stdio.h>
struct Student {
int rollNo;
char name[50];
float m1, m2, m3;
float total, percentage;
};
int main() {
struct Student s[100];
int n, i;
printf("Enter number of students: ");
scanf("%d", &n);
for (i = 0; i < n; i++) {
printf("\nEnter details for student %d:\n", i + 1);
printf("Roll Number: ");
scanf("%d", &s[i].rollNo);
printf("Name: ");
scanf(" %[^\n]", s[i].name);
printf("Enter marks of 3 subjects: ");
scanf("%f %f %f", &s[i].m1, &s[i].m2, &s[i].m3);
s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
s[i].percentage = s[i].total / 3.0;
}
printf("\n--- Student Results ---\n");
for (i = 0; i < n; i++) {
printf("Roll No: %d | Name: %s | Total: %.2f | Percentage: %.2f%% | Result: ", s[i].rollNo, s[i].name, s[i].total, s[i].percentage);
if (s[i].m1 >= 40 && s[i].m2 >= 40 && s[i].m3 >= 40) {
printf("PASS\n");
} else {
printf("FAIL\n");
}
}
return 0;
}
