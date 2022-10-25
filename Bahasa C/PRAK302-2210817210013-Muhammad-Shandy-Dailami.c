#include <stdio.h>

int main() {

    for(int i = 0; i <= 4; i++){
        int nilai;
        scanf("%d", &nilai);

        if(nilai >= 80) {
            printf("A\n\n");
        }
        else if(nilai >= 70) {
            printf("B\n\n");
        }
        else if(nilai >= 60) {
            printf("C\n\n");
        }
        else if(nilai >= 50) {
            printf("D\n\n");
        }
        else {
            printf("E");
        }}
        return 0;
    }
