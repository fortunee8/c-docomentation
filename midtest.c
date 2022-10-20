#include <stdio.h>

int main(void)
{
  int pilihan;
  int input[100], jumlah_array, i, nilai_kecil, nilai_besar, jumlah, rata; //Variabel untuk opsi 1 
  int faktorial, angka, bilangan, hasil;
  int input_nilai; 
  int kolom, baris, ukuran_kotak;

printf("TES TENGAH SEMESTER ASDOS DDP \n");  
printf("1. Program Nilai Terkecil, Terbesar, Rata-rata dan Jumlah \n");  
printf("2. Program Faktorial \n");
printf("3. Program Cek Nilai dan Predikat \n");
printf("4. Program Kotak \n");
scanf("%d", &pilihan);

  if(pilihan==1){
  printf("Input jumlah element Array: ");
  scanf("%d",&jumlah_array);

  printf("Input %d angka (dipisah dengan enter): \n",jumlah_array);

  // simpan setiap angka yang diinput ke dalam array
  for(i = 0; i < jumlah_array; i++){
    scanf("%d",&input[i]);
  }

  printf("\n");

  nilai_kecil = input[0];
  // proses mencari nilai terkecil
  for(i = 0; i < jumlah_array; i++){
    if(input[i] < nilai_kecil){
      nilai_kecil = input[i];
    }
  }
  for(i=0;i<jumlah_array;i++){
    	if(input[i] > nilai_besar){
    		nilai_besar = input[i];
		}
	}
  for(i=0;i<jumlah_array;i++){
    	jumlah = jumlah + input[i];
	}
  for(i=0;i<jumlah_array;i++){
    rata = jumlah/jumlah_array;
  }

  printf("Angka terkecil adalah: %d \n",nilai_kecil);
  printf("Angka terbesar adalah: %d \n",nilai_besar);
  printf("Jumlah keseluruhan adalah: %d \n",jumlah);
  printf("Jumlah rata adalah: %d \n",rata);
	
  }
  
  
else if (pilihan == 2){
	//Ini adalah fungi rekursif untuk menghitung faktorial dari angka yang diinput oleh user
int faktorial(angka) {

  if(angka == 0){
    return 1;
  } 
  
  return angka * faktorial(angka-1); 
  }
  printf("Masukkan bilangan: ");
  scanf("%d", &bilangan);
  hasil = faktorial(bilangan);
  printf("Faktorial dari %d adalah %d ", bilangan, hasil);
  return 0;
}

else if (pilihan == 3){
	printf("Masukkan nilai kamu! ");
	scanf("%d", &input_nilai);
	
	if (input_nilai >= 80 && input_nilai <= 100){
		printf("Kamu mendapatkan nilai A!");
	}
	else if (input_nilai >=70 && input_nilai <= 79){
		printf("Kamu mendpatkan nilai B");
	}
	else if (input_nilai >= 60 && input_nilai <=69){
		printf("Kamu mendapatkan nilai C");
	}
	else if (input_nilai >= 50 && input_nilai <=59){
		printf("Kamu mendapatkan nilai D");
	}
	else if (input_nilai >= 0  && input_nilai <=49){
		printf("Kamu mendapatkan nilai E");
	}
	else {
		printf("Input kamu salah, coba untuk menginput nilai 1-100 menggunakan angka!");
	}
	
}
else if (pilihan == 4){
	printf("Masukkan ukuran kotaknya! ");
	scanf("%d", &ukuran_kotak);
	
	for(kolom=1;kolom<=ukuran_kotak;kolom++){
		for(baris=1;baris<=ukuran_kotak;baris++){
			if(baris==ukuran_kotak - kolom +1){
				printf("* ");
			}
			else {
				printf("%d",kolom);
			}
		}
		printf("\n");
	}
}
  return 0;
}
