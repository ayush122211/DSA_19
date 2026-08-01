#include <iostream>
using namespace std;
int main(){
    int arr[10]={3,5,7,3,9,6,4,2,10,11};
    for(int i=0;i<9;i++){
        for(int j=0;j<8;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for( int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}