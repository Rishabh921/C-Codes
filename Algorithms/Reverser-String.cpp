string reverseWords(string str)
{
	stack<string> st;
	string ans = "";
	for (int i = 0; i < str.size(); i++)
	{
		char ch = str[i];
		if (ch == '.')
		{
			st.push(ans);
			string req(1, ch);
			st.push(req);
			ans = "";
		}
		else
		{
			ans += ch;
		}
	}
	while (!st.empty())
	{
		ans += st.top();
		st.pop();
	}
	return ans;
}
