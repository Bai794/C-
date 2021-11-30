#include <iostream>
#include <unordered_set>  
#include <vector>
using namespace std;
int main(){
    unordered_set<int> hashset; 
    int a=3,b=5;
    float c=2.0,d=3.2;  
    hashset.insert(3);
    hashset.insert(2);
    hashset.insert(1);
    hashset.insert(1);
    for (auto &i:hashset)
    {
        cout<<i<<" ";
    }
    swap(a,b);
    swap(c,d);
    cout<<a<<b<<c<<d<<endl;
    system("pause");
    
 


}