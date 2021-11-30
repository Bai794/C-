#include <iostream>
using namespace std;
int gcd(int a,int b){
    if(a<b){
        int Temp = a;
        a=b;
        b=Temp;
    }
    if(a%b==0) return b;
    else return gcd(b,a%b);
}
int main(){
    int ans;
    int a,b;
    cin>>a>>b;
    
    int tem=gcd(a,b);
    ans=a*b/tem;
    cout<<ans;
    return 0;
}