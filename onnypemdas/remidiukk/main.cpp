#include <iostream>


using namespace std;

int main()
{
    string namasklh,namauks,slogan;
    int p;
    int bpjs;
    int pilih, dftr, menu;
    int pesanan, harga;
    float diskon;
    int cefa=15000, azy=18000, cefi=38000;

    cout << "================================================" << endl;
    cout << "Nama Sekolah :" << endl;
    cin >> namasklh;
    cout << "Nama UKS :" << endl;
    cin >> namauks;
    cout << "Slogan UKS :" << endl;
    cin >> slogan;
    cout << "================================================" << endl;
    cout << "1.Info Daftar Obat Yang Tersedia(Gratis)" << endl;
    cout << "2.Layanan Obat Dengan Resep" << endl;
    cout << "================================================" << endl;
    cout << "Pilih 1 Atau 2? ";
    cin >> pilih;
    cout << "" << endl;
    if(pilih == 1){
        cout << "-----------------------------------------------" << endl;
        cout << "Berikut Daftar Obat Yang Tersedia (Gratis)" << endl;
        cout << "-----------------------------------------------" << endl;
        cout << ">Pharacetamol" << endl;
        cout << ">Cepalosporin" << endl;
        cout << ">Aminoglikosida" << endl;
        cout << "-----------------------------------------------" << endl;
        cout << "Kembali Ke Beranda? ";
        cin >> menu;
        cout << endl;
        if(menu=1){
            main ();
        }

    }else if(pilih == 2){
        cout << "===============================================" << endl;
        cout << "DAFTAR HARGA OBAT" << endl;
        cout << "===============================================" << endl;
        cout << "1.Cefadroxil     -----Rp."<<cefa<<",-"<< endl;
        cout << "2.Azythromicyn   -----Rp."<<azy<<",-"<< endl;
        cout << "3.Cefixime       -----Rp."<<cefi<<",-"<< endl;
        cout << "===============================================" << endl;
        cout << "1.Pilih Pesanan Obat?" << endl;
        cout << "Pilih Obat No: ";
        cin >> pesanan;
        cout << endl;
        if(pesanan == 1){
                harga=15000;
        }else if(pesanan == 2){
                harga=18000;
        }else if(pesanan == 3){
                harga=38000;
        }else if (pesanan){

        }cout << "total:Rp."<<harga<<",-"<< endl;
        cout << "2.Kartu BPJS Untuk Diskon? 1.ada/2.tidak: ";
        cin >> bpjs;
        cout << endl;
        if(bpjs == 1){
            cout << "===============================================" << endl;
            cout << "Diskon 10% Karena Menggunakan BPJS" << endl;
            cout << "===============================================" << endl;
            p=10/100*harga;
            cout << "Total Harga + Diskon: Rp."<<harga-p<<",-"<<endl;
        }else if(bpjs == 2){
            cout << "Total Harga:Rp." << harga <<",-";
        }

    }
    return 0;
}
