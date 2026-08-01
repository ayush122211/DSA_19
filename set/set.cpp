// 8. set

// set-> all the unique elements are stored in set
// exaple -> if you have put 5 times 5, the 5 will only appears one in the set . it stores every elements only once

// if you have already include an elements , you cannot modify it . only two things are available addition and deletion
// elements are returned in sorted order only




//1.ordered set
/*
ordered set->
Definition

An ordered set stores elements in sorted order automatically.
Header File
#include<set>
Syntax
set<int> s;
Features of Ordered Set
Stores unique elements only
Elements remain sorted
Implemented using Red-Black Tree
Slower than unordered set

example->
#include<iostream>
#include<set>

using namespace std;

int main() {

    set<int> s;

    s.insert(30);
    s.insert(10);
    s.insert(20);
    s.insert(10);

    for(int x : s)
        cout << x << " ";

    return 0;
}

Output
10 20 30
Explanation
Duplicate 10 is ignored
Elements are printed in sorted order

*/



// 2.unordered set
/*
2. Unordered Set
Definition

An unordered set stores elements in random order.

Header File
#include<unordered_set>
Syntax
unordered_set<int> s;
Features of Unordered Set
Stores unique elements only
No sorting
Uses Hash Table
Faster operations

examples->
#include<iostream>
#include<unordered_set>

using namespace std;

int main() {

    unordered_set<int> s;

    s.insert(30);
    s.insert(10);
    s.insert(20);

    for(int x : s)
        cout << x << " ";

    return 0;
}

Output
20 10 30

(Output order may change.)

*/



#include<iostream>
#include<set>

using namespace std;

int main (){
   set<int> s;

   // insertion and its complexity is 0log(n)
   s.insert(5);
   s.insert(5);
   s.insert(5);
   s.insert(6);
   s.insert(6);
   s.insert(1);
   s.insert(0);
   s.insert(0);
   s.insert(0);

   for( auto i:s){
    cout<< i<< endl;
   }
   cout<< endl;

//erase
// s.erase(s.begin());
// for (auto i:s){
//    cout<<i<< endl;
// }
// cout<< endl;

set<int>::iterator it = s.begin();
it++;
s.erase(it);
for (auto i:s){
    cout<<i<< endl;
}
cout<< endl;

// count give the idea elements presents or not
cout<<"5 is present or not->"<<s.count(5)<< endl;
cout<<"4 is present or not->"<<s.count(4)<< endl;


// 'find' function if you get the elements and if elements exist in the set then it return iterator 

set<int>::iterator itr = s.find(5);
cout<< "value present at itr ->"<<*it << endl;
for( auto it = itr; it != s.end(); it++){
    cout<<*it<<" ";
}
cout<< endl; 

}


/*
complexity = o(logn) is
1. insert
2. find 
3. erase
4. count 

complexity = o(1) is
1. begin 
2. size
3.end
4.empty

*/