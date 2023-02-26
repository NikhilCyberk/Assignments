

#include <stdio.h>

int main() {
    int day, month, year;
    printf("Enter the date in the format DD/MM/YYYY: ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("The converted date is: day %02d month %02d year %d\n", day,month,  year);
    return 0;
}
