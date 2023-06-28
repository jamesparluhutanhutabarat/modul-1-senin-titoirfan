// Melakukan perhitungan dasar nilai murid

#include <stdio.h>
#include <math.h>
#include <string.h>

float classAverage(int arr[], int size) {
    int sum = 0; 

    for (int i = 0; i < size; i++) {
        sum += arr[i]; 
    }

    float average = (float)sum / size;
    return average;
} 

float standardDeviation(int arr[], int size, float average) {
    float sumofdiff = 0; 
    int power = 2;

    for (int i = 0; i < size; i++) {
        float diff = (float)arr[i] - average; 
        float square = pow(diff, power);
        sumofdiff += square;
    }

    float standev = sqrt(sumofdiff/size);
    return standev; 
}

int maxminGrades(int arr[], int size, int *min_grades, int *max_grades) {
    *min_grades = arr[0];
    *max_grades = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min_grades) {
            *min_grades = arr[i];
        }

        if (arr[i] > *max_grades) {
            *max_grades = arr[i];
        }
    }
}

// int remedialStudents(int arr[], int size, int *j) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] > 0){
//             printf("%d", arr[i]);
//         }
//     }
// }

int main() {
    int num_of_students;

    printf("Masukkan jumlah murid: ");
    scanf("%d", &num_of_students);

    int student_grades[num_of_students];

    int remedial_student[num_of_students];
    memset(remedial_student, 0, num_of_students);

    int min_grade, max_grade;

    int remedial, j = 0; //remedial_student

    printf("\n");

    for (int i = 0; i < num_of_students; i++) {
        printf("Masukkan nilai murid absen %d :", i+1); 
        scanf("%d", &student_grades[i]); 

        while (student_grades[i] < 0 || student_grades[i] >100) {
            printf("Input nilai tidak valid, coba lagi\n");
            
            printf("Masukkan nilai murid absen %d :", i);
            scanf("%d", &student_grades[i]); 
        }

        if (student_grades[i] < 80) {
            remedial = 1;
            remedial_student[j] = i+1;
            j += 1;
        }
    }

    float classaverage = classAverage(student_grades, num_of_students);
    float classdeviation = standardDeviation(student_grades, num_of_students, classaverage);
    maxminGrades(student_grades, num_of_students, &min_grade, &max_grade);

    printf("Rata-Rata Kelas: %.2f\n", classaverage);
    printf("Nilai Terendah: %d\n", min_grade);    
    printf("Nilai Tertinggi: %d\n", max_grade);    
    printf("Standard Deviasi: %.2f\n", classdeviation);

    if (remedial == 1) {
        // remedialStudents(remedial_student, num_of_students);
        printf("Murid yang harus remedial adalah absen: \n");
        for (int i = 0; i < j; i++) {
            printf("%d\n", remedial_student[i]);
        }
    }

    return 0;
}