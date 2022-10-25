#include <stdio.h>

int main() {
    for(int i = 0; i <= 2; i++){
        int nilai;
        scanf("%d", &nilai);

        if(nilai > 0) {
            printf("positif\n\n");
        }
        else if(nilai < 0) {
            printf("negatif\n\n");
        }
        else {
            printf("nol\n\n");
        }}

        return 0;
    }
