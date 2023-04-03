#include <stdio.h>

int main() {
   int angka = 10;    // assignment nilai 10 ke variabel angka
   int i;
   
   // Pemilihan menggunakan if-else
   if (angka > 5) {
      printf("Angka lebih besar dari 5\n");
   } else {
      printf("Angka kurang dari atau sama dengan 5\n");
   }
   
   // Pengulangan menggunakan for
   for (i = 1; i <= angka; i++) {
      printf("%d\n", i);    // mencetak nilai i pada setiap iterasi
   }
   
   return 0;
}

