#include <stdio.h>

int main() {

    int x, i, j, tempt, min;
    int array[] = { 4,9,15,7,5,3,11,8,4 };
    int size = sizeof(array) / sizeof(array[0]);

    for (i = 0; i < (size - 1); i++)
    {
        min = i;

        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
            if (min != i)
            {
                tempt = array[i];
                array[i] = array[min];
                array[j] = tempt;
                min=i;
            }

        }
        for (int x = 0; x < (size); x++) {
            printf("%d\n", array[x]);
        }
        printf("\n");
    }
    
}