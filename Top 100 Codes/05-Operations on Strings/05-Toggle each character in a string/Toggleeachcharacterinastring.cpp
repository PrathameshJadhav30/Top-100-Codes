#include<iostream>
#include<string>
using namespace std;

string toggleString(string str){
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32; // Convert lowerCase to UpperCase
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32; // Convert UpperCase to LowerCase
        }
    }
    return str;
}
int main(){
    string str;
    cout<<"Enter a String: ";
    getline(cin, str);

    cout<<"Toggled String: "<<toggleString(str)<<endl;
    return 0;
}