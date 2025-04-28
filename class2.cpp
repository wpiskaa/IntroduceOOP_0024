#include <iostream>
using namespace std;

class PersegiPanjang
{
private:
    int Panjang;
    int Lebar;
    int Luas;

public:
    void inputData()
    {
        cout << "Masukkan Panjang :";
        cin >> Panjang;
        cout << "Masukkan Lebar :";
        cin >> Lebar;
    }
    void hitungLuas()
    {
    Luas =
        Panjang *Lebar;
    }
    
    void outputData()
    {
        cout << "Tampilkan Luas :" << Luas << endl;
    }

  
};
int main()
{
    PersegiPanjang pp;
    pp.inputData();
    pp.hitungLuas();
    pp.outputData();
}
