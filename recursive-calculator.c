#include <stdio.h>

int main(){
printf("========== KALKULATOR REKURSIF ==========\n");

int pilihan; //Variabel untuk input user
int bilangan, hasil, angka; //Variabel untuk faktorial
//Variabel untuk program pemangkatan dan akar pangkat
int x, y, pangkat,nomor; 
int angka_pangkat = 0;

//Ini kode untuk pilihan yang akan dipilih oleh user
printf("Pilihlah di antara 3 menu di bawah ini: \n");
printf("1. FAKTORIAL \n");
printf("2. PANGKAT\n");
printf("3. AKAR PANGKAT\n");

scanf("%d", &pilihan);

//Jika user menginput angka 1, maka program penghitungan faktorial akan dijalankan
if (pilihan == 1){
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

else if (pilihan == 2){
	//Fungsi rekursif untuk menghitung angka yang dipangkatkan, kode ini tidak tampil pada GUI
	int pangkat(x,y)
	{
		if(y==0){
			return 1;
		}
		else {
			return x * pangkat(x,y-1);
		}
	}
	//Ini adalah program yang tampil pada GUI
	printf("Masukkan angka yang akan kamu pangkatkan: ");
	scanf("%d", &x); //User menginput angka yang akan dipangkatkan 
	printf("Mau dipangkatkan berapa angkanya? ");
	scanf("%d", &y); //User menginput besar pangka dari angka yang sudah diinput ke variabel x
	printf("Hasil bilangan %d pangkat %d adalah %d\n", x, y, pangkat(x,y)); //Program menunjukkan hasil rekursif yang sudah diprogram dari atas
	return 0; 
}

//Jika useer menginput angka 3, maka program menghitung akar kuadrat dijalankan
else if (pilihan == 3){
	int pangkat(angka_pangkat){
		//Fungsi rekursif untuk menghitung akar pangkat
		if(angka_pangkat==1){
			return 1;
		}
		else{
			angka_pangkat-pangkat(angka_pangkat/2);
			nomor++;
		}
	}
			
printf("Masukkan angka :");
scanf("%d", &x); //User menginput angka untuk dihitung akar kuadratnya
printf("Hasil akar pangkat dari %d adalah %d", x, nomor);
return 0;	
}

//Jika user menginput angka yang tidak sesuai dengan pilihan menu, maka dianggap salah input
else {
	printf("Maaf, kamu salah input!!");
}

return 0;	
}
