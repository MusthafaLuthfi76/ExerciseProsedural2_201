#include <iostream>
using namespace std;

double nilM;
double nilB;
double rerata(double nilM, double nilB)
{
    return (nilM + nilB) / 2;
}
string nama;
string diterima;
string tidakditerima;

int main() {


    cout << " " << endl;
    cout << "\t =======================" << endl;
    cout << "\t SELEKSI MAHASISWA BARU " << endl;
    cout << "\t =======================" << endl;
ulang:
    cout << "Masukkan Nama : "; cin >> nama;
    cout << "Masukkan Nilai Matematika : ";cin >> nilM;
    cout << "Masukkan Nilai Bahasa Inggris:";cin >> nilB;


    if ((rerata <= 70) && (nilM > 80)) {
        cout << "Pengumuman : ";
        cout << "Pendaftar Dengan Nilai Matematika = " << nilM << endl;
        cout << "Pendaftar Dengan Nilai Nilai Bahasa Inggris = " << nilB << endl;
        cout << "SELAMAT ANDA DITERIMA";
        cin >> diterima;
    }
    else {
        cout << "Pengumuman : ";
        cout << "Pendaftar Dengan Nilai Matematika = " << nilM << endl;
        cout << "Pendaftar Dengan Nilai Bahasa Inggris = " << nilB << endl;
        cout << "Maaf Anda ditolak karena Nilai Anda tidak masuk Dalam kriteria Kami";
        cin >> tidakditerima;
    }
    char lagi;
menulagi:
    cout << "apakah ingin mengulangnya lagi(y/t)";cin >> lagi;
    if (lagi == 'y' || lagi == 'Y') { goto ulang; }
    else
        if (lagi == 't' || lagi == 'T') { goto selesai; }
        else
        {
            cout << "\ninputkan y/t!!!\n";goto menulagi;
        }
selesai:
    cout << "Total diterima: " << diterima.size() << endl;
    cout << "Total tidak diterima: " << tidakditerima.size() << endl;
}