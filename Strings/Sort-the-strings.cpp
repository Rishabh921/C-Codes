#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define umap unordered_map
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define debarr(arr) for(auto x: arr) cout<<x<<" "; cout<<endl
#define debarr2(arr) for(auto v : arr){ for(auto x : v) cout<<x<<" "; cout<<endl; }
#define fo(i, k, n) for(int i=k;i<n;i++)
#define loop(i, k, n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define vec(type) vector<type>
#define vec2(type,arr,a,b) vector<vector<int>> arr(a,vector<int>(b))
#define mp(a,b) make_pair(a,b)
#define pb push_back
int mod = 1e9 + 7;
int infinite = INT_MAX - 10;

template <typename T>
T power(T x, T y)
{
	T temp;
	if (y == 0)
		return 1;
	temp = power(x, y / 2);
	if (y % 2 == 0)
		return temp * temp;
	else
	{
		if (y > 0)
			return x * temp * temp;
		else
			return (temp * temp) / x;
	}
}

int countDigit(long long n)
{
	return floor(log10(n) + 1);
}

ll gcd(ll a, ll b)
{
	if (b == 0)
		return a;
	return a > b ? gcd(b, b % a) : gcd(a, a % b);
}

string extractStringAtKey(string str, int key)
{
	char *s = strtok((char *)str.c_str(), " ");
	while (key > 1)
	{
		s = strtok(NULL, " ");
		key--;
	}
	return (string)s;
}

bool numericCompare(pair<string, string> s1, pair<string, string> s2)
{
	int n1 = stoi(s1.second);
	int n2 = stoi(s2.second);
	return n1 < n2;
}

bool lexiCompare(pair<string, string> s1, pair<string, string> s2)
{
	return s1.second < s2.second;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	cin.get();

	vec(string) a(n);
	loop(i, 0, n) getline(cin, a[i]);

	int key;
	string reversal, ordering;
	cin >> key >> reversal >> ordering;

	vector<pair<string, string>> strPair(n);
	loop(i, 0, n)
	{
		strPair[i].first = a[i];
		strPair[i].second = extractStringAtKey(a[i], key);
	}

	//sorting
	if (ordering.compare("numeric") == 0)
	{
		sort(strPair.begin(), strPair.end(), numericCompare);
	}
	else
	{
		sort(strPair.begin(), strPair.end(), lexiCompare);
	}

	//printing
	if (reversal.compare("true"))
	{
		loop(i, 0, n) cout << strPair[i].first << endl;
	}
	else
	{
		loop(i, n - 1, -1) cout << strPair[i].first << endl;
	}
}
