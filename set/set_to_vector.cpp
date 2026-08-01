#include <iostream>
#include <vector>
#include <set>
using namespace std;
set<int>s1= {30,50,40,60};
set<int>s2={67,98,10,37};
vector<int>v1(s1.begin(),s2.end());
vector<int>V2(s2.begin(),s2.end());
for( int x: v1){
    cout<<x<<" ";
}
V2.push_back(68);
V2.push_back(76);
cout<<
