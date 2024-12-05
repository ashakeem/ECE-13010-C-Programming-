#include <stdio.h>

// helper to print the calendar 
void printCalendar(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const char *months[] = {"January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December"};

    // leap year detection
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        daysInMonth[1] = 29; 
    }

    // Starting day for December 2024 is Sunday
    int startDay = 0; 
    for (int i = 0; i < month - 1; i++) {
        startDay = (startDay + daysInMonth[i]) % 7;
    }

    // header
    printf("\t%s, %d\n", months[month - 1], year);
    printf("Su Mo Tu We Th Fr Sa\n");

    // leading spaces after each row
    for (int i = 0; i < startDay; i++) {
        printf("   ");
    }

    // days of the month
    for (int day = 1; day <= daysInMonth[month - 1]; day++) {
        printf("%2d ", day);
        if ((startDay + day) % 7 == 0) { 
            printf("\n");
        }
    }
    printf("\n");
}

int main() {
    int month, year;

    //  user input
    printf("Enter the month (1-12): ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);

    // input validation
    if (month < 1 || month > 12 || year < 1) {
        printf("Invalid input. Please enter a valid month (1-12) and year (>0).\n");
        return 1;
    }
    printCalendar(month, year);

    return 0;
}
