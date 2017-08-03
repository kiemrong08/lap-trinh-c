typedef struct Taikhoan Taikhoan;
typedef struct Toadodiem Toadodiem;

struct Taikhoan
{
	char ten[100];
	char ho[100];
	char diachi[1000];
	int tuoi;
	int gioitinh; // Boolean : 1 = nam, 0 = nu
};

struct Toadodiem
{
	int x; // hoanh do cua diem
	int y; // tung do cua diem
};

