#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char* s = "hi!";
  if(s == NULL) return 1;

  char* t = malloc(strlen(s) + 1); // we need each character + '\0'
  if(t == NULL) return 1;

  for(int i = 0, n = strlen(s); i <= n; i++){
    t[i] = s[i]; // Assign the characters from s to t
  }

  t[0] = toupper(t[0]); // Change character 0 to uppercase

  printf("%s, ", s);
  printf("%s\n", t);

  free(t);
  return 0;
}

// Output: hi!, Hi!
