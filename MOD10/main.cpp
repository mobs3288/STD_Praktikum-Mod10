#include "mll.h"

int main()
{
    mll Penjual;
    mll Barang;
    adr_sales dataSales;
    adr_jual dataJual;

    sales data;

    string nama, gol;

    int jumlahJual;

    Create_list(Penjual);
    Create_list(Barang);

    //////////////////////////////////////////////////////////

    data = newDataSales("Siska", "Gol A");
    dataSales = createElemenSales(data, dataSales);
    insertLast_Sales(Penjual, dataSales);

    jumlahJual = 5;
    new_elm_jual(jumlahJual, dataJual);
    Insert_new_penjualan(Penjual, dataSales, dataJual);

    jumlahJual = 3;
    new_elm_jual(jumlahJual, dataJual);
    Insert_new_penjualan(Penjual, dataSales, dataJual);

    jumlahJual = 4;
    new_elm_jual(jumlahJual, dataJual);
    Insert_new_penjualan(Penjual, dataSales, dataJual);

    jumlahJual = 2;
    new_elm_jual(jumlahJual, dataJual);
    Insert_new_penjualan(Penjual, dataSales, dataJual);

    //////////////////////////////////////////////////////////

    data = newDataSales("Affan", "Gol C");
    dataSales = createElemenSales(data, dataSales);
    insertLast_Sales(Penjual, dataSales);

    jumlahJual = 4;
    new_elm_jual(jumlahJual, dataJual);
    Insert_new_penjualan(Penjual, dataSales, dataJual);

    jumlahJual = 3;
    new_elm_jual(jumlahJual, dataJual);
    Insert_new_penjualan(Penjual, dataSales, dataJual);

    //////////////////////////////////////////////////////////

    data = newDataSales("Cahya", "Gol A");
    dataSales = createElemenSales(data, dataSales);
    insertLast_Sales(Penjual, dataSales);

    jumlahJual = 5;
    new_elm_jual(jumlahJual, dataJual);
    Insert_new_penjualan(Penjual, dataSales, dataJual);

    jumlahJual = 0;
    new_elm_jual(jumlahJual, dataJual);
    Insert_new_penjualan(Penjual, dataSales, dataJual);

    jumlahJual = 2;
    new_elm_jual(jumlahJual, dataJual);
    Insert_new_penjualan(Penjual, dataSales, dataJual);

    //////////////////////////////////////////////////////////

    data = newDataSales("Lia", "Gol C");
    dataSales = createElemenSales(data, dataSales);
    insertLast_Sales(Penjual, dataSales);

    //////////////////////////////////////////////////////////

    data = newDataSales("Hafidz", "Gol B");
    dataSales = createElemenSales(data, dataSales);
    insertLast_Sales(Penjual, dataSales);

    jumlahJual = 7;
    new_elm_jual(jumlahJual, dataJual);
    Insert_new_penjualan(Penjual, dataSales, dataJual);

    //////////////////////////////////////////////////////////

    delete_penjual(Penjual);

    Show_data_sales(Penjual);

    return 0;
}
