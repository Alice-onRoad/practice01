#include<iostream>
using namespace std;
int xvlie(int n,int i)
{
	int k=n-i;
	int sum=1;
	if(k<0)
	{
		k=0-k;
	}
	
	for(int a=1;a<k;a++)
		sum+=xvlie(i,a);
	return sum%10000;	
}
int main()
{
	int n;
	cin>>n; 
	int sum=0;
	for(int i=1;i<=n;++i)
	{
		sum+=xvlie(n,i);
		sum=sum%10000;
	}
	cout<<sum<<endl;
}
/*问题描述
　　小明想知道，满足以下条件的正整数序列的数量：
　　1. 第一项为 n；
　　2. 第二项不超过 n；
　　3. 从第三项开始，每一项小于前两项的差的绝对值。
　　请计算，对于给定的 n，有多少种满足条件的序列。
输入格式
　　输入一行包含一个整数 n。
输出格式
　　输出一个整数，表示答案。答案可能很大，请输出答案除以10000的余数。
样例输入
4
样例输出
7
样例说明
　　以下是满足条件的序列：
　　4 1
　　4 1 1
　　4 1 2
　　4 2
　　4 2 1
　　4 3
　　4 4
评测用例规模与约定
　　对于 20% 的评测用例，1 <= n <= 5；
　　对于 50% 的评测用例，1 <= n <= 10；
　　对于 80% 的评测用例，1 <= n <= 100；
　　对于所有评测用例，1 <= n <= 1000。
*/
