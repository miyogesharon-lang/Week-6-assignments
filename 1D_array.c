//system to display total revenue for each day of the week
/*
name:Miyoge Sharon Nyatichi
reg n0:PA106/G/28785/25
description:program to display total revenue for each day of the week
*/

#include <stdio.h>

int main() {
    float revenue[7], total = 0, average;
    int i;

printf("Enter revenue for each day of the week:\n");
for (i = 0; i < 7; i++) {
printf("Day %d: ", i + 1);
scanf("%f", &revenue[i]);
total += revenue[i];
}

    average = total / 7;
printf("Total Weekly Revenue: %.2f\n", total);
printf("Average Daily Revenue: %.2f\n", average);

    return 0;
}
