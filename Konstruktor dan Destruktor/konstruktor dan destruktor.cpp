#include <iostream>
 
using namespace std;
 
class komputer {
 
  private:
    string pemilik;
    string merk;
 
  public:
    komputer(string a, string b) {
      pemilik = a;
      merk = b;
 
      cout << "Object komputer " << pemilik << " sudah dibuat" << endl;
    }
 
    ~komputer() {
      cout << "Object komputer " << pemilik << " sudah dihapus" << endl;
    }
 
    string hidupkankomputer() {
      return "Hidupkan komputer " + merk + " Milik " + pemilik;
    }
};
 
int main()
{
  komputer komputerRani("Zulvia","hp");
  komputer komputerRaka("Arifatul","Asus");
  komputer komputerRima("Fadzilah","Dell");
 
  cout << "================================="<< endl;
  cout << komputerRani.hidupkankomputer() << endl;
  cout << komputerRaka.hidupkankomputer() << endl;
  cout << komputerRima.hidupkankomputer() << endl;
  cout << "================================="<< endl;

}
