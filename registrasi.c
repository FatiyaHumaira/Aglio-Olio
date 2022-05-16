#include "head.h"
#include <stdio.h>
#include <stdbool.h>

struct akun acc[100]; //Akun paling banyak ada 100
int jml_acc; //banyak akun terdaftar

void daftar_acc(){
    printf("Masukkan username : ");
	scanf(" %[^\n]s", acc[jml_acc].username);
    printf("Masukkan password : ");
	scanf(" %[^\n]s", acc[jml_acc].password);
    jml_acc++;
    FILE *account = fopen("Database/login.bin", "wb");
    //FILE *account = fopen("login.txt", "w");
	fwrite(&jml_acc, sizeof(int), 1, account);
    fwrite(acc, sizeof(struct akun), jml_acc, account);
    fclose(account); 
}

int main(){
	while(true){
		int option;
		get_acc(acc);
		jml_acc = count_acc();
		printf("\t\t***\n1. Daftar akun\n2. Keluar\n");
		scanf("%d", &option);
		if(option==1){
			printf("\n\n");
			daftar_acc();
			printf("Berhasil daftar akun\n\n");
			printf("\n\n");
		}
		else if(option==2){
			break;
		}
		else{
			printf("Inputan tidak valid, mohon masukkan angka sesuai menu\n\n'n");
		}
	}
	return 0;
}
