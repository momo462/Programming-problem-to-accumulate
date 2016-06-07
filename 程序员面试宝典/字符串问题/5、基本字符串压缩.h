#pragma once

class Zipper {
public:
	string zipString(string iniString) 
	{
		// write code here
		int str[256]={0};
		string newstr;
		for(int i=1;i<iniString.length();i++)
		{
			if(iniString[i-1]==iniString[i])
			{
				str[iniString[i-1]]++;
			}
			else
			{   
				str[iniString[i-1]]++;
				str[iniString[i]]++;
				if(str[iniString[i-1]]>1)
				{
					newstr.append(1,iniString[i-1]);
					newstr.append(1,str[iniString[i-1]]+'0');
				}
				else
				{
					newstr.append(iniString[i-1],1);
				}
			}
		}
		if(iniString.length()<=newstr.length())
		{
			return iniString;
		}
		return newstr;

	}
};

void test5()
{
	string s1("aabcccccaaa");
	Zipper z1;
	cout<<z1.zipString(s1)<<endl;
}