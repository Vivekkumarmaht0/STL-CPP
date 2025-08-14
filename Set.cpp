// Set --> It is typically implemented as a self-balancing binary search tree (usually a Red-Black Tree), which allows logarithmic time for insert, delete, and search.

// Key Features
// Unique elements — duplicates are automatically ignored.
// Sorted order — ascending by default, can be customized with a comparator.
// Fast operations — O(log n) for insert, erase, find.
// Bidirectional iterators — can iterate forward and backward.
// Elements are immutable — you can’t modify an element’s value directly (must erase and reinsert).

#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;

    // Insert elements
    s.insert(10);
    s.insert(50);
    s.insert(20);
    s.insert(10); // duplicate, ignored

    // Print elements (sorted)
    cout << "Set elements: ";
    for (int x : s){
        cout << x << " ";
    }    
    cout << endl;

    if(s.find(5) != s.end()){
        cout<< "5 is found\n";
    } else{
        cout<< "not found\n";
    }

    // Erase element
    s.erase(10);

    // Size
    cout << "Size: " << s.size() << endl;

    // check
    if(s.count(20)){
        cout<< "yes";
    } else {
        cout<<"no";
    }
        
}