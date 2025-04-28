#include  <iostream>
using namespace std;

class PersegiPanjang{
    private:
    int Panjang;
    int Lebar;
    int Luas;

    public:
    void inputData(){
        cout << "Masukkan Panjang :";
        cin >> Panjang;
        cout << "Masukkan Lebar :";
        cin >> Lebar;
    }

};
