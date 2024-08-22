#include<iostream>
using namespace std;

//Return true if n is even, else odd
bool isEven(int number)
{
    //n & 1 is 1, then odd, else even
    return (!(number & 1));
}

//Driver code
int main()
{
    int number;

    cout<<"Enter the number : ";
    cin >> number;
    if (isEven(number))
      cout << "Even";
    else 
       cout << "Odd";

    //below can also be used instead of if else conditions
    //isEven(number)? cout << "Even": cout << "odd";
    return 0;
}