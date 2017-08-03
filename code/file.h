typedef struct Taikhoan Taikhoan;


struct Taikhoan
{
	char ten[100];
	char ho[100];
	char diachi[1000];
	int tuoi;
	int gioitinh; // Boolean : 1 = nam, 0 = nu
}; 