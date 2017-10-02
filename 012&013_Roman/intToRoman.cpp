//Given an integer, convert it to a roman numeral.
//Input is guaranteed to be within the range from 1 to 3999.
//神经病一类的问题，枚举或者直接除就好


class Solution {
public:
	string intToRoman(int num) {
		char* c[4][10] = {
			{ "","I","II","III","IV","V","VI","VII","VIII","IX" },
			{ "","X","XX","XXX","XL","L","LX","LXX","LXXX","XC" },
			{ "","C","CC","CCC","CD","D","DC","DCC","DCCC","CM" },
			{ "","M","MM","MMM" }
		};
		string roman;
		roman.append(c[3][num / 1000 % 10]);
		roman.append(c[2][num / 100 % 10]);
		roman.append(c[1][num / 10 % 10]);
		roman.append(c[0][num % 10]);

		return roman;
	}
};