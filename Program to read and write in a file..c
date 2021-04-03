#include <stdio.h>
#include <stdlib.h>

int main(){//main function body starts

   FILE *fptr;  // declaring a file type variable.
   fptr = fopen("./txt.txt", "w"); // opening a file in write mode
   if (fptr == NULL)// condition to verify that file is opened or not
   {
      printf("Error! in opening a file ");
      exit(1);
   }
   fprintf(fptr, "Hello India"); // writing in file

   fclose(fptr);
   return 0;
}