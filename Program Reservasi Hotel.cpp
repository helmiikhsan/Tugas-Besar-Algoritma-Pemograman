#include <iostream>

#include <conio.h>

#include <stdio.h>

#include <string.h>



using namespace std;

typedef struct{

int kode;

char nama[20];

int ktp;

char lokasi[20];

}

   brg;

   brg hotel[5];

   brg temp;

   int n,i,b, cari, ada;
   
   int h;


void program()

{

cout<<"\t\t"<<"=================================================================================="<<endl;

cout<<"\t\t"<<"|                   PROGRAM SORTING DAN SEARCHING HOTEL                          |"<<endl;

cout<<"\t\t"<<"=================================================================================="<<endl;

cout<<"\t\t"<<"|                                  KELOMPOK 3                                    |"<<endl;

cout<<"\t\t"<<"|                   - Hero , - Helmi, -Vio, -Calvin                              |"<<endl;

cout<<"\t\t"<<"=================================================================================="<<endl<<endl;


cout<<"\t\t\t\t\t\t"<<"Masukan Jumlah Orang : ";

cin>>n;

 for(i=0;i<n;i++){

     cout<<endl;

      cout<<"\t\t\t\t\t\t"<<"Data ke-"<<(i+1)<<":"<<endl;

      cout<<"\t\t\t\t\t\t"<<"No Kamar : ";cin>>hotel[i].kode;

      cout<<"\t\t\t\t\t\t"<<"Nama : ";cin>>gets(hotel[i].nama);

      cout<<"\t\t\t\t\t\t"<<"No Ktp : ";cin>>hotel[i].ktp;

      cout<<"\t\t\t\t\t\t"<<"Alamat : ";cin>>gets(hotel[i].lokasi);

      cout<<endl;

      }


      cout<<"\t\t\t"<<"==================================================================="<<endl;

          for(i=0;i<n;i++){

             for(b=0;b<n-1;b++){

                if(hotel[b].kode > hotel[b+1].kode){

                   temp.kode=hotel[b].kode;

                     hotel[b].kode=hotel[b+1].kode;

                     hotel[b+1].kode=temp.kode;



                     strcpy(temp.nama,hotel[b].nama);

                     strcpy(hotel[b].nama,hotel[b+1].nama);

                     strcpy(hotel[b+1].nama,temp.nama);



                     temp.ktp=hotel[b].ktp;

                     hotel[b].ktp=hotel[b+1].ktp;

                     hotel[b+1].ktp=temp.ktp;





                     strcpy(temp.lokasi,hotel[b].lokasi);

                     strcpy(hotel[b].lokasi,hotel[b+1].lokasi);

                     strcpy(hotel[b+1].lokasi,temp.lokasi);

                     }

                  }

               }

               cout<<endl;





        cout<<endl;



        cout<<"\t\t\t"<<"Setelah data diurutkan berdasarkan kode terkecil : "<<endl;

        cout<<"\t\t\t"<<"===================================================================="<<endl;

        cout<<"\t\t\t"<<"|   No Kamar   |   Nama     |    No KTP        |       Alamat       |"<<endl;

        cout<<"\t\t\t"<<"===================================================================="<<endl;

         for(b=0;b<n;b++){

        cout<<"\t\t\t"<<"|     "<<hotel[b].kode<<"\t\t"<<hotel[b].nama<<"\t\t"<<hotel[b].ktp<<"\t\t"<<hotel[b].lokasi<<"       |"<<endl;

                     }

        cout<<"\t\t\t"<<"===================================================================="<<endl;





        cout<<endl;

        cout<<"\t\t\t"<<"Masukan No Kamar Untuk Mencari : ";

        cin>>cari;

        ada = 0;

        for(b=0;b<n;b++)

            {

            if(hotel[b].kode==cari)

                {

                    ada=1;
					


                    cout<<"\t\t\t"<<"===================================================================="<<endl;

                    cout<<"\t\t\t"<<"|   No Kamar   |   Nama    |      No KTP     |          Alamat     | "<<endl;

                    cout<<"\t\t\t"<<"===================================================================="<<endl;

                    cout<<"\t\t\t"<<"|         "<<hotel[b].kode<<"\t\t        "<<hotel[b].nama<<"\t\t       "<<hotel[b].ktp<<"  "<<hotel[b].lokasi<<"\t\t       |"<<endl;

                }

            }

                    cout<<"\t\t\t"<<"===================================================================="<<endl;
                

        if (ada == 0)

            {

                cout<<"Data Tidak ditemukan"<<endl;

            }
        
       getch();



                     }



