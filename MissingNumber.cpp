#include<iostream>
using namespace std;

/**
 * You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.
 * 
 * Input: The first input line contains an integer n; The second line contains n−1 numbers. 
 * Each number is distinct and between 1 and n (inclusive).
 * 
 * Output: Print the missing number.
 * 
*/

void missingNumber() {
    // int n;
    // cout << "Enter the max range (integer): ";
    // cin >> n;

    // cout << "Enter " << n-1 << " numbers:";
    // int numbers;
    // int counter = 0;
    
    // if(counter != n-1) {
    //     if(numbers <= n && numbers > 0) {
    //         cin >> numbers;
    //         counter++;
    //     }
    // }
    
    long long int n, input, sum = 0;
    cin >> n;

    for (int i = 0 ; i < n - 1 ; i++) {
        cin >> input;
        sum += input;
    }

    cout << ( n * (n + 1) ) / 2 - sum << endl;
}

int main() {
    missingNumber();
}