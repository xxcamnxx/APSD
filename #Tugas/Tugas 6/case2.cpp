#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Pegawai {
    char nama[20];
    int jam_kerja;
    float honor_harian;
    float honor_total;
};

int main() {
    int banyak_data;
    cout << "Masukkan banyak data pegawai: ";
    cin >> banyak_data;

    vector<Pegawai> pegawai(banyak_data);

    for (int i = 0; i < banyak_data; ++i) {
        cout << "\nMasukkan data pegawai ke-" << i + 1 << ":\n";
        cout << "Masukkan Nama: ";
        cin.ignore();
        cin.getline(pegawai[i].nama, 20);
        cout << "Masukkan Jam Kerja: ";
        cin >> pegawai[i].jam_kerja;
        cout << "Masukkan Honor Harian: ";
        cin >> pegawai[i].honor_harian;

        if (pegawai[i].jam_kerja > 8) {
            int kelebihan_jam = pegawai[i].jam_kerja - 8;
            pegawai[i].honor_total = pegawai[i].honor_harian + (kelebihan_jam * 5000);
        } else {
            pegawai[i].honor_total = pegawai[i].honor_harian;
        }
    }

    // Menampilkan hasil dalam bentuk tabel
    cout << "\nData Pegawai:\n";
    cout << "| No | Nama               | Jam Kerja | Honor Harian | Honor Total  |\n";
    cout << "|----|--------------------|-----------|--------------|--------------|\n";
    for (size_t i = 0; i < pegawai.size(); ++i) {
        cout << "| " << setw(2) << i + 1 << " | "
             << setw(18) << pegawai[i].nama << " | "
             << setw(9) << pegawai[i].jam_kerja << " | "
             << setw(12) << fixed << setprecision(2) << pegawai[i].honor_harian << " | "
             << setw(12) << fixed << setprecision(2) << pegawai[i].honor_total << " |\n";
    }
    cout << "|----|--------------------|-----------|--------------|--------------|\n";

    return 0;
}
