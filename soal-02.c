/*EL2208 Praktikum Pemecahan Masalah dengan C 2020/2021
*Modul            : 1
*Percobaan        : -
*Hari dan Tanggal : Kamis, 11 Februari 2021
*Nama (NIM)       : -
*Asisten (NIM)    : Alexandra Handayani (18318026)
*Nama File        : M01_alexandra.c
*Deskripsi        : Mencari tahu apakah suatu pasangan array anagram atau bukan 
*/


#include <stdio.h>

int main () { 
	//Deklarasi variabel dan array
	int arrA[10];
	int frekA[10]; 
	int arrB[10]; 
	int frekB[10]; 
	int A; 
	int B; 
	int i,j;
	int false = 0;  
	
	//input nilai
	printf("Masukkan banyaknya elemen A : "); 
	scanf("%d",&A); 
	for (i=0;i<A;++i) { 
		printf("Masukkan elemen A ke-%d : ", i+1); 
		scanf("%d", &arrA[i]);
	}
	printf("Masukkan banyaknya elemen B : "); 
	scanf("%d",&B); 
	for (i=0;i<B;++i) { 
		printf("Masukkan elemen B ke-%d : ", i+1); 
		scanf("%d", &arrB[i]);
	}

	//memasukkan ke tabel frekuensi, berisi frekuensi dari tiap elemen 
	for (i=0; i<10; i++) {
		frekA[i] = 0; 
		for (j=0; j<A; j++) { 
			if (arrA[j] == i) { 
			frekA[i] += 1; 
			}
		}
	}
	for (i=0; i<10; i++) {
		frekB[i] = 0;
		for (j=0; j<B; j++) { 
			if (arrB[j] == i) { 
			frekB[i] += 1; 
			}
		}
	}
	
	//proses untuk membandingkan antartabel
	i = 0; 
	while ((false == 0) && (i<10)) { 
		if (frekA[i] != frekB[i]) { 
			false = 1;
		}
		else { 
			i+=1; 
		}
	}
	
	//output 
	if ((A == B) && (false == 0)) { 
		printf("Jadi, B adalah anagram dari A"); 
	}
	else { 
		printf("Jadi, B bukan anagram dari A"); 
	}
	return 0; 
}
