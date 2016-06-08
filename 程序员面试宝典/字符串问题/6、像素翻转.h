#pragma once

class Transform {
public:
	vector<vector<int> > transformImage(vector<vector<int> > mat, int n) {
		// write code here
		for(int i=0;i<n/2;i++)
		{
			int first =i; 
			int last =n-i-1;
			for(int j=first;j<last;j++)
			{
				int offset = j-first;
				int top = mat[first][j];
				mat[first][j]=mat[last-offset][first];
				mat[last-offset][first]=mat[last][last-offset];
				mat[last][last-offset]=mat[j][last];
				mat[j][last]=top;
			}
		}
		return mat;
	}
};


void test6()
{
	vector<vector<int>> a;
	
	for(int i=0;i<3;i++)
	{
		vector<int> b;
		for(int j=1;j<=3;j++)
		{
			b.push_back(j+3*i);
		}
		a.push_back(b);
	}
	Transform t1;
	vector<vector<int>> b1= t1.transformImage(a,3);

}