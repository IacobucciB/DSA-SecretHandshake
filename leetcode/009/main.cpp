#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
	if (x < 0) {
	    return false;
	}

	long int aux = x;
	long int digit = 0;
	long int reversed = 0;

	while (aux != 0) {
	    digit = aux % 10;
	    aux = aux / 10;
	    reversed = reversed * 10 + digit;
	}

	if (x - reversed == 0) {
	    return true;
	}
	
	return false;
    }
};

int main(void)
{
    Solution sol;
    int a = 121;
    int b = -121;
    int c = 10;
    int d = 1234567899;
    
    std::cout << sol.isPalindrome(a) << std::endl;
    std::cout << sol.isPalindrome(b) << std::endl;
    std::cout << sol.isPalindrome(c) << std::endl;
    std::cout << sol.isPalindrome(d) << std::endl;
    
    return 0;
}
