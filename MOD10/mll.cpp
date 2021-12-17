#include "mll.h"

void Create_list(mll &List_Sales){
    First(List_Sales) = nil;
}

sales newDataSales(string nama, string gol) {
    sales data;

    data.nama = nama;
    data.gol = gol;

    return data;
}

adr_sales createElemenSales(sales dataBaru, adr_sales P) {
    P = new elm_sales;

    info(P).nama = dataBaru.nama;
    info(P).gol = dataBaru.gol;
    next(P) = nil;
    nextJual(P) = nil;

    return P;
}

void new_elm_jual(int info, adr_jual &J){
    J = new elm_jual;

    next(J) = nil;
    info(J) = info;
}

void Insert_new_penjualan(mll &List_Sales, adr_sales S, adr_jual J){
    adr_jual P;

    P = nextJual(S);
    if (nextJual(S) == nil){
        nextJual(S) = J;
    }else{
        while (next(P) != nil){
            P = next(P);
        }
        next(P) = J;
    }
}

void Show_data_sales(mll List_Sales){
    adr_jual P;
    adr_sales Q;

    Q = First(List_Sales);
    while (Q != nil){
        cout << info(Q).nama << endl;
        cout << info(Q).gol << endl;
        P = nextJual(Q);
        while (P != nil){
            cout << info(P) << " ";
            P = next(P);
        }
        cout << endl << endl;
        Q = next(Q);
    }

}

void deleteFirst_penjualan(mll &List_Sales, adr_sales S, adr_jual J){
    J = nextJual(S);
    nextJual(S) = next(J);
    next(J) = nil;
}

void deletelast_penjualan(mll &List_Sales, adr_sales S, adr_jual &J){
    adr_jual P = nextJual(S);

    while (next(P) != J){
        P = next(P);
    }
    J = next(P);
    next(P) = next(J);
    next(J) = nil;
}

void deleteAfter_penjualan(mll &List_Sales, adr_sales S, adr_jual prec, adr_jual &J){
    next(prec) = next(J);
    next(J) = nil;
}

void delete_penjual(mll &List_Sales){
    adr_sales S = First(List_Sales);
    adr_jual J, prec;

    while (S != nil){
        J = nextJual(S);
        while (J != nil){
            if (info(J) < 3){
                if (J == nextJual(S)){
                    deleteFirst_penjualan(List_Sales,S,J);
                } else if (next(J) == nil){
                    deletelast_penjualan(List_Sales,S,J);
                } else {
                    deleteAfter_penjualan(List_Sales,S, prec,J);
                }
            }
            prec = J;
            J = next(J);

        }
        S = next(S);
    }
}

adr_sales Search_Sales(mll List_Sales, string nama_sales){
    adr_sales P = First(List_Sales);

    while(P != nil){
        if(info(P).nama == nama_sales){
            return P;
        }
        P = next(P);
    }
    return nil;
}

void insertLast_Sales(mll &List_Sales, adr_sales S){
    if(First(List_Sales) == nil){
        First(List_Sales) = S;
    } else {
        adr_sales P = First(List_Sales);
        while(next(P) != nil){
            P = next(P);
        }
        next(P) = S;
    }
}

