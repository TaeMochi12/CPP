#include<stdio.h>

void main() {

  int size, i, arr[30];

  int *ptr;

   ptr = &arr[0];

  printf("\nEnter the size of array : ");

  scanf("%d", &size);

  printf("\nEnter %d integers into array: ", size);

  for (i = 0; i < size; i++) {

     scanf("%d", ptr);
     printf("Address is %d\n",ptr); //to see the address of the entered element

     ptr++;

  }

  ptr = &arr[size - 1];

  printf("\nElements of array in reverse order are :");

  for (i = size - 1; i >= 0; i--) {

     printf("\nElement at index %d is %d and the address is %d ", i, *ptr,ptr); //Here the address is same,just the positions are reversed

     ptr--;

  }

}