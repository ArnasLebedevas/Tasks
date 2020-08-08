
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main()
{
    int pradzia, pabaiga, matrica, pagalbinis, temp, stulpelismin;
    int index=-1;
    cout<<"IVESKITE PRADZIOS TASKA NUO 1 IKI 6"<<endl;
    cin>>pradzia;
    if(pradzia<=0 || pradzia>=7)
    {
        cout<<"NETEISINGAI IVEDETE PRADZIOS VIRSUNE."<<endl;
        cout<<"IVESKITE DAR KARTA: ";
        cin>>pradzia;
        cout<<endl;
    }
    cout<<"IVESKITE PABAIGOS TASKA NUO 1 IKI 6"<<endl;
    cin>>pabaiga;
    if(pabaiga<=0 || pabaiga>=7)
    {
        cout<<"NETEISINGAI IVEDETE PABAIGOS VIRSUNE."<<endl;
        cout<<"IVESKITE DAR KARTA: ";
        cin>>pabaiga;
        cout<<endl;
    }
    cout<<endl;
    ifstream fd("Duomenys.txt");
    fd>>matrica;
    int O[matrica][matrica];
    int S[matrica];
    int P[matrica];
    int D[matrica];
    int mas[matrica];
    for(int i=0; i<matrica; i++)
    {
        for(int j=0; j<matrica; j++)
        {
            fd>>O[i][j];
        }
    }
    fd.close();
    for(int i=0; i<matrica; i++)
    {
        S[i]=0;
        mas[i]=0;
        P[i]=pradzia;
    }
    for(int i=0; i<matrica; i++)
    {
        D[i]=O[pradzia-1][i];
    }
    S[pradzia-1]=1;
    for(int o=0; o<matrica; o++)
    {
        int min=99999;
        for(int i=0; i<matrica; i++)
        {
            if(S[i]==0)
            {
                if(D[i]!=0 && D[i]!=-1 && D[i]<min)
                {
                    min=D[i];
                    stulpelismin=i+1;
                    index=i;
                }
            }
        }
        S[index]=1;
        for(int i=0; i<matrica; i++)
        {
            if(O[index][i]!=0 && O[index][i]!=-1)
            {
                pagalbinis=O[index][i];
                int vieta = i;
                temp=pagalbinis+min;
                if(temp<D[vieta])
                {
                    D[vieta]=temp;
                    P[vieta]=stulpelismin;
                }
                else if(D[vieta]==-1)
                {
                    D[vieta]=temp;
                    P[vieta]=stulpelismin;
                }
            }
        }
    }
    mas[0]=pabaiga;
    int kr=1;
    int k;
    k=P[pabaiga-1];
    if(pradzia!=pabaiga)
    {
        for(int i=0; i<matrica; i++)
        {
            mas[kr]=k;
            if(k==pradzia)
            {
                break;
            }
            kr++;
            k=P[k-1];
        }
        cout<<"KELIAS IKI IVESTOS PABAIGOS: ";
        for(int i=matrica-1; i>=0; i--)
        {
            if(mas[i]!=0)
            {
                cout<<mas[i]<<" ";
            }
        }
    }
    else
    {
        cout<<"PRADZIA SUTAMPA SU PABAIGOS VIRSUNE, TODEL KELIAVIMO ZIGSNIU IKI PABAIGOS VIRSUNES NERA"<<endl;
    }
    cout<<endl;
    cout<<"MASYVO D INFORMACIJA: ";
    for(int i=0; i<matrica; i++)
    {
        cout<<D[i]<<" ";
    }
    cout<<endl;
    cout<<"MASYVO S INFORMACIJA: ";
    for(int i=0; i<matrica; i++)
    {
        cout<<S[i]<<" ";
    }
    cout<<endl;
    cout<<"MASYVO P INFORMACIJA: ";
    for(int i=0; i<matrica; i++)
    {
        cout<<P[i]<<" ";
    }
    cout<<endl;


    return 0;
}

