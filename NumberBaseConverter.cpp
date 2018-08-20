#include <string>
std::string NumberBaseConverter(const std::string &str,int baseFrom,int baseTo)
{
	const char table[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	size_t n = str.size();
	//tranfer the string to int array, in order to calc
	int *data = new int[n];
	for(size_t i = 0;i < n;++i)
		if( '0' <= str[i] && str[i] <= '9')
			data[i] = str[i] - '0';
		else if('a' <= str[i] && str[i] <= 'z')
			data[i] = str[i] - 'a' + 10;
		else if('A' <= str[i] && str[i] <= 'Z')
			data[i] = str[i] - 'A' + 10;
	//a lambda functon to judge whether the dividend is zero
	auto isEnd = [=]()-> bool {
		for(size_t i = 0;i < n;++i)
			if(data[i])
				return false;
		return true;
	};
	std::string ans;
	while(!isEnd())
	{
		int r = 0;//r is remainder
		for(size_t i = 0;i < n;++i)
		{
			r = r * baseFrom + data[i];
			data[i] = r / baseTo;
			r %= baseTo;
		}
		ans.push_back(table[r]);
	}
	delete[] data;
	ans.assign(ans.rbegin(), ans.rend());//reverse the ans
	return ans;
}