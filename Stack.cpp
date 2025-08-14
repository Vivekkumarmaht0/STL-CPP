#include<iostream>
#include<stack>
using namespace std;
int main(){

    // LIFO --> Last In First Out
    stack<string>s;

    s.push("I");
    s.push("Love");
    s.push("You");
    
    cout<< "Top Element: " << s.top() << endl;
    s.pop();
    cout<< "Top Element: " << s.top() << endl;

    cout<< "Size of stack: " << s.size() << endl;
    cout<< "Stack empty or not: " << s.empty() << endl;

}