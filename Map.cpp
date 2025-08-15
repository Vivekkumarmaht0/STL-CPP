#include<iostream>
#include<map>
using namespace std;
int main(){

    // When to Use map

    // Need key–value pairs with sorted keys.
    // Need fast search, insert, delete (O(log n)).
    // If you don’t need sorting and want faster average lookup (O(1)), use unordered_map.
 
    map<int, string>mpp;
    map<int, int>m;

    // value insert
    mpp[1] = "I";
    mpp[2] = "Love";
    mpp[3] = "You";

    // another way
    mpp.insert({4, "C++"});

    for(auto &i: mpp){
        // first --> key   second --> value
        cout<< i.first << " --> " << i.second << endl;  
    }

    // search 
    if(mpp.find(3) != mpp.end()){
        cout<< "Key 3 found with value: " << mpp[3] << endl;
    } else{
        cout<< "Don't found" << endl;
    }

    cout<<endl;

    // Insert values
    m[1] = 100;     
    m[5] = 500;     
    m[3] = 300;     

    // Iterate (keys sorted)
    for (auto &p : m) {
        cout << p.first << " --> " << p.second << endl;
    }

    // Search
    int key = 3;
    if (m.find(key) != m.end()){
        cout << "Value for key " << key << " is " << m[key] << endl;
    }    


}