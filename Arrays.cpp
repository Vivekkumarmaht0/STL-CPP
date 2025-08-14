#include<iostream>
#include<array>
using namespace std;
int main(){
    // Basic Array
    int basic[3] = {1, 2, 3};

    for(int i: basic){
        cout<<i<<" ";
    }
    cout<<endl;

    array<int,4> A = {1, 2, 3, 4};
    int size = A.size();  // Size

    for(int i=0; i<size; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

    cout<< "Element at 2nd Index: " << A.at(2) << endl;
    cout<< "Element empty or not: " << A.empty() << endl;
    cout<< "First Element: " << A.front() << endl;
    cout<< "Last Element: " << A.back() << endl;

}