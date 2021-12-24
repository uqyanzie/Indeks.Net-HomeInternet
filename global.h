#ifndef global_H
#define global_H

typedef struct{
	char ;
	int harga;
}layanan;

typedef struct{
	char ID[8];
	char password[15];
	produk layanan; 
	int bill;
}Dt_costumer;

Dt_costumer pelanggan[];
layanan produk[];
layanan paket[];

void regist();
void upgrade();
int cektagihan();
void stoplangganan();
void myAdmin();
void keluar();
