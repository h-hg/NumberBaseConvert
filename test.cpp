#include <iostream>
#include "NumberBaseConverter.cpp"
int main()
{
	using namespace std;
	std::string s;
	int from,to;
	while(cin >> s >> from >> to)
		cout << NumberBaseConverter(s,from,to) << endl;
	return 0;
}