#include <stdio.h>
#include <conio.h>



int main() {
	int i, j,k, input, tinggi;

	
	printf("===== FIBONACCI PATTERN FOR LOOP ====== \n");
	printf("Luki Tri Setiawan \n");
	printf("672022060 \n");
	
	printf("Masukkan angka 1-10:"); 
	scanf("%d", &input);
	printf("Masukkan angka tinggi dari 1-10:"); 
	scanf("%d", &tinggi);
	
	if (input < 10){
		//Persegi
	printf("1. Persegi \n");
	for (i=1;i<=input;i++) {
		for(j=1;j<=input;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	//Segitiga 1
	printf("2. Segitiga 1 \n");
	for(i=1;i<input;i++){
		for(j=input;j>i;j--){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	//Segitiga 2
	printf("3. Segitiga 2 \n");
	for(i=1;i<=input;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	//Segitiga 3
	printf("4. Segitiga 3 \n");
	for(i=1;i<=tinggi;i++){
		for(k=tinggi-1;k>=i;k--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
	
	//Segitiga 2
	printf("5. Segitiga 4 \n");
	for(i=input;i>=1;i--){
		for(j=input-1;j>=i;j--){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	printf("6. Segitiga 5 \n");
	for(i=1;i<=input;i++){
		for(j=input-1;j>=i;j--){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
	}
	else {
		printf("Maaf, kamu menulis angka yang lebih dari 10");
	}
	
	return 0;
}
