#include <iostream>
using namespace std;
 
class siswa{
protected:
    int id;
 
public:
    int getId(){
        return id;
    }
 
    void setId(int i){
        id = i;
    }
};
 
int main (){
    siswa budi;
    budi.setId(10);
    cout<<budi.getId()<<endl;
}
