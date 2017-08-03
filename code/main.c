#include <stdio.h>
#include "file.h"

int main (int argc, char *argv[ ])
{
	Taikhoan nguoidung;
	printf ("Ten ban la gi ? ");
	scanf ("%s", nguoidung.ten);
	printf ("Ho cua ban la gi ? ");
	scanf ("%s", nguoidung.ho);
	printf ("Ho ten day du cua ban la %s %s", nguoidung.ho, nguoidung.ten);
	return 0;
}