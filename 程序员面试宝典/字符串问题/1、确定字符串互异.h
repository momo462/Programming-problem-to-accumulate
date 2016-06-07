#pragma once
class Different {
public:
	//哈希方法
	bool checkDifferent(string iniString) {
		// write code here
		//思路：不允许使用额外的空间
		//首先如果是ASCII编码还是unicode
		//假设是ASCII编码则字符范围[0，255]256个字符

		//如果字符串长度超过256个字符，则一定有重复
		if (iniString.size()>256)
		{
			return false;
		}
		//哈希的方法--直接定址法
		bool str[256]={false};
		for (size_t i=0;i<iniString.size();i++)
		{
			if (str[iniString[i]])
			{
				return false;
			}
			str[iniString[i]]=true;
		}
		return true;
	}

	//位图---同样也是哈希方法，但是节省了空间
	bool checkDifferent2(string iniString)
	{
		//先判断字符串长度是否〉256
		if(iniString.length()>256)
		{
			return false;
		}
		//必须是size_t 不能是int （符号位）
		//256/32=8
		size_t  str[8]={0};
		for (size_t i=0;i<iniString.length();i++)
		{
			//数组下标
			int index1 = iniString[i]/32;
			//具体某个位置
			int index2 = iniString[i]%32;
			if (str[index1]&(1<<index2))
			{
				return false;
			}
			str[index1]|=(1<<index2);
		}
		return true;
	}
};


void test1()
{
	string s1("aeiou");
	string s2("BarackObama");
	Different d1;

	//1
	cout<<d1.checkDifferent(s1)<<endl;
	cout<<d1.checkDifferent(s2)<<endl;

	//2
	cout<<d1.checkDifferent2(s1)<<endl;
	cout<<d1.checkDifferent2(s2)<<endl;
}