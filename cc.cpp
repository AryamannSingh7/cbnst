#include<bits/stdc++.h>
using namespace std;
#define ERR 0.001

float f(float x)
{
    return (sin(x)/cos(x))-4*x;
}

float df(float x)
{
    return (1/(cos(x)*cos(x)))-4;
}

int main()
{
    cout<<"*****NAME - Chandrachur Sinha Roy\nROLL NO. - 36\nSECTION - CESPL1*****"<<endl;
    float a,b,x,xn;
    int n,ita;
    cout<<"Enter two starting range values:"<<endl;
    cin>>a>>b;
    cout<<"Enter max number of iterations allowed:"<<endl;
    cin>>n;
    if(f(a)==0)
        cout<<a<<" is root."<<endl;
    else if(f(b)==0)
        cout<<b<<" is root."<<endl;
    if(f(a)*f(b)<0)
    {
        x=(a+b)/2;
        for(int i=0;i<n;i++)
        {
            xn=x-(f(x)/df(x));
            if(f(xn)-f(x)<ERR){
                    ita=i;
                break;}
            else
            {
                x=xn;
                cout<<"Iteration "<<i+1<<" Root is: "<<xn<<endl;
            }
        }
        cout<<"Final Root: "<<xn<<endl;
        cout<<"Function value: "<<f(xn)<<endl;
        cout<<"Iteration number: "<<ita<<endl;
    }
    else
        cout<<"Choose other variables."<<endl;
    return 0;
}
