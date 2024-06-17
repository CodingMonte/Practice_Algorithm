#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> s;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string input;
		int num;
		cin >> input;

		if (input == "push")
		{
			cin >> num;
			s.push(num);
		}
		else if (input == "pop")
		{
			if (s.empty())
				cout << -1 << '\n';
			else
			{
				cout << s.top() << '\n';
				s.pop();
			}
		}
		else if (input == "size")
		{
			cout << s.size() << '\n';
		}
		else if (input == "empty")
		{
			if (s.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (input == "top")
		{
			if (s.empty())
				cout << -1 << '\n';
			else
				cout << s.top() << '\n';
		}
	}
	return 0;
}