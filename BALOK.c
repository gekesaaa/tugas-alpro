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

//Fungsi Utama
int main(){
	//Deklarasi Variabel
    int panjang, lebar, tinggi, pilih;
    char input;
    
    do 
	{
    	 //Menu Pilihan
    printf("\n\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|         Program Menghitung Luas Permukaan dan Volume Balok       |\n");
    printf("\t\t\t====================================================================\n");
    printf("Mau Ngitung apa nih?\n\n");
    printf ("Menu Pilihan : \n");
    printf("1. Luas Permukaan\n");
    printf("2. Volume\n\n");
    printf("Kamu memilih : ");
    scanf("%d", &pilih);
    
    system ("cls");
    
      switch(pilih)
	  {
    	case 1 :
    		//Perhitungan luas Permukaan Balok
    		printf("\nProgram Perhitungan Luas Permukaan Balok\n");
    		printf("Input Panjang : ");
    		scanf("%d", &panjang);
    		printf("Input Lebar : ");
    		scanf("%d", &lebar);
    		printf("Masukkan Tinggi : ");
    		scanf("%d", &tinggi);
    		printf("Luas Permukaan Balok adalah %d\n", luaspermukaan (panjang, lebar, tinggi));
    	break;
    	
    	case 2 :
    		//perhitungan Volume Balok
    		printf("\nProgram Perhitungan Volume Balok\n");
    		printf("Input Panjang : ");
    		scanf("%d", &panjang);
    		printf("Input Lebar : ");
    		scanf("%d", &lebar);
    		printf("Masukkan Tinggi : ");
    		scanf("%d", &tinggi);
    		printf("Volume Balok adalah %d\n", volume (panjang, lebar, tinggi));
    	break;
    	
    	default :
    		printf("Input yang anda masukkan salah\n");		
    
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