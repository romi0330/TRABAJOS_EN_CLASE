#include <stdio.h>
#include <math.h>

int primo(int num);

int main() {
    int num;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &num);
    if (primo(num)) {
        printf("%d es un numero primo\n", num);
    } else {
        printf("%d no es un numero primo\n", num);
    }
    return 0;
}

int primo(int num) {
    int i;
    if (num <= 1) {
        return 0;
    }
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}