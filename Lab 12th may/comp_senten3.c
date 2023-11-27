#include <stdio.h>
#include <string.h>
int main() {
  char sentence1[100];
  char sentence2[100];
  printf("Enter the first sentence: ");
  fgets(sentence1, 100, stdin);
  printf("Enter the second sentence: ");
  fgets(sentence2, 100, stdin);
  int i = 0;
  while (sentence1[i] != '\0' && sentence2[i] != '\0')
  {
    if (sentence1[i] != sentence2[i]) {
      printf("The sentences are not equal.\n");
      return 0;
    }
    i++;
  }
  printf("The sentences are equal.\n");
  return 0;
}