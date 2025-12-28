#include <stdio.h>

int main() {
    int day;

    printf("Enter day number (1-Monday, 2-Tuesday, ..., 6-Saturday): ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Monday: Math, Physics, Chemistry\n");
            break;
        case 2:
            printf("Tuesday: English, Computer, Math\n");
            break;
        case 3:
            printf("Wednesday: Physics, Chemistry, Biology\n");
            break;
        case 4:
            printf("Thursday: Computer, Math, English\n");
            break;
        case 5:
            printf("Friday: Biology, Physics, Chemistry\n");
            break;
        case 6:
            printf("Saturday: Sports, Art, Music\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 6.\n");
    }

    return 0;
}
