#include "head.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct akun acc[100]; //Maks 100 akun user 
int jml_acc; // Banyaknya user

bool login(char *username, char *password){
    int i;
    for(i = 0;i < jml_acc; i++){
        if(strcmp(username,acc[i].username) == 0 && strcmp(password,acc[i].password) == 0){
            return true;
        }
    }
    return false;
}

int main(int argc, char *argv[]){
    get_acc(acc);
    jml_acc = count_acc();
    if (argc != 3){
        return EXIT_FAILURE;
    }else{
        if(login(argv[1],  argv[2]) == false){
            printf("Login Gagal\n");
            return EXIT_FAILURE;
        }
    }
    printf("Berhasil Login\n");

    apps();

    printf("Terima kasih sudah menggunakan layanan kami^__^\n"); 
    return 0;

}


