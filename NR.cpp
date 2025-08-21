
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double f(double x)
{
    return sin(x)+cos(x);
}

double df(double x)
{
    return cos(x)-sin(x);
}

int main()
{
    cout<<"Arshia 1432 "<<endl;
    double a,b,tol;
    int max;

    cout<<"enter the first guess : ";
    cin>>a;
    cout<<"enter the tolerance : ";
    cin>>tol;
    cout<<"enter the number of steps : ";
    cin>>max;

    cout<<"\nSteps\t\ta\t\tf(a)\t\tf'(a)\t\tb\n";
    cout<<"---------------------------------------------------------------------------------------------------------------------------";
    cout<<fixed<<setprecision(6);

    for(int i=1;i<=max;i++)
    {
        if(df(a)==0)
        {
            cout<<"Math Error";
            return 0;
        }

        b=a-(f(a)/df(a));

        cout<<"\n"<<i<<"\t\t"<<a<<"\t"<<f(a)<<"\t"<<b<<"\n";

        if(fabs(f(b))<tol)
        {
            cout<<"\nThe Root is : "<<b;
            return 0;
        }

        a=b;

    }

    cout<<"The root is not found in the given steps ";

    return 0;

}
