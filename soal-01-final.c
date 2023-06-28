// Melakukan perhitungan dasar nilai murid

#include <stdio.h>

int main() {
    int num_of_students;
    int student_grades[num_of_students];

    printf("Masukkan jumlah murid: ");
    scanf("%d", &num_of_students);

    for (int i = 0; i < num_of_students; i++) {
        printf("Masukkan nilai murid absen %d :", i); 
        scanf("%d", &student_grades[i]); 

        while (student_grades[i] < 0 || student_grades[i] >100) {
            printf("Input nilai tidak valid, coba lagi");
            
            printf("Masukkan nilai murid absen %d :", i);
            scanf("%d", &student_grades[i]); 
        }
    }

    //printf("Angka yang dimasukkan: %d\n", num_of_students);
    return 0;
}