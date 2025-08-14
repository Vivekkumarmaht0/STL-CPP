#include<iostream>
#include<queue>
using namespace std;
int main(){

    // FIFO --> First In First Out
    queue<string>Q;

    Q.push("I");
    Q.push("Love");
    Q.push("You");

    
    cout<< "Top Element: " << Q.front() << endl;
    Q.pop();
    cout<< "Top Element: " << Q.front() << endl;

    cout<< "Size of stack: " << Q.size() << endl;
    cout<< "Stack empty or not: " << Q.empty() << endl;

    // Print all elements
    cout<< "Queue String: ";
    while (!Q.empty()) {
        cout << Q.front() << " "; // Access front element
        Q.pop();                   // Remove it
    } 
    cout<< endl;

    cout<<endl;

    queue<int>q;

    q.push(1);
    q.push(2);
    q.push(3);

    // Print all elements
    cout<< "Queue Element: ";
    for(int i=q.front(); i<=q.size(); i++){
        cout<< i << " ";
    }
    cout<<endl;

    cout<< "Top Element: " << q.front() << endl;
    q.pop();
    cout<< "Top Element: " << q.front() << endl;

    cout<< "Size of stack: " << q.size() << endl;
    cout<< "Stack empty or not: " << q.empty() << endl;

}
