#include <iostream>
using namespace std;
 
class mahasiswa{
private:
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
    mahasiswa zulvia;
    zulvia.setId(10);
    cout<<zulvia.getId()<<endl;
}