void utama(){
	int z;
	menu :
	cout<<"\t\t"<<"============================================================================="<<endl;
	cout<<"\t\t"<<"|                        SELAMAT DATANG DI HOTEL KENCANA PUTRA               |"<<endl;
	cout<<"\t\t"<<"============================================================================="<<endl;
	cout<<"\t\t"<<"1. Pemesanan ";
	cout<<"\t\t"<<"2. Cek Kamar ";
	cout<<"\t\t"<<"Masukan Pilihan anda : ";cin>>z;
	
	switch(z){
		case 1 : goto pemesan; break;
		case 2 : goto cekkamar; break;
		default : cout<<"Pilihan Tidak ada "; goto menu;
	}
	
	pemesan : 
	system("cls");
	program();
	cout<<endl; 
	
	cekkamar : 
	system("cls");
	int d;
	cout<<"\t\t\t\t\t\t"<<" Selamat datang pada Menu Cek Kamar!!"<<endl;
	cout<<"\t\t\t\t\t\t"<<"------------------------------------"<<endl;
	cout<<"\t\t\t\t\t\t"<<" Berikut ini merupakan pilihan kamar yang terdapat pada Hotel Kami!"<<endl;
	cout<<"\t\t\t\t\t\t"<<" 1- Standart "<<endl;
	cout<<"\t\t\t\t\t\t"<<" 2- Superior "<<endl;
	cout<<"\t\t\t\t\t\t"<<" 3- Luxury 	"<<endl;
	cout<<"\t\t\t\t\t\t"<<" 4- Suite 	"<<endl;
	cout<<"\t\t\t\t\t\t"<<" 5- KEMBALI	"<<endl;
	cout<<"\t\t\t\t\t\t"<<"------------------------------------"<<endl;
	cout<<"\t\t\t\t\t\t"<<" Silahkan masukkan kamar mana yang anda ingin cek : "; cin >>d; system("cls");
	switch (d){
	case 1 :	
		cout<<endl;
		cout<<"\t\t\t\t\t\t"<<" Fasilitas Pada Kamar Standart Adalah  : "<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| 1 Buah kasur Ukuran Standart       |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| TV LCD                             |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| Kipas Angin                        |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| 2 Porsi Menu Sarapan               |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| No. Kamar : 1 - 10                 |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\t"<<"Apakah Anda Ingin Memesan Kamar Tipe Ini?"<<endl;
		cout<<"\t\t\t\t\t\t"<<"1- Iya"<<endl;
		cout<<"\t\t\t\t\t\t"<<"2- Tidak"<<endl;
		cout<<"\t\t\t\t\t\t"<<"Masukkan Pilihan Anda : "; cin>>h;
		if (h==1){
			goto pemesan;
		}
		else if(h==2){
			goto cekkamar;
		}
		else {
			cout<<"Pilihan Anda Tidak Ada!"<<endl;
			goto menu;
		}
		cout<<"\t\t\t\t\t\t"<<endl; ;break;
	
	case 2 :
		cout<<endl;
		cout<<"\t\t\t\t\t\t"<<" Fasilitas Pada Kamar superior Adalah  : "<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| 1 Buah kasur Ukuran Besar          |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| atau 2 buah Kasur Ukuran Kecil     |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| AC 1/2 PK                          |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| TV LCD                             |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| Free WIFI                          |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| 2 Porsi Menu Sarapan               |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| No. Kamar : 11 - 20                |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\t"<<"Apakah Anda Ingin Memesan Kamar Tipe Ini?"<<endl;
		cout<<"\t\t\t\t\t\t"<<"1- Iya"<<endl;
		cout<<"\t\t\t\t\t\t"<<"2- Tidak"<<endl;
		cout<<"\t\t\t\t\t\t"<<"Masukkan Pilihan Anda : "; cin>>h;
		if (h==1){
			goto pemesan;
		}
		else if(h==2){
			goto cekkamar;
		}
		else {
			cout<<"Pilihan Anda Tidak Ada!"<<endl;
			goto menu;
		}
		cout<<endl;
		cout<<endl;break;
	
	case 3 :	
		cout<<endl;
		cout<<"\t\t\t\t\t\t"<<" Fasilitas Pada Kamar luxury Adalah  : "<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| 1 Buah kasur Ukuran Besar          |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| atau 2 buah Kasur Ukuran Kecil     |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| AC 1/2 PK                          |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| TV LCD                             |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| Free WIFI                          |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| Akses ke Kolam Renang & Rooftop    |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| 2 Porsi Menu Sarapan               |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| No. Kamar : 21 - 30                |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\t"<<"Apakah Anda Ingin Memesan Kamar Tipe Ini?"<<endl;
		cout<<"\t\t\t\t\t\t"<<"1- Iya"<<endl;
		cout<<"\t\t\t\t\t\t"<<"2- Tidak"<<endl;
		cout<<"\t\t\t\t\t\t"<<"Masukkan Pilihan Anda : "; cin>>h;
		if (h==1){
			goto pemesan;
		}
		else if(h==2){
			goto cekkamar;
		}
		else {
			cout<<"Pilihan Anda Tidak Ada!"<<endl;
			goto menu;
		}
		cout<<endl;
		cout<<endl;break;
	
	case 4 :
		cout<<endl;	
		cout<<"\t\t\t\t\t\t"<<" Fasilitas Pada Kamar suite Adalah  : "<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| 1 Buah kasur Ukuran Besar          |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| atau 2 buah Kasur Ukuran Kecil     |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| AC 1/2 PK                          |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| TV LCD                             |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| Brankas dan Kulkas                 |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| Free Snack                         |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| Free WIFI                          |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| Akses ke Kolam Renang & Rooftop    |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| 2 Porsi Menu Sarapan               |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t"<<"| No. Kamar : 31 - 40                |"<<endl;
		cout<<"\t\t\t\t\t\t"<<"--------------------------------------"<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\t"<<"Apakah Anda Ingin Memesan Kamar Tipe Ini?"<<endl;
		cout<<"\t\t\t\t\t\t"<<"1- Iya"<<endl;
		cout<<"\t\t\t\t\t\t"<<"2- Tidak"<<endl;
		cout<<"\t\t\t\t\t\t"<<"Masukkan Pilihan Anda : "; cin>>h;
		if (h==1){
			goto pemesan;
		}
		else if(h==2){
			goto cekkamar;
		}
		else {
			cout<<"Pilihan Anda Tidak Ada!"<<endl;
			goto menu;
		}
		cout<<endl;break;
	
	case 5 : goto menu; break;
	
	default:	cout<<" Pilihan Anda Salah!";
		goto cekkamar;
	}
	cout<<endl;
	
	cout<<endl;             
}

    
	int main(){
		utama();
	}                 
