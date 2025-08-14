#include<iostream>
#include<deque>
using namespace std;
int main(){

    // It’s like a vector but with better support for adding/removing elements at the front.
    deque<int>d;

    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    d.push_back(4);
    d.push_back(5);
    d.push_back(6);

    cout<<"After push: ";
    for(int i: d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_front();
    d.pop_back();

    cout<<"After pop: ";
    for(int i: d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<< "Element at 3rd Index: " << d.at(3) << endl;
    cout<< "First Element: " << d.front() << endl;

    // Erase 
    cout<< "Before Erase: " << d.size() << endl;
    d.erase(d.begin(), d.begin()+2); 
    cout<< "After Erase: " << d.size() << endl;

    for(int i: d){
        cout<<i<<" ";
    }

}