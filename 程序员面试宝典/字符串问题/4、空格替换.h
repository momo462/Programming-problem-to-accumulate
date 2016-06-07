#pragma once

class Replacement {
public:
	string replaceSpace(string iniString, int length) {
		// write code here
		//1、读取源字符串中空格的个数，算出新字符串需要的空间
		int block =0;
		for(int i=0;i<length;i++)
		{
			if(iniString[i]==' ')
			{
				block++;
			}
		}
		string str;
		//开辟str空间
		str.resize(length+1+2*block);
		//从头往后遍历并增加
		for(int i=0,j=0;i<length;i++)
		{
			if(iniString[i]==' ')
			{
				str[j++]='%';
				str[j++]='2';
				str[j++]='0';
			}
			else
			{
				str[j++]=iniString[i]; 
			}
		}
		return str;

	}
};


void test4()
{
	string s1("Mr John Smith");
    Replacement r1;
	cout<<r1.replaceSpace(s1,13)<<endl;
}