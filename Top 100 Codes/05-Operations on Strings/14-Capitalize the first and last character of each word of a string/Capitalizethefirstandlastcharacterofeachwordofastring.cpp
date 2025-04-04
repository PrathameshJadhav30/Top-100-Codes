#include<iostream>
#include<cctype>
#include<string>

using namespace std;

void capitalizeFirstLast(string &str){
    int n = str.length();

    for(int i = 0; i < n; i++){
        if(i == 0 || str[i -1] == ' '){
            str[i] = toupper(str[i]);
        }
        if(i < n-1 && str[i + 1] == ' '){
            str[i] = toupper(str[i]);
        }

        if(i = n-1){
            str[i] = toupper(str[i]);
        }
    }
}

int main(){
    string str;
    cout<<"Enter a String: ";
    getline(cin,str);

    capitalizeFirstLast(str);
    cout<<"Modified String: "<<str<<endl;

    return 0;
}