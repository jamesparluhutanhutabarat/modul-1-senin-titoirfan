// Mengecek anagram antara array B dan array A 
// 

#include <stdio.h> 

int main() {
    int len_a, len_b;
    int array_a[len_a];
    int array_b[len_b];

    printf("Masukkan banyaknya elemen A : ");
    scanf("%d", &len_a);

    for (int i = 0; i < len_a; i++) {
        printf("Masukkan elemen A ke-%d : ", i+1);
        scanf("%d", &array_a[i]);
    }

    printf("Masukkan banyaknya elemen B : ");
    scanf("%d", &len_b);

    for (int i = 0; i < len_a; i++) {
        printf("Masukkan elemen B ke-%d : ", i+1);
        scanf("%d", &array_b[i]);
    }

    return 0;
}