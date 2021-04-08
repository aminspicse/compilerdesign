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
