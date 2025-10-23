#include <stdio.h>

int main(){
    int input;
    scanf("%d", &input);

    int hari = 0, jam = 0, menit = 0, detik = 0;

    hari = input / 86400;

    jam = (input % 86400)/3600;

    menit = (input % 3600)/60;

    detik = input % 60;

    if(hari == 0){
        ptintf("%.2d:%.2d:%.2d", jam, menit, detik);
    } else{
        printf("%d hari %.2d:%.2d:%.2d", hari, jam, menit, detik);
    }

    return 0;
}