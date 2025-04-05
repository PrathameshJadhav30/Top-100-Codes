#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    string str;
    cout<<"Enter a String: ";
    getline(cin,str);

    unordered_map<char,int> freqMap;
    for(int i = 0; i< str.length(); i++){
        char ch = str[i];
        if(ch != ' '){
            freqMap[ch]++;
        }
    }

    cout<<"Frequency of characters in the string: "<<endl;
    for(auto it = freqMap.begin(); it != freqMap.end(); it++){
        cout<<"character: "<<it->first<<"Frequency: "<<it->second<<endl;

    }
    return 0;
}