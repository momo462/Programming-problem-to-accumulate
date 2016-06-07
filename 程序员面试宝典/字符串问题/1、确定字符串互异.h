#pragma once
class Different {
public:
	//��ϣ����
	bool checkDifferent(string iniString) {
		// write code here
		//˼·��������ʹ�ö���Ŀռ�
		//���������ASCII���뻹��unicode
		//������ASCII�������ַ���Χ[0��255]256���ַ�

		//����ַ������ȳ���256���ַ�����һ�����ظ�
		if (iniString.size()>256)
		{
			return false;
		}
		//��ϣ�ķ���--ֱ�Ӷ�ַ��
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

	//λͼ---ͬ��Ҳ�ǹ�ϣ���������ǽ�ʡ�˿ռ�
	bool checkDifferent2(string iniString)
	{
		//���ж��ַ��������Ƿ�256
		if(iniString.length()>256)
		{
			return false;
		}
		//������size_t ������int ������λ��
		//256/32=8
		size_t  str[8]={0};
		for (size_t i=0;i<iniString.length();i++)
		{
			//�����±�
			int index1 = iniString[i]/32;
			//����ĳ��λ��
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