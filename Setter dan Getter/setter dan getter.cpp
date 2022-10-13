#include <iostream>
 
using namespace std;
 
class Komputer {
 
  private:
   string pemilik;
   double age;
 
  public:
    void setPemilik(string a) {
      pemilik = a;
    }
 
    void setAge(double b) {
		age = b;
    }
 
    string getPemilik() {
      return pemilik;
    }
double getAge() {
      return age;
    }
};
 
int main()
{
  Komputer komputerRani;
 
  komputerRani.setPemilik("Zulvia");
  komputerRani.setAge(19);
 
  cout << komputerRani.getPemilik() << endl;
  cout << komputerRani.getAge() << endl;
}
