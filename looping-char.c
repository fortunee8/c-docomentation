#include <stdio.h>

int main()
{
	int baris, kolom, spasi;
	
		for(baris=1;baris<=40;baris++)
		printf("=");
		printf("\n");
		
	//Angka 3 terakhir 6 di barisan yang pertama
	for(baris=1; baris<=5; baris++){
		//Angka 0
		for(kolom=1; kolom<=5; kolom++){
			if(kolom==1 || kolom==5 || baris==1 || baris==5)
				printf("*");
			else
				printf(" ");
		}
		
		//Spasi
		for(spasi=1; spasi<=3; spasi++)
		printf(" ");
		
		//Angka 6
		for(kolom=1; kolom<=5; kolom++){
			if(kolom==1 || baris==1 || baris==5 || baris==3 || (kolom==5 && baris>3))
				printf("*");
			else
				printf(" ");
		}
		//Spasi
		for(spasi=1; spasi<=3; spasi++)
		printf(" ");
		
		//Angka 0
		for(kolom=1; kolom<=5; kolom++){
			if(kolom==1 || kolom==5 || baris==1 || baris==5)
				printf("*");
			else
				printf(" ");
		}
	printf("\n");			
	}
	//Nama Panggilan di baris keduda
	for(baris=1;baris<=40;baris++)
		printf("=");
	printf("\n");
	for(baris=1; baris<=5; baris++){
		//Huruf L
		for(kolom=1; kolom<=5; kolom++){
			if(kolom==1 || baris==5)
				printf("*");
			else
				printf(" ");
		}
		
		//Spasi
		for(spasi=1; spasi<=3; spasi++)
		printf(" ");
		
		//Huruf U
		for(kolom=1; kolom<=5; kolom++){
			if(kolom==1 || baris==5 || kolom==5)
				printf("*");
			else
				printf(" ");
		}
		
		//Spasi
		for(spasi=1; spasi<=3; spasi++)
		printf(" ");
		
		//Huruf C
		for(kolom=1; kolom<=5; kolom++){
			if(baris==1 || baris==5 || kolom==1)
				printf("*");
			else
				printf(" ");
		}
		
		//Spasi
		for(spasi=1; spasi<=3; spasi++)
		printf(" ");
		
		//Huruf K
		for(kolom=1; kolom<=5; kolom++){
			if((kolom==1) || (kolom==5 && baris==1) || (kolom==3 && baris==2) || (kolom==3 && baris==4) || (kolom==5 && baris==5))
				printf("*");
			else
				printf(" ");
		}
		//Spasi
		for(spasi=1; spasi<=3; spasi++)
		printf(" ");
		
		//Huruf Y
		for(kolom=1; kolom<=5; kolom++){
			if((kolom==1 && baris==1)||(kolom==5 && baris==1)||(kolom==2 && baris==2)||(kolom==4 && baris==2)||(kolom==3 && baris>=3))
				printf("*");
			else
				printf(" ");
		}
	printf("\n");			
	}
		for(baris=1;baris<=40;baris++)
		printf("=");
		printf("\n");
		
	return 0;
}

