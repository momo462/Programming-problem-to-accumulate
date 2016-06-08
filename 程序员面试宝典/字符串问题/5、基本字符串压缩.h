#pragma once

class Zipper {
public:
	string zipString(string iniString) 
	{
		// write code here
		string  newstr;
		//记录当前字符的个数
		int temp=0;
		for(int i=0;i<iniString.length();i++)
		{
			temp++;
			if(i==iniString.length()-1||(i+1)<iniString.length()&&iniString[i]!=iniString[i+1])
			{
				newstr.append(1,iniString[i]);
				string tempstr;
				while(temp)
				{
					tempstr.append(1,temp%10+'0');
					temp=temp/10;
				}
				int size=tempstr.length();
				for (int i=0;i<size;i++)
				{
					newstr.append(1,tempstr[size-1-i]);
				}
				temp=0;
			}
		}
		if(newstr.length()>=iniString.length())
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
	//cout<<z1.zipString(s1)<<endl;
	string s2("jjjjjjxxxxxxxooZLLLLLLLLQQQQQQQQQLLLLLLLLECXXXXXXXIIIIIIIIIhjjyyySSooooooooommmuuEEEEEEEEEnnnnnnnffffffAAAAAllllllllbbbbkkkkkkkkkkkkKKKKKKhhhhhhhhhooooooooooYCCCCCCOOOOOOOOOMMMMMMMMMMiiiiiivvvvvvvWWWWkkkkkkwwwwwwwMmmmmmmmmLLLwwwwwwwkkkjjjjjjttttQQQQQQQQQaaaaaaaFFFFFFFlllllllllggggggggggPPPPPPuuuuuuuuaYYYYYYwQQQFFFFFFFFFFaaaaapXXXXXXXxxxxxxQQQQQQQQQsssssGGGGfffffffddddddpppQQQQQQHHHTTTaaaaaaGGGGGGddyyyyyMhhllllllllllNNNNNNNNUUUWWWWWWLLLLLLLLLYYYYYYYYYYTTKKKKKKKKiiiiiiitttttttXXXXXXXXXLLLHZZZZZZZssssjjJJJEEEEEOOOOOttttttttttBBttttttTTTTTTTTTTrrrrttttRRRRRyyooooooaaaaaaaaarrrrrrrPPPPPPPjjPPPPddddddddddHHHHnnnnnnnnnnSSSSSSSSSSzzHHHHHHHHHddddddDDDzzzhhhhhfffffffffftttttteeeeeeeeEEEEEEEEEaaaaaaccccccccccFFFFFFFF");
	cout<<s2<<endl;
	cout<<z1.zipString(s2)<<endl;
}