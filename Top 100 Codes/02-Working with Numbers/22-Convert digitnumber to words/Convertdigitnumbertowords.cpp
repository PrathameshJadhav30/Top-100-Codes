#include <iostream>

using namespace std;

string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
string thousands[] = {"", "Thousand", "Million", "Billion"};  // Supports up to billion

// Function to convert a number (0-999) to words
string convertThreeDigit(int num) {
    string words = "";

    if (num / 100 > 0) {
        words += ones[num / 100] + " Hundred ";
        num %= 100;
    }

    if (num >= 10 && num < 20) {
        words += teens[num - 10] + " ";
    } else {
        if (num / 10 > 0) words += tens[num / 10] + " ";
        if (num % 10 > 0) words += ones[num % 10] + " ";
    }

    return words;
}

// Function to convert a number to words (supports up to 999,999,999)
string convertToWords(int num) {
    if (num == 0) 
       return "Zero";

    string words = "";
    int place = 0;

    while (num > 0) {
        int chunk = num % 1000;  // Extract last three digits
        if (chunk > 0) {
            words = convertThreeDigit(chunk) + thousands[place] + " " + words;
        }
        num /= 1000;
        place++;
    }

    return words;
}

int main() {
    long long number;
    cout << "Enter a number (0-999,999,999): ";
    cin >> number;

    if (number < 0 || number > 999999999) {
        cout << "Please enter a number between 0 and 999,999,999." << endl;
    } else {
        cout << "Number in words: " << convertToWords(number) << endl;
    }

    return 0;
}
