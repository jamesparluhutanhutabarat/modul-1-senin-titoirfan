// Mengecek anagram antara array B dan array A 
// DONE

#include <stdio.h> 

int main() {
    int len_a, len_b;

    printf("Masukkan banyaknya elemen A : ");
    scanf("%d", &len_a);

    int array_a[len_a];

    for (int i = 0; i < len_a; i++) {
        printf("Masukkan elemen A ke-%d : ", i+1);
        scanf("%d", &array_a[i]);
    }

    printf("Masukkan banyaknya elemen B : ");
    scanf("%d", &len_b);

    int array_b[len_b];
    int count_b = 0; 

    for (int i = 0; i < len_b; i++) {
        printf("Masukkan elemen B ke-%d : ", i+1);
        scanf("%d", &array_b[i]);
        for (int j = 0; j < len_b; j++) {
            if (array_b[i] == array_a[j]) {
                count_b += 1;
            }
        }
    }

    if (count_b == len_a) {
        printf("Jadi, B adalah anagram dari A");
    }
    else {
        printf("Jadi, B bukan anagram dari A");
    }

    return 0;
}