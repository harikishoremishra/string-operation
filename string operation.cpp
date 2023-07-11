#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	string b;
	cin>>a>>b;
	cout<<"the string which can have you given as input are"<<a<<b;
	
	string c;
	c=a+b; //this is called concetination
	
	cout<<"the combined word is :"<<c;
	cout<<"the length of word is :"<<c.length();
	return 0;
}
