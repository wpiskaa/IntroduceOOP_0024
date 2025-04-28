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
void inputData(){
    cout << "Masukkan nama mobil: ";
    cout << "Masukkan tipe mobil: ";
}
};