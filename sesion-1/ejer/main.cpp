#include <iostream>

using namespace std;

int buscar(int h)
{
    int c=1;
    while(h!=1)
    {
        if(h%2==1)
        {
            h=h*3+1;
        }
        else
        {
            h=h/2;
        }
        c++;
    }
    return c;
}
int main()
{
    int i;
    int j;
    while(cin>>i>>j)
    {
        if(i>j){
        int aux=i;
        j=aux;
        i=j;
        }
        int max=0;
        for(int h=i; h<=j; h++)
        {
            int n=buscar(h);
            if(max<=n)
            {
                max=n;
            }
        }
        cout<<i<<" "<<" "<<j<<" "<<max<< endl;
    }
    return 0;
}
