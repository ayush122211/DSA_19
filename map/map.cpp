#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
     unordered_map<int,string> sm;
     sm[204]="rahul";
     sm[256]=" liza";
     sm[371]="ayush";
     int rn ;
     cout<<" enter the  studendts roll no.";
     cin>>rn;


     if(sm.find(rn)!= sm.end()){
        cout<<"the name of student :"<<sm[rn];

     } else {
        cout<<" students not found"<<endl;

     }


}

// include <iostream>
// #include <unordered_map>
// using namespace std;

// int main()
// {
//     unordered_map<int, string> sm;

//     sm[204] = "Rahul";
//     sm[256] = "Liza";>
//     sm[357] = "Sami";

//     int rn = 256;

//     if (sm.find(rn) != sm.end())
//     {
//         cout << "The name of student: " << sm[rn];
//     }
//     else
//     {
//         cout << "Student not found";
//     }