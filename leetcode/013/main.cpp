#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution
{
public:
	int romanToInt(string s)
	{

		map<char, int> roman_values;
		roman_values['I'] = 1;
		roman_values['V'] = 5;
		roman_values['X'] = 10;
		roman_values['L'] = 50;
		roman_values['C'] = 100;
		roman_values['D'] = 500;
		roman_values['M'] = 1000;

		int value;
		int total = 0;
		int prevValue = 0;
		int i;

		for (i = s.length() - 1; i >= 0; --i)
		{
			value = roman_values[s.at(i)];
			if (value < prevValue)
			{
				total = total - value;
			}
			else
			{
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

	string s1 = "III";
	string s2 = "IV";
	string s3 = "IX";
	string s4 = "LVIII";
	string s5 = "MCMXCIV";

	cout << "Roman numeral: " << s1 << " => Integer: " << sol.romanToInt(s1) << endl;
	cout << "Roman numeral: " << s2 << " => Integer: " << sol.romanToInt(s2) << endl;
	cout << "Roman numeral: " << s3 << " => Integer: " << sol.romanToInt(s3) << endl;
	cout << "Roman numeral: " << s4 << " => Integer: " << sol.romanToInt(s4) << endl;
	cout << "Roman numeral: " << s5 << " => Integer: " << sol.romanToInt(s5) << endl;

	return 0;
}
