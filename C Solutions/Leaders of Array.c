#include <stdio.h>

// Considered a leader if the element is greater than all elements to its right

int main (void) {
    int array[] = {16, 17, 4, 3, 5, 2};
    int size = sizeof(array)/sizeof(int);

    int leaderArray[] = {};     // Might not be the best way to declare an array
    int indexArray = 0;

    for (int i = 0; i < size; i++) {
        int j;
        for (j = i + 1; j < size; j++) {
            if (array[i] < array[j]) {
                break;
            }
        }
        // If element made it to the end of the loop -> It's bigger than rest of the elements
        if (j == size) {
            leaderArray[indexArray] = array[i];
            indexArray++;
        }
    }

    // Last element is always the leader since it's at the most right
    leaderArray[indexArray] = array[size];
    indexArray++;

    for (int i = 0; i < indexArray; i++) {
        printf("%d\n", leaderArray[i]);
    }
}   
