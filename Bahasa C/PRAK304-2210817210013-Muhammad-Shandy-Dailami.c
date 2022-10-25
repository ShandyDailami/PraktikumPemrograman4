#include <stdio.h>

int main() {
    for(int i = 0; i <= 4; i++){
        int nilai;
        scanf("%d", &nilai);

        if(nilai == 0) {
            printf("Nol\n\n");
        }
        else if(nilai <= 9) {
            printf("Satuan\n\n");
        }
        else if(nilai <= 19) {
            printf("Belasan\n\n");
        }
        else if(nilai >= 100) {
            printf("Anda Menginput Melebihi Limit Bilangan\n\n");
        }
        else {
            printf("Puluhan");
        }}

        return 0;
    }
