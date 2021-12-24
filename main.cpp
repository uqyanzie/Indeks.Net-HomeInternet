#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "global.h"
using namespace std;

int main()
{
	int menu;
	
	cout<<" ============================================================================================= "<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"       IIIIIII   NNN        NNN  DDDDD        EEEEEEEEEE    KKK    KK   SSSSSSSSSSS" <<endl;
	cout<<"         III     NNNN       NNN	 DDDDDD       EEEEEEEEEE    KKK   KK    SSS"        <<endl;
	cout<<"         III     NNNNNN     NNN	 DDD  DD      EEE           KKK  KK      SSS"       <<endl;
	cout<<"         III     NNNNNNN    NNN	 DDD   DD     EEE           KKK KK        SSS"      <<endl;
	cout<<"         III     NNN  NNN   NNN	 DDD	DD    EEEEEE        KKKKK          SSS"     <<endl;
	cout<<"         III     NNN   NNN  NNN	 DDD 	 DD   EEEEEE        KKK KK          SSSSSSS"<<endl;
	cout<<"         III     NNN    NNNNNNN	 DDD 	DD    EEE           KKK  KK             SSS"<<endl;
	cout<<"         III     NNN      NNNNN	 DDD   DD     EEE           KKK   KK           SSS" <<endl;
	cout<<"         III     NNN       NNNN	 DDD  DD      EEEEEEEEEE    KKK    KK	      SSS"  <<endl;
	cout<<"       IIIIIII   NNN        NNN	 DDDDDD       EEEEEEEEEE    KKK     KK	 SSSSSSS"   <<endl;
	cout<<endl;
	cout<<endl;
	cout<<" ============================================================================================== "<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"    SELAMAT DATANG DI LAYANAN INDEKS.NET"<<endl;
	cout<<endl;
	cout<<"    1. Daftar Berlangganan"<<endl;
	cout<<"    2. Upgrade Layanan"<<endl;
	cout<<"    3. Cek Tagihan "<<endl;
	cout<<"    4. Berhenti Langganan"<<endl;
	cout<<"    5. Akses Sebagai Admin"<<endl;
	cout<<"    6. Keluar"<<endl;
	
	
	cout<<"		Silahkan pilih Menu (1/2/3/4/5) : ";
	cin>>menu;
	
	switch(menu) {
			case : 1{
			regist();
			break;
		}
		case : 2{
			upgrade();
			break;
		}
		case : 3{
			cektagihan();
			break;
		}
		case : 4{
			stoplangganan();
			break;
		}
		case :5{
			myAdmin();
			break;
		}
	}
	

}
