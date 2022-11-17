#include<bits/stdc++.h>
using namespace std;
#define ERR 0.00005

float f(float x)
{
    return sin(x)/cos(x)-4*x;
}

float findx(float x,float y)
{
    float x2 = (x-((y-x)/ (f(y)-f(x)) )*f(x));
    return x2;
}

int main()
{
    cout<<"*****NAME - Chandrachur Sinha Roy\nROLL NO. - 36\nSECTION - CESPL1*****"<<endl;
    float a,b,x1,x0,x2;
    int n;
    cout<<"Enter values of a & b: "<<endl;
    cin>>a>>b;
    cout<<"Enter number of iterations:"<<endl;
    cin>>n;
    if(f(a)==0)
        cout<<a<<" is root."<<endl;
    else if(f(b)==0)
        cout<<b<<" is root."<<endl;
    if(f(a)*f(b)<0)
    {
        if(f(a)>0 && f(b)<0)
        {
            x1=a;
            x0=b;
        }
        else
        {
            x1=b;
            x0=a;
        }
        for(int i=0;i<n;i++)
        {
            x2=findx(x0,x1);
            if(f(x2)*f(x0)<0)
                x1=x2;
            else
                x0=x2;
            cout<<"Iteration "<<i+1<<" Root is: "<<x2<<endl;
        }
        cout<<"Final Root: "<<x2<<endl;
    }
    else
        cout<<"Choose other variables."<<endl;
    return 0;
}
