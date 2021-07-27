#include <iostream>
using namespace std;


int main() {
	int t, ans = 0;
	long int n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		if ((n+1)%10 == 0)
		{
			ans++;
		}
		ans += n / 10;
		cout << ans << endl;
		ans = 0;
	}
}
