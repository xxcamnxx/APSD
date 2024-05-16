#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Mahasiswa {
    char nim[5];
    char nama[15];
    float nilai_uts;
    float nilai_uas;
    float nilai_akhir;
    char nilai_huruf;
};

char hitungNilaiHuruf(float nilai_akhir) {
    if (nilai_akhir >= 80) return 'A';
    else if (nilai_akhir >= 70) return 'B';
    else if (nilai_akhir >= 56) return 'C';
    else if (nilai_akhir >= 47) return 'D';
    else return 'E';
}

int main() {
    int banyak_data;
    cout << "Masukkan banyak data mahasiswa: ";
    cin >> banyak_data;

    vector<Mahasiswa> mahasiswa(banyak_data);

    for (int i = 0; i < banyak_data; ++i) {
        cout << "\nMasukkan data mahasiswa ke-" << i + 1 << ":\n";
        cout << "Masukkan NIM: ";
        cin >> mahasiswa[i].nim;
        cout << "Masukkan Nama: ";
        cin.ignore();
        cin.getline(mahasiswa[i].nama, 15);
        cout << "Masukkan Nilai UTS: ";
        cin >> mahasiswa[i].nilai_uts;
        cout << "Masukkan Nilai UAS: ";
        cin >> mahasiswa[i].nilai_uas;

        mahasiswa[i].nilai_akhir = (mahasiswa[i].nilai_uts * 0.6) + (mahasiswa[i].nilai_uas * 0.4);
        mahasiswa[i].nilai_huruf = hitungNilaiHuruf(mahasiswa[i].nilai_akhir);
    }

    // Menampilkan hasil dalam bentuk tabel
    cout << "\nData Mahasiswa:\n";
    cout << "| No | NIM  | Nama            | Nilai UTS | Nilai UAS | Nilai Akhir | Nilai Huruf |\n";
    cout << "|----|------|-----------------|-----------|-----------|-------------|-------------|\n";
    for (size_t i = 0; i < mahasiswa.size(); ++i) {
        cout << "| " << setw(2) << i + 1 << " | "
             << setw(4) << mahasiswa[i].nim << " | "
             << setw(15) << mahasiswa[i].nama << " | "
             << setw(9) << mahasiswa[i].nilai_uts << " | "
             << setw(9) << mahasiswa[i].nilai_uas << " | "
             << setw(11) << fixed << setprecision(1) << mahasiswa[i].nilai_akhir << " | "
             << setw(11) << mahasiswa[i].nilai_huruf << " |\n";
    }
    cout << "|----|------|-----------------|-----------|-----------|-------------|-------------|\n";

    return 0;
}
