#include <iostream>
#include <iomanip>

using namespace std;

const int UKURAN = 4;


void tampilkanIdentitas() {
    cout << "Nama    : Aldi Reza Akhnal" << endl;
    cout << "NIM     : 25104410031" << endl;
    cout << "Prodi   : Teknik Informatika 1A" << endl;
    cout << "Tugas Praktikum 4" << endl;
    cout << endl;
}


void tampilkanMatriks(int matriks[UKURAN][UKURAN], const string& nama) {
    cout << "Matriks " << nama << ":" << endl;
    for (int i = 0; i < UKURAN; i++) {
        for (int j = 0; j < UKURAN; j++) {
            cout << setw(4) << matriks[i][j];
        }
        cout << endl;
    }
    cout << endl;
}


int main() {

    tampilkanIdentitas(); 

    int matriksA[UKURAN][UKURAN] = {
        {1, 0, 2, 0},
        {0, 1, 0, 1},
        {2, 0, 1, 0},
        {0, 2, 0, 1}
    };

    int matriksB[UKURAN][UKURAN] = {
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {2, 2, 2, 2}
    };

    int hasilMatriks[UKURAN][UKURAN] = { 0 };

    for (int i = 0; i < UKURAN; i++) {
        for (int j = 0; j < UKURAN; j++) {
            for (int k = 0; k < UKURAN; k++) {
                hasilMatriks[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }

    cout << "--- Program Perkalian Matriks 4x4 ---" << endl;
    tampilkanMatriks(matriksA, "A");
    tampilkanMatriks(matriksB, "B");
    tampilkanMatriks(hasilMatriks, "A x B");

    return 0;
}
