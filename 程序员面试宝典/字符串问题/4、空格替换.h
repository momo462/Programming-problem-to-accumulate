#pragma once

class Replacement {
public:
	string replaceSpace(string iniString, int length) {
		// write code here
		//1����ȡԴ�ַ����пո�ĸ�����������ַ�����Ҫ�Ŀռ�
		int block =0;
		for(int i=0;i<length;i++)
		{
			if(iniString[i]==' ')
			{
				block++;
			}
		}
		string str;
		//����str�ռ�
		str.resize(length+1+2*block);
		//��ͷ�������������
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