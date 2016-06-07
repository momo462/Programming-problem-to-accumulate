#pragma once

class Reverse {
public:
	string reverseString(string iniString) {
		// write code here
		//原串翻转就是一个字符串的所有字符前后交换
		//"1234"---"4321" length=4  交换 length/2次
		//"12345"---"54321" length=5  交换 length/2次
		for (size_t i = 0;i < iniString.length()/2 ; i++)
		{
			swap(iniString[i],iniString[iniString.length()-1-i]);
		}
		return iniString;
	}
};

void test2()
{
	string s1("This is nowcoder");
	Reverse r1;
	cout<<r1.reverseString(s1)<<endl;
}