#include <stdio.h>
#include <string.h>

int isValidComment(char *str) {
  int i = 0;

  // Case 1: Single-line comment
  if (str[0] == '/' && str[1] == '/') {
    return 1;
  }

  // Case 2: Multi-line comment
  if (str[0] == '/' && str[1] == '*') {
    i = 2;

    while (str[i] != '\0') {
      // Look for closing */
      if (str[i] == '*' && str[i + 1] == '/') {
        // Ensure nothing after */
        if (str[i + 2] == '\0')
          return 1;
        else
          return 0;
      }
      i++;
    }

    // If we exit loop → no closing */
    return 0;
  }

  return 0;
}

int main() {
  char str[300];

  printf("Enter input: ");
  fgets(str, sizeof(str), stdin);

  // Remove newline
  str[strcspn(str, "\n")] = '\0';

  if (isValidComment(str))
    printf("Valid Comment\n");
  else
    printf("Invalid Comment\n");

  return 0;
}
