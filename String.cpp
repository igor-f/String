#include <iostream>
#include <string>
using namespace std;

string str;

void output_elements(int start, int end, int h)
{
    int i;
    int size=str.size();
    if((start<=size)&&(start>=0)&&(end<=size)&&(end>=0))
    {         
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
    else
    {
        cout<<"Required characters outside of the input string :(\n";
    }
}

int main()
{
    cout<<"Please, enter your string: ";
    cin>>str;
    int size=str.size();
    char c;
    int i=0;
    while(size<5)
    {
              cout<<"Length of your string must be more or equal 5, please enter more characters:";
              c=getchar();
              c=getchar();
              str=str+c;
              size=str.size();
    }
    cout<<str<<'\n';
    output_elements(3,size,0);
    output_elements(size-1,size,0);
    output_elements(1,5,1);
    output_elements(1,size-2,1);
    output_elements(2,size,2);
    output_elements(1,size,2);
    output_elements(size,size,-1);
    output_elements(size,size,-2);
    cout<<size<<'\n';
    cout<<"Press enter to exit the program..";
    cin.get();
    cin.get();
    return 0;
}
