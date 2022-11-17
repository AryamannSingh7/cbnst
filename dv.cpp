#include<bits/stdc++.h>
using namespace std;

double fun(double x)
{
    double f = (sin(x)/cos(x))-4*x;
    return f;
}
double iter(double x,double y)
{
    double x2 = (x-((y-x)/ (fun(y)-fun(x)) )*fun(x));
    return x2;
}
int main()
{
    double x0,x1,x2=0,f1,f2,f3,x2s=0;
    cout<<"enter the value of x0:"<<endl;
    cin>>x0;
    cout<<"enter the value of x1:"<<endl;
    cin>>x1;
    int n;
    cout<<"enter the number of iterations:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    x2s=x2;
    f1 = fun(x0);
    f2 = fun(x1);
    x2 = iter(x0,x1);
    if(f1<0&&f2>0)
    {
         f3 = fun(x2);
         if(f3<0)
         {
             x0 = x2;
         }
         else
         {
             x1 = x2;
         }
    }
    if(f1>0&&f2<0)
    {
         f3 = fun(x2);
         if(f3<0)
         {
             x1 = x2;
         }
         else
         {
             x0 = x2;
         }
    }
    cout<<"ITERATION = "<<i+1<<"       ROOT = "<<x2<<endl;
    }
    cout<<"Second Last Iteration="<<x2s<<endl;
    return 0;
}
