#include<iostream>
#include<queue>
using namespace std;
int main(){

    // max heap
    priority_queue<int>maxi;

    // mean heap
    priority_queue<int, vector<int>, greater<int>>mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);

    cout<< "Max Element: " << maxi.top() << endl;

    cout<< "Element: ";
    while(!maxi.empty()){
        cout<< maxi.top() << " ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(8);
    mini.push(7);
    mini.push(6);
    mini.push(5);

    cout<< "Min Element: " << mini.top() << endl;

    cout<< "Element: ";
    while(!mini.empty()){
        cout<< mini.top() << " ";
        mini.pop();
    }
    cout<<endl;

}