#include <fcntl.h>
#include <io.h>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>
#include <ctime>
using namespace std;
struct gyventojai
{
    string vardas;
    string pavarde;
    string miestas;
    string lytis;
    unsigned gimmetai;
} Gyv[5];

void vyriausias ()
{
    int j;
    int m;
    m=Gyv[0].gimmetai;
    for(int i=0; i<4; i++)
    {
        if(Gyv[i].gimmetai<m)
        {
            m=Gyv[i].gimmetai;
            j=i;
        }
    }
    cout<<Gyv[j].vardas<<" "<<Gyv[j].pavarde<<" "<<Gyv[j].gimmetai<<" "<<Gyv[j].miestas<<" "<<Gyv[j].lytis<<" "<<endl;
}
void MiestoSpausdinimas (string Miestas)
{
    int z=0;
    for(int i=0; i<4; i++)
    {
        if(Gyv[i].miestas==Miestas)
        {
            cout<<Gyv[i].vardas<<" "<<Gyv[i].pavarde<<" "<<Gyv[i].gimmetai<<" "<<Gyv[i].miestas<<" "<<Gyv[i].lytis<<" "<<endl;
            z=1;
        }
    }
    if(z==0)
        cout<<"Tokio miesto nera"<<endl;
}
void VyrDuom(string Vyras)
{
    ofstream Failas("Rezultatai.txt");
    for(int i=0; i<4; i++)
    {
        if(Gyv[i].lytis==Vyras)
        {
            Failas<<Gyv[i].vardas<<" "<<Gyv[i].pavarde<<" "<<Gyv[i].gimmetai<<" "<<Gyv[i].miestas<<" "<<Gyv[i].lytis<<endl;
        }
    }
    Failas.close();
}
void ketvirtas (string Miestas1)
{
    int o=0;
    time_t t = time(NULL);
    tm* timePtr=localtime(&t);
    for(int i=0; i<4; i++)
    {
        if(Gyv[i].miestas==Miestas1 && ((timePtr->tm_year)+1900)-Gyv[i].gimmetai>30)
        {
            cout<<Gyv[i].vardas<<" "<<Gyv[i].pavarde<<" "<<Gyv[i].gimmetai<<" "<<Gyv[i].miestas<<" "<<Gyv[i].lytis<<" "<<endl;
            o=1;
        }
    }
    if(o==0)
    {
        cout<<endl;
        cout<<"Nera tokio ieskamo zmogaus"<<endl;
    }
}
void pilnameciai()
{
    time_t e = time(NULL);
    tm* timePtr=localtime(&e);
    for(int i=0; i<4; i++)
    {
        if(((timePtr->tm_year)+1900)-Gyv[i].gimmetai>=18)
        {
            cout<<Gyv[i].vardas<<" "<<Gyv[i].pavarde<<" "<<Gyv[i].gimmetai<<" "<<Gyv[i].miestas<<" "<<Gyv[i].lytis<<" "<<endl;
        }
    }
}
int main()
{
    ifstream fd("gyventojai.txt");
    for(int i=0; i<4; i++)
    {
        fd>>Gyv[i].vardas>>Gyv[i].pavarde>>Gyv[i].gimmetai>>Gyv[i].miestas>>Gyv[i].lytis;
    }
    fd.close();
    int pasirinkimas;
    do
    {
        cout<<"Rastu vyriausia sarase esanti gyventoja. Spauskite 1"<<endl;
        cout<<"Ekrane atspausdintu visus pasirinkto miesto gyventojus. Spauskite 2"<<endl;
        cout<<"Faile patalpintu duomenis visu sarase esanciu vyru. Spauskite 3"<<endl;
        cout<<"Atspausdintu tik tuos gyventojus, kurie gyvena pasirinktame mieste ir yra vyresni kaip 30 metu. Spauskite 4"<<endl;
        cout<<"Atspausdintu pilnamecius. Spauskite 5"<<endl;
        cin>>pasirinkimas;
        if(pasirinkimas==1)
        {
            vyriausias ();
            cout<<endl;
        }
        else if(pasirinkimas==2)
        {
            string Miestas;
            cout<<"Iveskite pasirinkto miesto pavadinima"<<endl;
            cin>>Miestas;
            MiestoSpausdinimas (Miestas);
            cout<<endl;
        }
        else if (pasirinkimas==3)
        {
            string Vyras;
            cout<<"Iveskite lyti kuria norite talpinti i faila"<<endl;
            cin>>Vyras;
            cout<<"****************  IVYKDYTA  ******************"<<endl;
            VyrDuom(Vyras);
            cout<<endl;

        }
        else if (pasirinkimas==4)
        {
            string Miestas1;
            cout<<"Pasirinkite miesta"<<endl;
            cin>>Miestas1;
            ketvirtas(Miestas1);
            cout<<endl;
        }
        else if(pasirinkimas==5)
        {
            string Miestas1;
            pilnameciai();
            cout<<endl;
        }
    }
    while(pasirinkimas!=5);

    return 0;
}
