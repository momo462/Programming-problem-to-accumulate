#pragma once

class Same {
public:
	bool checkSam(string stringA, string stringB) {
		// write code here
		//问题1：是否区分大小写 （假设区分）
		//问题2：是否考虑空白格 （假设考虑）
		//即：“god ”！=“dog”
		
		//1、比较长度
		if(stringA.length()!=stringB.length())
		{
			return false;
		}
		//2、进行排序，如果为同一组字符，排序后应该完全相同
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
		//1、比较长度
		if(stringA.length()!=stringB.length())
		{
			return false;
		}
		//2、看两个string中各字符出现的次数是否相同
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