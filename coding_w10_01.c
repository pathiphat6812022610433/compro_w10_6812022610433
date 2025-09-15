#include <stdio.h>

int main() {

    int num_students = 7;

    int scores[7] = {7, 6, 9, 8, 12, 3, 13,};

    int sum = 0;

    printf("Enter number of students: %d\n", num_students);

    printf("Enter %d student scores (one per line):\n", num_students);


    for (int i = 0; i < num_students; i++) {

        printf("Score %d : %d\n", i + 1, scores[i]);

        sum += scores[i];

    }

    float average = (float)sum / num_students;

    printf("\nNumber of students = %d\n", num_students);

    printf("Average score = %.2f\n", average);

    return 0;

}