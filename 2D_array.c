//room occupancy
/*
name:Miyoge Sharon Nyatichi
reg no:PA106/G/28785/25
description:program to display room occupancy
*/

#include <stdio.h>


int main() {
    int occupancy[5][10];
    int floor, room;
    int occupied, vacant;

    srand(time(0)); // Initialize random generator

    printf("Room Occupancy (1 = occupied, 0 = vacant)\n\n");

for (floor = 0; floor < 5; floor++) {
occupied = vacant = 0;
for (room = 0; room < 10; room++) {
occupancy[floor][room] = rand() % 2;
if (occupancy[floor][room] == 1)
occupied++;
else
vacant++;
}
printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
}

return 0;
}
