#include <stdio.h>
int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFilename[100], destinationFilename[100];
    char ch;
    int num;
    printf("Enter the source file name: "); // Get source file name from the user
    scanf("%s", sourceFilename);
    sourceFile = fopen(sourceFilename, "r"); // Open the source file in read mode
    if (sourceFile == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }
    printf("Enter the destination file name: "); // Get destination file name from the user
    scanf("%s", destinationFilename);
    destinationFile = fopen(destinationFilename, "w"); // Open the destination file in write mode
    if (destinationFile == NULL) {
        printf("Failed to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }
    while ((ch = fgetc(sourceFile)) != EOF) {// Copy characters and integers from source to destination
        fputc(ch, destinationFile);
    }
    fseek(sourceFile, 0, SEEK_SET); //Move the file pointer to the beginning of the source file
    while (fscanf(sourceFile, "%d", &num) == 1){ // Copy integers from source to destination
        fprintf(destinationFile, "%d ", num);
    }
    printf("File copied successfully.\n");
    fclose(sourceFile); // Close the files
    fclose(destinationFile);
    return 0;
}


// #include<stdio.h>
// void main() {
//     fptr1 = fopen("ujjwal kamila.txt", "r");
//     FILE *fptr2;
//     fptr2 = fopen("sum.txt", "w");
//     char ch;
//     ch = fgetc(fptr1);
//     while(ch!= EOF)
//     {
//         fprintf(fptr2, "%c", ch);
//         ch = fgetc(fptr1);
//     }
//     printf("File copied successfully.\n");
//     fclose(fptr1);
//     fclose(fptr2);
// }   FILE *fptr1;
//  

// #include <stdio.h>
// int main() {
//     FILE *sourceFile, *destinationFile;
//     char sourceFileName[100], destinationFileName[100];
//     char ch;
//     printf("Enter the source file name: ");
//     scanf("%s", sourceFileName);
//     // Open the source file in read mode
//     sourceFile = fopen(sourceFileName, "r");
//     if (sourceFile == NULL) {
//         printf("Error opening the source file.\n");
//         return 1;
//     }
//     printf("Enter the destination file name: ");
//     scanf("%s", destinationFileName);
//     // Open the destination file in write mode
//     destinationFile = fopen(destinationFileName, "w");
//     if (destinationFile == NULL) {
//         printf("Error opening the destination file.\n");
//         return 1;
//     }
//     // Copy the contents character by character
//     while ((ch = fgetc(sourceFile)) != EOF) {
//         fputc(ch, destinationFile);
//     }
//     printf("File copied successfully.\n");
//     // Close the files
//     fclose(sourceFile);
//     fclose(destinationFile);
//     return 0;
// }

