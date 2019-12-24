#include <stdio.h>

#include <math.h>

int main() {
    float gradeOne, gradeTwo, Media, finalGrade;
    int Fouls;

    printf("Insert the total fouls:\n");
    scanf("%i", &Fouls);

    if (Fouls >= 20) {
        printf("Failed by attendance!");
    } else {
        printf("Insert the first grade value:\n");
        scanf("%f", &gradeOne);
        printf("Insert the second grade value:\n");
        scanf("%f", &gradeTwo);

        Media = gradeOne + gradeTwo / 2;

        if (Media >= 7) {
            printf("Approved!");
        } else if (Media < 7 && Media >= 3) {
            printf("Final recovery!\n");

            printf("Insert your final grade value:\n");
            scanf("%f", &finalGrade);

            Media = Media + finalGrade / 2;

            if (Media >= 5) {
                printf("Approved by final recovery!");
            } else {
                printf("Disapproved!");
            }
        }
        return 0;
    }
}