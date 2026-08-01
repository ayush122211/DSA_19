#include <iostream>
using namespace  std;
int main(){
    int HT[10];
    for(int i =0;i<10;i++){
        HT[i] =-1;

    }
    HT[25%10]=25;
    HT[37%10]=37;
    HT[48%10]=48;
    HT[76%10]=76;
      cout<<"after hashing the element: \n";
      for(int i =0;i<10;i++){
        cout<<i<<"-----  "<<HT[i]<<endl;
      }
}
