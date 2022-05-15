#include "head.h"
#include <stdio.h>

void get_acc(struct akun *akun){
	FILE *account = fopen("Database/login.bin", "rb");
	//FILE *account = fopen("login.txt", "r");
	int jml_acc;
	fread(&jml_acc, sizeof(int), 1, account);
	fread(akun, sizeof(struct akun), jml_acc, account);
	fclose(account);
}

int count_acc(){
	FILE *account = fopen("Database/login.bin", "rb");
	//FILE *account = fopen("login.txt", "r");
	int jml_acc;
	fread(&jml_acc, sizeof(int), 1, account);
	fclose(account);
	return jml_acc;
}
