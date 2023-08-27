#include<iostream>
using namespace std;


class Solution {
public:
    bool isPalindrome(int x) {
        long tmp = 0;
        long originalNumber = x;
        
        if (x < 0) {
            return false;
        } 

        while(originalNumber != 0){
            int digit = originalNumber % 10;
            tmp = tmp * 10 + digit;
            originalNumber /= 10;
        }

        return (tmp == x);
    }
};

int main() {
    int x = 121;
    Solution solution; 

    bool result = solution.isPalindrome(x);
    cout << "Is " << x << " palindrome? " << result;
}
