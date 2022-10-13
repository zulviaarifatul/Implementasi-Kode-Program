#include <iostream>
using namespace std;
class mobil{
    string merk;
     
    public:
    string setget(string merk){
        this->merk = merk;
        return this->merk;
    }
}mobilnya;
 
int main()
{
    cout<<mobilnya.setget("Mobil Innova");
}
