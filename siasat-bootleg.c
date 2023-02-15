#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CLASSES 10

struct Class {
    char code[10];
    char lectureName[50];
    char subjectName[50];
};

struct Class classes[MAX_CLASSES];
    int taken[MAX_CLASSES] = {0};
    int choice, takenClasses = 0;

void loginPage(){
	char username[20];
    char password[20];

    char correctUsername[20] = "admin";
    char correctPassword[20] = "password";

    int attempts = 3;

    while (attempts > 0) {
        printf("Username: ");
        scanf("%s", username);

        printf("Password: ");
        int i = 0;
        while (i < 20) {
            password[i] = getch();
            if (password[i] == '\r') {
                password[i] = '\0';
                break;
            }
            else if (password[i] == '\b') {
                if (i > 0) {
                    printf("\b \b");
                    i--;
                }
            }
            else {
                printf("*");
                i++;
            }
        }

        if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
            printf("\nLogin successful!\n");
            break;
        }
        else {
            printf("\nIncorrect username or password, %d attempts left\n", --attempts);
        }
    }

    if (attempts == 0) {
        printf("Too many attempts, login failed\n");
    }
}

void daftarMatkul(){
	struct Class classes[10];
	int i;
    // Initialize the classes array
    strcpy(classes[0].code, "TC111A");
    strcpy(classes[0].lectureName, "PTI");
    strcpy(classes[0].subjectName, "Agung Wibowo");

    strcpy(classes[1].code, "TC113D");
    strcpy(classes[1].lectureName, "MATDIS");
    strcpy(classes[1].subjectName, "Yessica Nataliani");

    strcpy(classes[2].code, "TC112I");
    strcpy(classes[2].lectureName, "DDP");
    strcpy(classes[2].subjectName, "Evangs Mailoa");
    
    strcpy(classes[3].code, "TC121");
    strcpy(classes[3].lectureName, "TBA");
    strcpy(classes[3].subjectName, "Ineke A Pakereng");
    
    strcpy(classes[4].code, "TC122C");
    strcpy(classes[4].lectureName, "ASD");
    strcpy(classes[4].subjectName, "Ramos Somya");
    
    strcpy(classes[5].code, "TC211D");
    strcpy(classes[5].lectureName, "ALM");
    strcpy(classes[5].subjectName, "Eryka Pandu Ekalia");
    
    strcpy(classes[6].code, "TC212F");
    strcpy(classes[6].lectureName, "PBO");
    strcpy(classes[6].subjectName, "Yeremia Alfa Susetyo");
    
    strcpy(classes[7].code, "TC214G");
    strcpy(classes[7].lectureName, "SBD");
    strcpy(classes[7].subjectName, "Hindriyanto D. Purnomo");
    
    strcpy(classes[8].code, "TC222A");
    strcpy(classes[8].lectureName, "Etprof");
    strcpy(classes[8].subjectName, "Rolland T. Pallar");
    
    strcpy(classes[9].code, "TC223E");
    strcpy(classes[9].lectureName, "PemrogWeb");
    strcpy(classes[9].subjectName, "Christine Dewi");
	
	printf("KODE KELAS\t\tMATAKULIAH\t\tDOSEN\n");
    for ( i = 0; i < 10; i++) {
        printf("%s\t\t%s\t\t%s\n", classes[i].code, classes[i].lectureName, classes[i].subjectName);
    }
	
}

