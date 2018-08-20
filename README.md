# Introdution
&emsp;&emsp;a simple program to convert ang large numbers in any base to another base. The base systems available are 2 to 36.
# How To Use
&emsp;&emsp;The code only has a function `std::string NumberBaseConverter(const std::string &str,int baseFrom,int baseTo)`, arg1 is the large number to be converted, arg2 is number base of large number, arg3 is the number base you want to conver. The function return the number in the base you want.
**Example**
```cpp
int main()
{
	std::cout << NumberBaseConverter("123456789101112",10,16);
	//output the number of 123456789101112(this number is in base 10) in base 16.
	return 0;
}
```