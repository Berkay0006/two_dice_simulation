#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int sumCounts[13]; 
    int i, die1, die2, sum; 


    for (i = 0; i < 13; i++)
        sumCounts[i] = 0; 


    srand(time(NULL));


    for (i = 0; i < 50000; i++) {
        die1 = rand() % 6 + 1; 
        die2 = rand() % 6 + 1; 
        sum = die1 + die2; 
        sumCounts[sum]++; 
    }

    for (sum = 2; sum <= 12; sum++)
        printf("%2d: %d\n", sum, sumCounts[sum]); 

    return 0; 
}