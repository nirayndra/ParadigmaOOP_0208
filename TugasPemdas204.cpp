#include <iostream>
using namespace std;

class Barang{
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void dataBarang(){
        cout << "Nama Barang: " << nama << endl;
        cout << "Jumlah: " << jumlah << endl;
        cout << "Kategori: " << kategori << endl;
        cout << "Tanggal Produksi: " << tanggalProduksi << endl;
    }
};

int main(){
    Barang elektronik;
    elektronik.nama = "Laptop";
    elektronik.jumlah = 23;
    elektronik.kategori = "Besar";
    elektronik.tanggalProduksi = "20-04-2026";
}