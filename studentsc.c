#include <stdio.h>

int main() {
    int score;

    printf("Enter the student's score: ");
    scanf("%d", &score);

    char grade;

    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80 && score <= 89) {
        grade = 'B';
    } else if (score >= 70 && score <= 79) {
        grade = 'C';
    } else if (score >= 60 && score <= 69) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("Grade: %c\n", grade);

����return�0;
}
