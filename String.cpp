#include <iostream>
#include <string>
using namespace std;

string str;

void output_elements(int start, int end, int h)
{
    int i;
    if(h!=0)
    {
            for(i=start-1;((i>=0)&&(i<=end-1));i=i+h)
            {
                         cout<<str[i];
            }
            cout<<'\n';
    }
    else
    {
            cout<<str[start-1]<<'\n';
    }
}

int main()
{
    cout<<"Please, enter your string: ";
    cin>>str;
    int size=str.size();
    while(size<5)
    {
              cout<<"Length of your string must be more or equal 5, enter another string: ";
              str.clear();
              cin>>str;
              size=str.size();
    }
    output_elements(3,size,0);
    output_elements(size-1,sizeqw,0);
    output_elements(1,5,1);
    output_elements(1,size-2,1);
    output_elements(2,size,2);
    output_elements(1,size,2);
    output_elements(size,size,-1);
    output_elements(size,size,-2);
    cout<<size<<'\n';
    system("PAUSE");
    return 0;
}
