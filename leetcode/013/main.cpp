#include <iostream>
#include <string>
#include <map>

class Solution {
public:
    int romanToInt(std::string s) {

	std::map<char, int> roman_values;
	roman_values['I']= 1;
	roman_values['V']= 5;
	roman_values['X']= 10;
	roman_values['L']= 50;
	roman_values['C']= 100;
	roman_values['D']= 500;
	roman_values['M']= 1000;

	int value;
	int total = 0;
	int prevValue = 0;
	int i;
	
	for (i = s.length() - 1; i >= 0; --i) {
	    value = roman_values[s.at(i)];
	    if (value < prevValue) {
		total = total - value;
	    } else {
		total = total + value;
	    }
	    prevValue = value;
	}	
	return total;
    }
};

int main(void)
{
    Solution sol;

    std::string s1 = "III";
    std::string s2 = "IV";
    std::string s3 = "IX";
    std::string s4 = "LVIII";
    std::string s5 = "MCMXCIV";

    std::cout << "Roman numeral: " << s1 << " => Integer: " << sol.romanToInt(s1) << std::endl;
    std::cout << "Roman numeral: " << s2 << " => Integer: " << sol.romanToInt(s2) << std::endl;
    std::cout << "Roman numeral: " << s3 << " => Integer: " << sol.romanToInt(s3) << std::endl;
    std::cout << "Roman numeral: " << s4 << " => Integer: " << sol.romanToInt(s4) << std::endl;
    std::cout << "Roman numeral: " << s5 << " => Integer: " << sol.romanToInt(s5) << std::endl;
    
    return 0;
}
