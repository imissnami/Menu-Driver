##include<iostream>
using namespace std;
int main ()
{
    int a,b;
	cout<<"Enter any two integers:\t";
	cinn>>a<<b;
	While(1)
	{
	    cout<<"Press 1 for Addition\n";
		cout<<"Press 2 for Subtraction\n";
		cout<<"Press 3 for Multiplication\n";
		cout<<"Press 4 for Division\n";
		cout<<"Press 5 for Remainder\n";
		cout<<"Press 6 for Exit\n";
		int ch;
		cout<<"Enter your choice\n";
		cin>>ch;
		switch(ch)
		{
        	case 1: cout<<"sum of numbers is: "<<a+b\n;
			break;
			case 2: 
			 if (a>b)
			 {
			     cout<<"Difference is"<<a-b<<\n; 
			 }
			     {
				   else
				 }
				 {
				 cout<<"Difference  is"<<b-a<<\n;
				 }
		     break;
	         case 3: cout<<"Multiplitcation is"<<a*b<<\n;
	         break;
			 case 4: 
				  if (b==0)
				  {
					 cout<<"Division not possible as divisor is 0\n";
				  }else
					 cout<<"Qoutient is "<<a/b<<\n;
				 {
			 break;
			 case 5: 
			     if(b==0)
			     {
				    cout<<"Remainder can't be find"<<"\n";
				 }
				 else
				 {
				     cout<,"Remainder is "<<aXb<<"\n";
				 }
			break;
			case 6:
                exit(0);
			break;
            default:
                     cout<<"Enter a valid choice\n";
					 break;
		}
	}
    return 0;
}