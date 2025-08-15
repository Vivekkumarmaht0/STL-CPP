#include<iostream>
#include<vector>
using namespace std;
int main(){
    // Vector Array of default size
    vector<int>A;

    // Vector Array of size 5 and filled with 1
    vector<int>Arr(5,1);

    cout<< "Print Arr: ";
    for(int i: Arr){
        cout<< i << " ";
    }
    cout<<endl;
     

    // copy of array
    vector<int>Res(Arr);
    
    cout<< "Print Res: ";
    for(int i: Res){
        cout<< i << " ";
    }
    cout<<endl;

    // How many elements the container can store before it has to allocate more memory. 
    cout<< "Capacity --> " << A.capacity() << endl;

    // Push element in vector
    A.push_back(1);
    A.push_back(2);
    A.push_back(3);
    A.push_back(4);
    cout<< "Capacity --> " << A.capacity() << endl;

    cout<< "After Push: ";
    for(int i: A){
        cout<< i << " ";
    }
    cout<<endl;

    // How many elements are currently stored.
    cout<< "Size --> " << A.size() << endl;

    // Pop (Delete) element from the vector
    cout<< "Before Pop: ";
    for(int i: A){
        cout<< i << " ";
    }
    cout<<endl;

    A.pop_back();

    cout<< "After pop: ";
    for(int i: A){
        cout<< i << " ";
    }
    cout<<endl;

    cout<< "First Element: " << A.front() << endl;
    cout<< "Last Element: " << A.back() << endl;

    // clear the Array
    cout<< "Before clear size: " << A.size() << endl;
    A.clear();
    cout<< "After clear size: " << A.size() << endl;
    
}