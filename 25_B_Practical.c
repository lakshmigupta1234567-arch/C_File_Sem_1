#include <stdio.h>

int main() {
    int day;

    printf("Enter a day number (1-Monday to 6-Saturday): ");
    scanf("%d", &day);

    if(day == 1) {
        printf("Monday: Math, Physics, Chemistry\n");
    } else if(day == 2) {
        printf("Tuesday: English, Computer, Math\n");
    } else if(day == 3) {
        printf("Wednesday: Physics, Chemistry, Biology\n");
    } else if(day == 4) {
        printf("Thursday: Computer, Math, English\n");
    } else if(day == 5) {
        printf("Friday: Biology, Physics, Chemistry\n");
    } else if(day == 6) {
        printf("Saturday: Sports, Art, Music\n");
    } else {
        printf("Invalid input! Please enter a number between 1 and 6.\n");
    }

    return 0;
}
