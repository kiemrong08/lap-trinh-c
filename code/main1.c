#include <stdio.h>
#include "file.h"

void taoToadodiem(Toadodiem *diembatky);

int main (int argc, char *argv[ ]){
	Taikhoan nguoidung;
	printf ("Ten ban la gi ? ");
	scanf ("%s", nguoidung.ten);
	printf ("Ho cua ban la gi ? ");
	scanf ("%s", nguoidung.ho);
	printf ("Ho ten day du cua ban la %s %s\n", nguoidung.ho, nguoidung.ten);
	
  Toadodiem diembatkyCuatoi;
	taoToadodiem(&diembatkyCuatoi);
	
	Toadodiem *contro = &diembatkyCuatoi;
	diembatkyCuatoi.x = 10;
	printf ("Gia tri của x : %d\n",diembatkyCuatoi.x);
	contro -> x =20;
	
  printf ("Gia tri của con trỏ: %d \n", contro -> x);
	
	return 0;
}

void taoToadodiem(Toadodiem *diembatky) {
	diembatky-> x = 0;
	diembatky-> y = 0;
}