// Inserting an element in an array of given size
#include<stdio.h>

int display (int arr[], int size)           // display function for printing an array
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 1;           // Returning integer value
}
int insertion(int arr[],int size,int element,int index,int capacity)            // Insert function for an element
{
    if (size >= capacity)           // Size should be less than of an array capacity
    {
        printf("Insertion failed due to capacity exhausted");
    }
    else
    {
        for(int i = (size - 1); i >= index; i--)            // Shifting all the elements of an array to the right upto inertion index 
        {
            arr[i+1] = arr[i];          // Expression for shifting
        }
        arr[index] = element;
        size++;             // size is increased due to new element is inserted in previous size
        display(arr, size);             // Displaying new array
        return 0;      
    }
}

int main(void)
{
    int arr[100] = {10, 11, 15, 18, 20};
    int size = 5, element = 19, index = 3, capacity = 100;
    display(arr, size);
    insertion(arr, size, element, index, capacity);
    return 0;
}

// This code is tested on VS Code