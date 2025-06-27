#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const float mod=1e-6;
float equation(float x)
{
    return ((4*x*x)+(3*x)-3);
}
float ans(float a,float b)
{
    if(equation(a)*equation(b)>0) return -1;
    float error=abs(a-b);
    int cnt=0;
    float mid;
    while(error>=mod)
    {
        mid=a+(abs(b-a))/2;
        float check=0;
        if(equation(mid)==check) return mid;
        else if(equation(a)*equation(mid)<check) b=mid;
        else a=mid;
        error=abs(a-b);
        cnt++;
    }
    cout<<cnt<<endl;
    return mid;
}
float traditional()
{
    return ans(float(0),float(10));
}
float better()
{
    float a=-1,b=-1;
    for(float i=0 ; i<=float(10) ; i+=0.1)
    {
        if((equation(i)*equation(i+0.1))<0)
        {
            a=i;
            b=i+0.1;
            break;
        }
    }
    if(a==-1 or b==-1) return -1;
    return ans(a,b);
}
int main()
{
    ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
    cout<<traditional();
    cout<<better();
}