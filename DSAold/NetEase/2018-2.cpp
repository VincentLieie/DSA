/*
链接：https://www.nowcoder.com/questionTerminal/ef6262d0381d42ebbe22d8a8554fef01
来源：牛客网
为了得到一个数的"相反数",我们将这个数的数字顺序颠倒,然后再加上原先的数得到"相反数"。例如,为了得到1325的"相反数",首先我们将该数的数字顺序颠倒,我们得到5231,之后再加上原先的数,我们得到5231+1325=6556.如果颠倒之后的数字有前缀零,前缀零将会被忽略。例如n = 100, 颠倒之后是1. 
输入描述:
输入包括一个整数n,(1 ≤ n ≤ 10^5)
输出描述:
输出一个整数,表示n的相反数
示例1
输入
1325
输出
6556
*/

// 很烂的代码23333
#include "iostream"
using namespace std;
int main() {
	int w ,q ,b ,x ,g,a;
	cin>>a;
	w = a/10000;
	q = (a-w*10000)/1000;
	b = (a-w*10000-q*1000)/100;
	x = (a-w*10000-q*1000-b*100)/10;
	g = a-w*10000-q*1000-b*100-x*10;
	if(w!=0){
		cout<<a+g*10000+x*1000+b*100+q*10+w<<endl;
   }
	else if(w==0&&q!=0){
		cout<<a+g*1000+x*100+b*10+q<<endl;
   }
   else if(w==0&&q==0&&b!=0){
		cout<<a+g*100+x*10+b<<endl;
   }
   else if(w==0&&q==0&&b==0&&x!=0){
		cout<<a+g*10+x<<endl;
	}
	else{
		cout<<a+a<<endl;
   }
}

