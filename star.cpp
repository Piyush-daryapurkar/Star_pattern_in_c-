#include <iostream>
using namespace std;
int main()
{
    for (int i=1;i>=6; i++)
    {
            for(int j=1;j<=i;j++)
            {
                if(j>=7-i)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;
    }
    

    return 0;
}