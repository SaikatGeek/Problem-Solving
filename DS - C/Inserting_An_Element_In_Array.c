#include <stdio.h>

int insertedArrayPrint(int array[], int index);

void main()
{
    int array[5] = { 12, 6, 8, 9, 2 };
    int index = sizeof(array)/sizeof(array[0]);

    insertedArrayPrint(array, index);

    return ;
}

int insertedArrayPrint(int array[], int index){
    int position = 2, element = 55;

    for(index; index > position; index--)
    {
        array[index] = array[index-1];
    }

    array[position] = element;


    for(int indexTwo = 0; indexTwo < 6; indexTwo++)
    {
        printf("%d\n", array[indexTwo]);
    }

}
