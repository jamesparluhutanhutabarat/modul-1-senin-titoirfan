#include <stdio.h>
#include <math.h>

int main()
{
    int num_student;
    int buf_grade;
    float sum_grade = 0, buf_std = 0;
    int max_grade = 0;
    int min_grade;

    // Input number of student
    printf("Masukkan jumlah murid: ");
    scanf("%d", &num_student);
    printf("\n");

    int i = 0;
    int grades[num_student];
    while (i < num_student)
    {
        printf("Masukkan nilai murid absen %d : ", i + 1);
        scanf("%d", &buf_grade);

        // Initialize Lowest grade
        if (i == 0)
        {
            min_grade = buf_grade;
        }

        // If grades are valid
        if (buf_grade <= 100 && buf_grade >= 0)
        {
            grades[i] = buf_grade;

            if (buf_grade > max_grade)
            {
                max_grade = buf_grade;
            }
            if (buf_grade < min_grade)
            {
                min_grade = buf_grade;
            }

            // Determining Class Average, by summing every elmts
            sum_grade += buf_grade;
            ++i;
        }
        else
        {
            printf("Input nilai tidak valid, coba lagi\n");
        }
    }

    // Print avg, lowest, highest grade
    float avg_grade = sum_grade / num_student;
    printf("\nRata-Rata Kelas: %.2f\n", avg_grade);
    printf("Nilai Terendah: %d\n", min_grade);
    printf("Nilai Tertinggi: %d\n", max_grade);

    // Finding Std Dev
    for (int j = 0; j < num_student; ++j)
    {
        buf_std += pow((grades[j] - avg_grade), 2);
    }
    printf("Standard Deviasi: %.2f\n", sqrt(buf_std / num_student));

    // Print who has to get reevaluation exam
    i = 0;
    for (int j = 0; j < num_student; ++j)
    {
        if (grades[j] < 80)
        {
            ++i;
        }
    }

    if (i == 0)
    {
        printf("Tidak ada murid yang remedial.");
    }
    else
    {
        printf("Murid yang harus remedial adalah absen:\n");
        for (int j = 0; j < num_student; ++j)
        {
            if (grades[j] < 80)
            {
                printf("%d\n", j + 1);
            }
        }
    }
}
