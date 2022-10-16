#include <stdio.h>

//Fungsi Perhitungan Volume
int volume (int panjang, int lebar, int tinggi){
    int volume ;
    return panjang *lebar *tinggi;
}

//Fungsi Perhitungan Luas Permukaan
int luaspermukaan (int panjang,int lebar, int tinggi){
    int luaspermukaan;
    return 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi));
}

//Fungsi Perhitungan Keliling
int keliling (int panjang, int lebar){
    int keliling;
    return (2 * panjang) + (2 * lebar);
}

//Fungsi Perhitungan Luas
int luas (int panjang, int lebar){
    int luas;
    return panjang * lebar;
}

//Fungsi Utama
int main (){
	//Deklarasi Variabel
	int panjang, lebar, tinggi, pilih1, pilih2;
    char input;
    
    do 
    {
    	//Menu Pilihan
    	printf("\n\n");
    printf("\t\t\t==========================================================\n");
    printf("\t\t\t|        Program Menghitung Persegi Panjang dan Balok    |\n");
    printf("\t\t\t==========================================================\n");
    printf("Mau Pilih yang mana?\n\n");
    printf ("Menu Pilihan : \n");
    printf("1. Persegi Panjang\n");
    printf("2. Balok\n\n");
    printf("Kamu memilih : ");
    scanf("%d", &pilih1);
    
    system ("cls");
    
    switch (pilih1){
    	case 1 : 
		    printf("\n\n");
		    printf("\t\t\t===================================\n");
		    printf("\t\t\t|        Menu Persegi Panjang     |\n");
		    printf("\t\t\t===================================\n");
		    printf("Mau Ngitung apa nih?\n\n");
		    printf ("Menu Pilihan : \n");
		    printf("1. Luas\n");
		    printf("2. Keliling\n\n");
		    printf("Kamu memilih : ");
		    scanf("%d", &pilih2);
    
    system ("cls");
		    	if (pilih2 == 1) {
		    		printf("\nProgram Perhitungan Luas Persegi Panjang\n");
		    		printf("Input Panjang : ");
		    		scanf("%d", &panjang);
		    		printf("Input Lebar : ");
		    		scanf("%d", &lebar);
		    		printf("Luas Persegi Panjang adalah %d\n", luas (panjang, lebar));
				}
				else if (pilih2 == 2){
					printf("\nProgram Perhitungan Keliling Persegi Panjang\n");
		    		printf("Input Panjang : ");
		    		scanf("%d", &panjang);
		    		printf("Input Lebar : ");
		    		scanf("%d", &lebar);
		    		printf("Keliling Persegi Panjang adalah %d\n", keliling (panjang, lebar));
				}
				break; 
			
		case 2 :
			printf("\n\n");
			printf("\t\t\t===========================\n");
			printf("\t\t\t|        Menu Balok       |\n");
			printf("\t\t\t===========================\n");
			printf("Mau Ngitung apa nih?\n\n");
			printf ("Menu Pilihan : \n");
			printf("1. Luas Permukaan\n");
			printf("2. Volume\n\n");
			printf("Kamu memilih : ");
			scanf("%d", &pilih2);
			 
    system ("cls");
    				if  (pilih2 == 1){
    					printf("\nProgram Perhitungan Luas Permukaan Balok\n");
			    		printf("Input Panjang : ");
			    		scanf("%d", &panjang);
		    		    printf("Input Lebar : ");
		    		    scanf("%d", &lebar);
		    		    printf("Masukkan Tinggi : ");
		    		    scanf("%d", &tinggi);
		    		    printf("Luas Permukaan Balok adalah %d\n", luaspermukaan (panjang, lebar, tinggi));
 					}
 					else if (pilih2 == 2){
 						printf("\nProgram Perhitungan Volume Balok\n");
    					printf("Input Panjang : ");
    					scanf("%d", &panjang);
    					printf("Input Lebar : ");
    					scanf("%d", &lebar);
    					printf("Masukkan Tinggi : ");
    					scanf("%d", &tinggi);
    					printf("Volume Balok adalah %d\n", volume (panjang, lebar, tinggi));
					 }
					break; 
					
					default :
						printf("Input yang anda pilih tidak ada\n");
						
			}
		printf ("MAU HITUNG LAGI GA? (y/t)"); fflush (stdin);
		scanf ("%s", &input);
		
	system ("cls");
	}
		while(input!= 't');
    	system ("cls");
    	printf("TERIMAKASIH SUDAH MENGGUNAKAN PROGRAM INI");
		return 0;
}