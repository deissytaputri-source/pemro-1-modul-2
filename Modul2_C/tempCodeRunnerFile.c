#include <stdio.h>
#include <math.h>

int main() {
    float A, B, C, keliling, luas;

    scanf("%f %f", &A, &B);


    C = sqrt(B * B - A * A);
    keliling = A + B + C;
    luas = 0.5 * A * C;

    printf("Alas = %.0f cm\n", C);
    printf("Tinggi = %.0f cm\n", A);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2%c\n", luas, 178);

    return 0;
}
