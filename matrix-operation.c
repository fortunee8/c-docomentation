#include <stdio.h>

//Mendefinisikan bahwa program ini menjalankan matrix 2 dimensi 2x2
#define N 2
#define M 2

//Fungsi input matrix
void input_matrix(int mat[][M], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void tampilMatriks(int mat[][M], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void penjumlahanMatriks(int mat1[][M], int mat2[][M], int res[][M], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void perkalianMatriks(int mat1[][M], int mat2[][M], int res[][M], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            res[i][j] = mat1[i][j] * mat2[i][j];
        }
    }
}

void transposeMatriks(int mat[][M], int transposed[][N]) {
	int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            transposed[j][i] = mat[i][j];
        }
    }
}

int main() {
    int mat1[N][M], mat2[N][M], res[N][M], transposed[M][N];
	int angkaMenu, i, j;
	
    printf("Masukkan elemen dari matriks a:\n");
    input_matrix(mat1, N, M);

    printf("Masukkan elemen dari matrix b:\n");
    input_matrix(mat2, N, M);
	system("cls");
	
	printf("Pilih apa yang ingin kalian lakukan \n");
	printf("1. Tampilkan Matirks \n");
	printf("2. Penjumlahan Matriks \n");
	printf("3. Perkalian Matriks \n");
	printf("4. Transpose Matriks a \n");
	printf("5. Transpose Matriks b \n");
	printf("6. Keluar \n\n");
	printf("Masukkan Pilihan \t\t");
	scanf("%d", &angkaMenu);
	system("cls");
	
	switch(angkaMenu){
		case 1:
			printf("Matriks A \n");
			tampilMatriks(mat1, N, M);
			printf("Matriks B \n");
			tampilMatriks(mat2, N, M);
			break;
		case 2: 
			penjumlahanMatriks(mat1, mat2, res, N, M);
			printf("Hasil penjumlahan antara matriks a dan b adalah \n");
			tampilMatriks(res, N, M);
			break;
		case 3:
			perkalianMatriks(mat1, mat2, res, N, M);
			printf("Hasil perkalian antara matriks a dan b adalah \n");
			tampilMatriks(res, N, M);
			break;
		case 4:
			transposeMatriks(mat1, transposed);
			printf("\n\nHasil transpose matriks a adalah \n");
			tampilMatriks(transposed, N, M);
        break;
		case 5:
			transposeMatriks(mat2, transposed);
			printf("Hasil transpose matriks b adalah \n");
			tampilMatriks(transposed, N, M);
			break;
		case 6:
			printf("GOOD BYE - THANK YOU");
			system("exit");
			break;
		default:
			system("cls");
	}
	
    return 0;
}


