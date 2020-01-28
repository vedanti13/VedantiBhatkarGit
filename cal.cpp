#include<iostream>
using namespace std;
class cal
{
	int a,b,res;
	public:
	cal()
	{
		a=0;
		b=0;
		res=0;
	}
	void get_data()
	{
		cout<<"Enter First No:";
		cin>>a;
		cout<<"Enter Second No:";
		cin>>b;
	}
	void add()
	{
		res=a+b;
		cout<<"\nAddition:"<<res;
	}
	void sub();
	friend void mul(cal);
	void div()
	{
		res=a/b;
		cout<<"\nDivision:"<<res;
	}
};
void mul(cal obj)
{
	obj.res=obj.a*obj.b;
	cout<<"\nMultiplication:"<<obj.res;
}
void cal::sub()
{
	res=a-b;
	cout<<"\nSubstraction:"<<res;
}
int main()
{
	cal c;
	int ch;
	c.get_data();
	do
	{
		cout<<"\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Exit";
		cout<<"\nEnter Choice";
		cin>>ch;
		switch(ch)
		{
			case 1:
				c.add();
				break;
			case 2:
				c.sub();
				break;
			case 3:
				mul(c);
				break;
			case 4:
				c.div();
				break;
			case 5:
				break;
			default:
				cout<<"Invalid";
				break;
		}
	}while(ch!=5);
	return 0;
}
/*
dypiemr-@swami1:~/vedanti$ ./a.out
Enter First No:5
Enter Second No:5

1.Addition
2.Substraction
3.Multiplication
4.Division
5.Exit
Enter Choice1

Addition:10
1.Addition
2.Substraction
3.Multiplication
4.Division
5.Exit
Enter Choice2

Substraction:0
1.Addition
2.Substraction
3.Multiplication
4.Division
5.Exit
Enter Choice3

Multiplication:25
1.Addition
2.Substraction
3.Multiplication
4.Division
5.Exit
Enter Choice4

Division:1
1.Addition
2.Substraction
3.Multiplication
4.Division
5.Exit
Enter Choice5
*/
