#include<iostream>
#include<list>
using namespace std;
int main(){

    // List --> It stores elements in non-contiguous memory, where each element has pointers to both the previous and next elements.
    
    // When to Use 
    // ✅ Many insertions/deletions in the middle of the sequence.
    // ✅ When you don’t need random access.
    // ❌ Avoid if you need frequent random access (use vector or deque instead).

    list<int>l;
    list<int>n(5,1);

    l.push_back(1);
    l.push_front(2);
    l.push_front(3);

    
    // Insert at a position
    auto it = l.begin();
    l.insert(it, 15);  // insert before iterator

    for(int i: l){
        cout<<i<<" ";
    }
    cout<<endl;

    // Erase
    l.erase(l.begin());


    for(int i: l){
        cout<<i<<" ";
    }
    cout<<endl;

    // for 2nd list
    for(int i: n){
        cout<<i<<" ";
    }
    cout<<endl;
    
}
