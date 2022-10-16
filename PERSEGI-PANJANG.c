#include <stdio.h>


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
int main(){
	//Deklarasi Variabel
    int panjang, lebar, pilih;
    char input;
    
    do 
	{
    	 //Menu Pilihan
    printf("\n\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|        Program Menghitung Luas dan Keliling Persegi Panjang      |\n");
    printf("\t\t\t====================================================================\n");
    printf("Mau Ngitung apa nih?\n\n");
    printf ("Menu Pilihan : \n");
    printf("1. Luas\n");
    printf("2. Keliling\n\n");
    printf("Kamu memilih : ");
    scanf("%d", &pilih);
    
    system ("cls");
    
      switch(pilih)
	  {
    	case 1 :
    		//Perhitungan luas Persegi Panjang
    		printf("\nProgram Perhitungan Luas Persegi Panjang\n");
    		printf("Input Panjang : ");
    		scanf("%d", &panjang);
    		printf("Input Lebar : ");
    		scanf("%d", &lebar);
    		printf("Luas Persegi Panjang adalah %d\n", luas (panjang, lebar));
    	break;
    	
    	case 2 :
    		//Perhitungan Keliling Persegi Panjang
    		printf("\nProgram Perhitungan Keliling Persegi Panjang\n");
    		printf("Input Panjang : ");
    		scanf("%d", &panjang);
    		printf("Input Lebar : ");
    		scanf("%d", &lebar);
    		printf("Keliling Persegi Panjang adalah %d\n", keliling (panjang, lebar));
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