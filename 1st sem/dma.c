#include<stdio.h>

#include<string.h>

void main()

{

   char *ptr;

   // Dynamic allocation of memory

   ptr = (char *)malloc(10);

   if(ptr == NULL)

   {

       printf("malloc failed.\n");

       exit(1);

   }

   //_msize returns size in bytes of memory block

   printf("Memory of size %d created \n",_msize(ptr));

   strcpy(ptr, "INTIAL");

   printf("\nString stored is: %s \n ", ptr);

   // Reallocation of memory

   ptr = (char *)realloc(ptr, 20) ;

   if(ptr == NULL)

   {

       printf("Reallocation failed. \n");

       exit(1);

   }

   printf("\nMemory size modified. \n");

   printf("\nMemory still contains: %s \n",ptr);

   printf("\nMemory size changed to %d \n",_msize(ptr));

   strcpy(ptr, "CHANGED-STRING");

   printf("\nString now stored is: %s \n",ptr);

   // Freeing memory

   free(ptr);

}