#include <fcntl.h>
#include <io.h>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <new>
#include <fstream>
#include <cmath>
#include <string>
#include <ctime>
using namespace std;
struct duomenys
{
    string autorius;
    string pav;
    int isleista;
    int puslapiai;
};

int main()
{
    int pasirinkimas;
    duomenys* p1;
    duomenys* p2;
    duomenys* p3;
    p1 = new duomenys;
    p2 = new duomenys;
    p3 = new duomenys;
    p1->autorius = "Antanas Skema";
    p1->pav = "Balta drobule";
    p1->isleista = 2013;
    p1->puslapiai = 239;
    p2->autorius = "Kristijonas Donelaitis";
    p2->pav = "Metai";
    p2->isleista = 1818;
    p2->puslapiai = 190;
    p3->autorius = "Antanas Baranauskas";
    p3->pav = "Anyksciu silelis";
    p3->isleista = 1861;
    p3->puslapiai = 30;
    cout<<"                                    MASYVO TURINYS"<<endl;
    cout<<endl;
    cout<<"Autorius: "<<p1->autorius<<" Pavadinimas: "<<p1->pav<<" Isleista: "<<p1->isleista<<" Puslapiai: "<<p1->puslapiai<<endl;
    cout<<endl;
    cout<<"Autorius: "<<p2->autorius<<" Pavadinimas: "<<p2->pav<<" Isleista: "<<p2->isleista<<" Puslapiai: "<<p2->puslapiai<<endl;
    cout<<endl;
    cout<<"Autorius: "<<p3->autorius<<" Pavadinimas: "<<p3->pav<<" Isleista: "<<p3->isleista<<" Puslapiai: "<<p3->puslapiai<<endl;
    cout<<endl;
    do
    {
        cout<<endl;
        cout<<"Seniausiai isleista knyga. Spauskite 1"<<endl;
        cout<<"Daugiausiai puslapiu turinti knyga. Spauskite 2"<<endl;
        cout<<"Spausdina knygu pavadinimus. Spauskite 3"<<endl;
        cout<<"Pasirinkite"<<endl;
        cin>>pasirinkimas;
        cout<<endl;
        if(pasirinkimas==1)
        {
            int m, z, c;
            m=p1->isleista;
            c=p2->isleista;
            z=p3->isleista;
            if(m<c && m<z)
            {
                cout<<p1->isleista;
            }
            else if(c<m && c<z)
            {
                cout<<p2->isleista;
            }
            else if(z<m && z<c)
            {
                cout<<p3->isleista;
            }
            else if(m=c)
            {
                cout<<p1->autorius<<" ir "<<p2->autorius<<" KNYGOS ISLEIDIMO METAI VIENODI "<<p1->isleista<<"m"<<endl;
            }
            else if(m=z)
            {
                cout<<p1->autorius<<" ir "<<p3->autorius<<" KNYGOS ISLEIDIMO METAI VIENODI "<<p1->isleista<<"m"<<endl;
            }
            else if(c=z)
            {
                cout<<p2->autorius<<" ir "<<p3->autorius<<" KNYGOS ISLEIDIMO METAI VIENODI "<<p2->isleista<<"m"<<endl;
            }
            cout<<endl;
        }
        if(pasirinkimas==2)
        {
            int q,y,d;
            q=p1->puslapiai;
            y=p2->puslapiai;
            d=p3->puslapiai;
            if(q>y && q>d)
            {
                cout<<p1->pav;
            }
            else if(y>q && y>d)
            {
                cout<<p2->pav;
            }
            else if(d>q && d>y)
            {
                cout<<p2->pav;
            }
            else if(q=y)
            {
                cout<<p1->autorius<<" ir "<<p2->autorius<<" KNYGOS PUSLAPIAI VIENODI "<<p1->pav<<"m"<<endl;
            }
            else if(q=d)
            {
                cout<<p1->autorius<<" ir "<<p3->autorius<<" KNYGOS PUSLAPIAI VIENODI "<<p1->pav<<"m"<<endl;
            }
            else if(y=d)
            {
                cout<<p2->autorius<<" ir "<<p3->autorius<<" KNYGOS PUSLAPIAI VIENODI "<<p2->pav<<"m"<<endl;
            }
        }
        if (pasirinkimas==3)
        {
            string p;
            string k;
            string a;
            p=p1->autorius;
            k=p2->autorius;
            a=p3->autorius;
            if(p==k)
            {
                cout<<p1->pav<<" ir "<<p2->pav<<endl;
            }
            else if(p==a)
            {
                cout<<p1->pav<<" ir "<<p3->pav<<endl;
            }
            else if(k==a)
            {
                cout<<p2->pav<<" ir "<<p3->pav<<endl;
            }
            else if(p==k && p==a && k==a)
            {
                cout<<"VISI KNYGU AUTORIAI TOKIE PAT: "<<p1->autorius<<endl;
            }
            else
                cout<<"*VISOS KNYGOS SKIRTINGU AUTORIU*"<<endl;
        }
    }
    while (pasirinkimas!=3);
    return 0;
}
