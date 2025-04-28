#include <iostream>
using namespace std;

class Mobil
{
public:
    string nama_mobil;
    string tipe_mobil;

private:
    int harga_mobil;

public:
    void inputData()
    {
        cout << "Masukkan nama mobil: ";
        cin >> nama_mobil;
        cout << "Masukkan tipe mobil: ";
        cin >> tipe_mobil;
        cout << "Masukkan harga mobil: ";
        cin >> harga_mobil;
    }
    void outputData(){
        cout << "Harga Mobil :" << harga_mobil << endl;
    }
};
int main()
{
    Mobil Pejabat;
    Pejabat.inputData();
    cout << "Nama Mobil :" << Pejabat.nama_mobil << endl;
    cout << "Tipe Mobil :" << Pejabat.tipe_mobil << endl;
    Pejabat.outputData();
}