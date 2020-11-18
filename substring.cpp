#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


void findAllAnagrams(string str1, string str2)
{
	
	int m, n;

	
	if ((m = str2.length()) > (n = str1.length()))
		return;

	for (int i = 0; i <= n - m; i++)
	{

		if (is_permutation(str1.begin() + i, str1.begin() + i + m, str2.begin()))
		{
			cout << "Substring '" << str1.substr(i, m) <<
					"' present at index " << i << '\n';
		}
	}
}

int main()
{
	string str1 = "XYYZXZYZXXYZ";
	string str2 = "XYZ";

	findAllAnagrams(str1, str2);

	return 0;
}