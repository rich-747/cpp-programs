#include<iostream>
using namespace std;

class ABC; // forward declaration
class XYZ
{
	int data;
	public:
		void setvalue(int value)
		{
			data=value;
			
		}
		friend void add(XYZ,ABC);// friend function declaration 
		
};
class ABC
{
	int data;
	public:
		void setvalue(int value)
		{
			data=value;
			
		}
		friend void add(XYZ,ABC);//FRND FN DECLARATION
		
};

void add(XYZ obj1, ABC obj2)
{
	cout<<"Sum of data value of XYZ  and ABC objects using friendfunction ="<<obj1.data+obj2.data;
}

int main()
{
	XYZ X;
	ABC A;
	X.setvalue(5);
	A.setvalue(50);
	add(X,A); //calling frnd fn
	return 0;
}

	

