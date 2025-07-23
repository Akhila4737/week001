#include <stdio.h>

void convertDays(int total_days) {
    int years, weeks, days;
    years = total_days / 365;
    total_days = total_days % 365;
    weeks = total_days / 7;
    days = total_days % 7;
    printf("Total days = %d which is %d year%s %d week%s and %d day%s\n",
        total_days, years, (years == 1) ? "" : "s",
        weeks, (weeks == 1) ? "" : "s",
        days, (days == 1) ? "" : "s");
}

int main() {
    int total_days;
    printf("Enter the days:");
    scanf("%d",&total_days);
    convertDays(total_days);

    return 0;
}

