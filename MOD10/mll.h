#ifndef MLL_H_INCLUDED
#define MLL_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define nextJual(P) (P)->nextJual
#define First(L) ((L).First)
#define nil NULL

typedef struct elm_jual *adr_jual;

struct elm_jual {
    int info;
    adr_jual next;
};

struct sales {
    string nama;
    string gol;
};

typedef struct elm_sales *adr_sales;

struct elm_sales {
    sales info;
    adr_sales next;
    adr_jual nextJual;
};

struct mll{
    adr_sales First;
};

void Create_list(mll &List_Sales);
sales newDataSales(string nama, string gol);
adr_sales createElemenSales(sales dataBaru, adr_sales P);
void new_elm_jual(int info, adr_jual &J);
void Insert_new_penjualan(mll &List_Sales, adr_sales S, adr_jual J);
void insertLast_Sales(mll &List_Sales, adr_sales S);
void deleteFirst_Penjualan(mll &List_Sales, adr_sales S,adr_jual J);
void deleteLast_Penjualan(mll &List_Sales, adr_sales S,adr_jual J);
void deleteAfter_Penjualan(mll &List_Sales, adr_sales S,adr_jual prec, adr_jual J);
void Show_data_sales(mll List_Sales);
void delete_penjual(mll &List_Sales);
adr_sales Search_Sales(mll List_Sales, string nama_sales);

#endif // MLL_H_INCLUDED
