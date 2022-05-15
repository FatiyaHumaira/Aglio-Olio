/*
Deklarasi tipe data untuk menyimpan akun
*/
struct akun{
	char username[50];
	char password[50];
};

/* 
	Fungsi untuk mengambil data akun dari dalam database 
   	parameternya ialah alamat variabel account
*/
void get_acc(struct akun *);

/*
Menghitung banyak akun yang sudah terdaftar
*/
int count_acc();

void apps();
void menu();
//fungsi untuk add to cart
void pesan();
void checkout();
//fungsi untuk status dan menampilkan struk 
void status();

