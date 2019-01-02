#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int A[20];
    int i,j,nilai,batas,baru,a,b,c,d,k;
    cout<<"Masukkan jumlah elemen : ";
    cin>>batas;
    cout<<"\n------------------------------------------";
    cout<<endl;

    //menampilkan nilai//
    for(i=0;i<batas;i++)
    {
        cout<<"\n Data indeks ["<<i<<"] = ";
        cin>>A[i];
    }
    cout<<endl;

    //memasukkan nilai yang akan dicari//
    cout<<"\nMasukkan nilai yang akan dicari = : ";
    cin>>nilai;

    //pencarian data//
    for(j=0;j<batas;j++)
    {
        if(A[j]==nilai)
        {
            cout<<"Nilai yang dicari terdapat pada indeks ["<<j<<"]";
        }
    }
    cout<<"\n-----------------------------------------";

    //mengganti data//
    cout<<endl;
    cout<<"\n Masukkan indeks yang ingin diganti = : ";
    cin>>c;
    cout<<"\n Masukkan data pengganti = : ";
    cin>>baru;
    a=c;
    A[a]=baru;
    cout<<"\n Data yang baru = \n";
    for(b=0;b<batas;b++)
    {
        cout<<"\n Data ["<<b<<"]="<<A[b]<<"\n";
    }

    //menghapus data//
    cout<<"\n-----------------------------------------";
    cout<<endl;
    cout<<"\n Masukkan indeks yang ingin dihapus = : ";
    cin>>d;
    i=d;
    cout<<"\n Nilai yang dihapus = : ";
    cout<<" "<<A[i]<<" pada indeks ["<<i<<"]\n";
    cout<<"\n Nilai Akhir = \n";
    for (j=d;j<batas;j++)
    {
        A[j]=A[j+1];
    }
    for (k=0;k<batas;k++)
    {
        cout<<"\n Data ["<<k<<"]= "<<A[k];
    }
    getch();
    }
