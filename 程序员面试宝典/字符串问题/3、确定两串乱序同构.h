#pragma once

class Same {
public:
	bool checkSam(string stringA, string stringB) {
		// write code here
		//����1���Ƿ����ִ�Сд ���������֣�
		//����2���Ƿ��ǿհ׸� �����迼�ǣ�
		//������god ����=��dog��
		
		//1���Ƚϳ���
		if(stringA.length()!=stringB.length())
		{
			return false;
		}
		//2�������������Ϊͬһ���ַ��������Ӧ����ȫ��ͬ
		sort(stringA.begin(),stringA.end());
		sort(stringB.begin(),stringB.end());
		if(stringA==stringB)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool checkSam2(string stringA,string stringB)
	{
		//1���Ƚϳ���
		if(stringA.length()!=stringB.length())
		{
			return false;
		}
		//2��������string�и��ַ����ֵĴ����Ƿ���ͬ
		int str[256]={0};
		for (size_t i=0;i<stringA.length();i++)
		{
			//str[stringA[i]]+=1;
			str[stringA[i]]++;
		}
		for (size_t i=0;i<stringB.length();i++)
		{
			//str[stringB[i]]+=(-1);
			str[stringB[i]]--;
		}
		for(int i=0;i<256;i++)
		{
			if (str[i]!=0)
			{
				return false;
			}
		}
		return true;
	}
};


void test3()
{
	string s1("This is nowcoder");
	string s2("is This nowcoder");
	string s3("Here you are");
	string s4("Are you here");
	Same sa;

	//1
	cout<<sa.checkSam(s1,s2)<<endl;
	cout<<sa.checkSam(s3,s4)<<endl;

	//2
	cout<<sa.checkSam2(s1,s2)<<endl;
	cout<<sa.checkSam2(s3,s4)<<endl;

}