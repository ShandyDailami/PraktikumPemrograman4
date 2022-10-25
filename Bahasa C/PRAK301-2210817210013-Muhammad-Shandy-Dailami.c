#include <stdio.h>

int main() {
    int angka1, angka2, angka3, x = 0;
    for(x = 0; x < 3; x++){
        scanf("%d %d %d", &angka1, &angka2, &angka3);

        if(angka1 < angka2 && angka1 < angka3 && angka2 < angka3) {
            printf("%d %d %d", angka1, angka2, angka3);
        }
        else if(angka1 > angka2 && angka1 > angka3 && angka2 < angka3) {
            printf("%d %d %d", angka2, angka3, angka1);
        }
        else if(angka2 > angka1 && angka2 > angka3 && angka1 < angka3) {
            printf("%d %d %d", angka1, angka3, angka2);
        }
        else if(angka3 > angka1 && angka3 > angka2 && angka2 > angka1) {
            printf("%d %d %d", angka3, angka2, angka1);
        }
        else if(angka2 < angka1 && angka2 < angka3 && angka1 < angka3) {
            printf("%d %d %d", angka2, angka1, angka3);
        }
        else if(angka3 < angka1 && angka3 < angka2 && angka1 < angka2) {
            printf("%d %d %d", angka3, angka1, angka2);
        }
        else {
            printf("%d %d %d", angka3, angka2, angka1);
        }
    }

    return 0;
}