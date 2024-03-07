#include "sales.h"
#include <stdio.h>

int main() {
    double my_sales[12];
    read_sample(my_sales);
    printf("\nMonthly sales report of 2022:\n");
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    for (int i = 0; i < 12; ++i) {
        printf("%-9s \t$%.2lf\n", months[i], my_sales[i]);

    } printf("\n");

    int max_month, min_month;
    double min_sales = find_min(my_sales, &min_month);
    double max_sales = find_max(my_sales, &max_month);
    double avg_calc= find_avg(my_sales);


    printf("Sales Summary:\n");

    printf("Minimum sales: $%.2lf (%5s)\n", min_sales, months[min_month]);
    printf("Maximum sales: $%.2lf (%5s)\n", max_sales, months[max_month]);
    printf("Average sales: $%.2lf\n" , avg_calc);
    printf("\nSix-Month Moving Average Report:\n");
    six_avg(months, my_sales);
    printf("\nSales Report (Highest to Lowest):\n");
    printf("  Month     Sales\n");
    high_to_low(my_sales,months);

}
