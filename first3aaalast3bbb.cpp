/*
    Write a Cpp program to recognize strings starts with 3 a's and ends with 3 b's.
    (Solve the problem in code blocks, take a screenshot of the code portion and attach
     that in the below attachment section.)  *
*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    string str, first, last;
    cout<<"Enter a String: ";
    getline(cin,str);
    cout<<endl;

    int strsize = str.size();
    first = str.substr(0,3);
    last = str.substr(strsize-3, strsize);

    if(first == "aaa" && last == "bbb")
        cout<<"Your String is accepted\n";
    else
        cout<<"Your string is not accepted\n";

    return 0;
}
