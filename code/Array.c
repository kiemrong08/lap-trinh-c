#include <stdio.h>


void fortune_cookie(char msg[]) {
  printf("Message reads: %s\n", msg);
  printf("msg occupies %i bytes\n", sizeof(msg));
}

void main () {
  
  char quote[] = "Cookies make you fat";
  fortune_cookie(quote);
  printf("The quote string is stored at: %p\n", quote);
  printf("The quote string is stored at: %p\n", &quote[0]);
  printf("The quote string is stored at3: %s\n", quote);
  
  printf("The quote string is stored at4: %i\n", sizeof(quote));
/*  printf("%i\n",sizeof(int));
  printf("%i\n",sizeof("Turtles!"));*/
  
}
