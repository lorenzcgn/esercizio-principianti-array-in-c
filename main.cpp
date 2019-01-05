#include <iostream>
#define max 100

using namespace std;

int main()
{
    int a[max];
    int i,n,somma=0, tot=0;
    //caricamento vettore

    do{
    cout<<"inserire numero di elementi"<<endl;
    cin>>n;
    }while(n<0);
    cout<<"inserire numero di elementi"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"inserire l'elemento "<<i+1<<" del vettore:";
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            somma=somma+a[i];
            tot=tot+1;
        }
        else break;
    }
    cout<<"somma="<<somma<<endl<<"tot="<<tot<<endl;
    return 0;
}