void registrasiMatkul (){
    
	int i;
    // Initialize the classes array
    strcpy(classes[0].code, "TC111A");
    strcpy(classes[0].lectureName, "PTI");
    strcpy(classes[0].subjectName, "Agung Wibowo");

    strcpy(classes[1].code, "TC113D");
    strcpy(classes[1].lectureName, "MATDIS");
    strcpy(classes[1].subjectName, "Yessica Nataliani");

    strcpy(classes[2].code, "TC112I");
    strcpy(classes[2].lectureName, "DDP");
    strcpy(classes[2].subjectName, "Evangs Mailoa");
    
    strcpy(classes[3].code, "TC121");
    strcpy(classes[3].lectureName, "TBA");
    strcpy(classes[3].subjectName, "Ineke A Pakereng");
    
    strcpy(classes[4].code, "TC122C");
    strcpy(classes[4].lectureName, "ASD");
    strcpy(classes[4].subjectName, "Ramos Somya");
    
    strcpy(classes[5].code, "TC211D");
    strcpy(classes[5].lectureName, "ALM");
    strcpy(classes[5].subjectName, "Eryka Pandu Ekalia");
    
    strcpy(classes[6].code, "TC212F");
    strcpy(classes[6].lectureName, "PBO");
    strcpy(classes[6].subjectName, "Yeremia Alfa Susetyo");
    
    strcpy(classes[7].code, "TC214G");
    strcpy(classes[7].lectureName, "SBD");
    strcpy(classes[7].subjectName, "Hindriyanto D. Purnomo");
    
    strcpy(classes[8].code, "TC222A");
    strcpy(classes[8].lectureName, "Etprof");
    strcpy(classes[8].subjectName, "Rolland T. Pallar");
    
    strcpy(classes[9].code, "TC223E");
    strcpy(classes[9].lectureName, "PemrogWeb");
    strcpy(classes[9].subjectName, "Christine Dewi");

    // Display the classes array
    printf("DAFTAR KELAS\n");
    for (i = 0; i < MAX_CLASSES; i++) {
        printf("%d. %s - %s - %s\n", i + 1, classes[i].code, classes[i].lectureName, classes[i].subjectName);
    }

    while (takenClasses < MAX_CLASSES/2) {
        printf("Pilih Mata Kuliah (1-%d): ", MAX_CLASSES);
        scanf("%d", &choice);

        if (choice < 1 || choice > MAX_CLASSES) {
            printf("Invalid choice! Please enter a number between 1 and %d.\n", MAX_CLASSES);
        }
        else if (taken[choice - 1] == 1) {
            printf("Maaf, tidak bisa mengambil kelas lebih dari satu kali.\n", classes[choice - 1].code);
        }
        else {
            taken[choice - 1] = 1;
            takenClasses++;
            printf("KAMU TELAH MENGAMBIL MATAKULIAH %s.!\n", classes[choice - 1].code);
        }
    }
    
    system("cls");
    printf("\nChosen classes:\n");
    for (i = 0; i < MAX_CLASSES; i++) {
        if (taken[i] == 1) {
            printf("%s - %s - %s\n", classes[i].code, classes[i].lectureName, classes[i].subjectName);
        }
    }
}

int main() {
	int i;
    loginPage();
    system("cls");
    int balikMenu = 1;
    int pilihanMenu;
    
    while (balikMenu = 1){
    	printf("===== SISTEM AKADEMIK TEKNIK INFORMATIKA ===== \n\n");
    	printf("1. DAFTAR MATAKULIAH \n");
    	printf("2. REGISTRASI MATAKULIAH \n");
    	printf("3. CETAK KST \n");
    	printf("4. KELUAR \n\n");
    	
    	printf("Pilihan anda : \t");
    	scanf("%d", &pilihanMenu);
    	system("cls");
    	
    	switch (pilihanMenu){
    		case 1:
    			daftarMatkul();
    			
    			printf("\n\nKetik 1 Untuk Kembali ke Menu \t");
    			scanf("%d", &balikMenu);
    			system("cls");
    			break;
    		case 2:
    			registrasiMatkul();
    			
    			printf("\n\nKetik 1 Untuk Kembali ke Menu \t");
    			scanf("%d", &balikMenu);
    			system("cls");
    			break;
    		case 3:
    			printf("NAMA :\t WILLY \n");
    			printf("NIM  :\t 672022000");
    			printf("\nMATAKULLIAH YANG DIPILIH:\n");
    			for (i = 0; i < MAX_CLASSES; i++) {
        		if (taken[i] == 1) {
           		 printf("%s - %s - %s\n", classes[i].code, classes[i].lectureName, classes[i].subjectName);
       			 }
 			   }
    			printf("\n\nKetik 1 Untuk Kembali ke Menu \t");
    			scanf("%d", &balikMenu);
    			system("cls");
    			break;
    		case 4:
    			printf("THANK YOU\n\n");
    			printf("WILLY - 672022000");
    			exit(EXIT_SUCCESS);
    			break;
		}
	}
}

