#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

void findpat(string str,int m)
{
	cin >> str;
	int len = str.length();
	int indxp = str.find('P', 0);//返回第一次出现P时的位置的索引
	int indxt = str.find('T', 0);
	if (indxp == string::npos || indxt == string::npos || (indxp >= indxt - 1))//nops是最大值
		cout << "NO" << endl;
	else
	{
		string a(str, 0, indxp);
		string b(str, indxp + 1, indxt - indxp - 1);
		string c(str, indxt + 1, len - indxt - 1);
		string ans = a + b + c;
		if (ans.find_first_not_of('A') != string::npos)
			{
			    printf("NO\n");
			}
		else
		{
			if (indxp == 0 && len - indxt - 1 == 0)
				printf("YES\n");
			else if (indxp*(indxt - indxp - 1) == len - indxt - 1)
				printf("YES\n");
			else
				printf("NO\n");
		}

	}
}
int main()
{
	int m;
	cin >> m;
	string str;
	for (int i = 0; i < m; i++)
	{
		findpat(str, m);
	}
	system("pause");
	return 0;
}