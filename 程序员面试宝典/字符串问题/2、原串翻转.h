#pragma once

class Reverse {
public:
	string reverseString(string iniString) {
		// write code here
		//ԭ����ת����һ���ַ����������ַ�ǰ�󽻻�
		//"1234"---"4321" length=4  ���� length/2��
		//"12345"---"54321" length=5  ���� length/2��
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