
// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    // please define the C++ input here. For example: int a,b; cin>>a>>b;;
    // please finish the function body here.
    // please define the C++ output here. For example:cout<<____<<endl;
   char str[100];
    gets(str);
    
    for(int i=0;i<100;i++)
    {
        if(str[i]>='A'&&str[i]<='z')
        {
            if(str[i]<='Z')
                str[i]+=('a'-'A');
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            {
                str[i]-=('a'-'A');
            }
        }
        if(str[i]='\0')
        break;
        str[i]=str[i];
    }
    cout<<str;
    return 0;
}
