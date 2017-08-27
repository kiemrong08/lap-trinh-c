#include <stdio.h>

void go_south_east (int *lat, int *lon) {
	*lat = *lat -1;
	*lon = *lon +1;

}


int main ()
{
	int latitude = 32;
	int longitude = -64;
	int x=10;
	int *ConTro = &x;
	go_south_east(&latitude, &longitude);
	printf("Avast! Now at: [%i, %i]\n", latitude,longitude);
  printf("c %p\n",ConTro);
  printf("%p\n",&ConTro);
  printf("x %p\n",&x);
  printf("%i\n",x);

}