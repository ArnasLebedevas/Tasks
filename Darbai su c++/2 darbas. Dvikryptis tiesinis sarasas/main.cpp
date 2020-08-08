#include <iostream>

using namespace std;
struct tipas
{
    int data;
    tipas *next;
    tipas *prev;
};
void spausdinimas1 (int &n, tipas *&pirmas, tipas *&galas, tipas *&naujas, tipas *&temp)
{
    naujas=pirmas;
    int k=1;
    while(naujas!=NULL)
    {
        cout <<k<<". "<< naujas->data <<endl;
        naujas=naujas->next;
        k++;
    }
    if(pirmas==NULL)
    {
        cout<<"SARASAS TUSCIAS"<<endl;
    }
}
void spausdinimas2 (int &n, tipas *&pirmas, tipas *&galas, tipas *&naujas, tipas *&temp)
{
    naujas=galas;
    int k=n;
    while(naujas!=NULL)
    {
        cout <<k<<". "<<naujas->data <<endl;
        naujas=naujas->prev;
        k--;
    }
    if(galas == NULL)
    {
        cout<<"SARASAS TUSCIAS"<<endl;
    }

}
void iterpimas (int &n, tipas *&pirmas, tipas *&galas, tipas *&naujas, tipas *&temp)
{
    int pasirinkimas;
    cout<<"Kurioje pozicijoje norite iterpti?"<<endl;
    cin>>pasirinkimas;
    if(pasirinkimas == 1)
    {
        naujas = new tipas;
        cout<<"IVESKITE PIRMA ELEMENTO DATA"<<endl;
        cin>>naujas->data;
        naujas->next=pirmas;
        naujas->prev=NULL;
        pirmas=naujas;
        n++;

    }
    else if(pasirinkimas>1 && pasirinkimas<=n)
    {
        tipas *pries, *po;
        pries = pirmas;
        po = pirmas;
        int k;
        k=pasirinkimas;
        for(int i=0; i<k-1; i++)
        {
            po=po->next;
        }
        for(int j=0; j<k-2; j++)
        {
            pries=pries->next;
        }

        naujas = new tipas;
        cout<<"IVESKITE ELEMENTO DATA"<<endl;
        cin>>naujas->data;
        pries->next=naujas;
        naujas->prev=pries;
        naujas->next=po;
        po->prev=naujas;
        n++;
    }
    else if(pasirinkimas==n+1)
    {
        naujas = new tipas;
        cout<<"IVESKITE ELEMENTO DATA"<<endl;
        cin>>naujas->data;
        galas->next=naujas;
        naujas->prev=galas;
        galas=naujas;
        naujas->next=NULL;
        n++;
    }
    else if(pasirinkimas!=n)
    {
        cout<<"TOKIO ELEMENTO NERA"<<endl;
    }
}
void pries (int &n, tipas *&pirmas, tipas *&galas, tipas *&naujas, tipas *&temp)
{
    tipas *one, *two;
    bool rasta=false;
    one = pirmas;
    int pasirinkimas10;
    cout<<"IVEKSITE DATA PRIES KURI ELEMENTA ITERPTI NAUJA?"<<endl;
    cin>>pasirinkimas10;
    if(pasirinkimas10==pirmas->data)
    {
        naujas = new tipas;
        cout<<"IVESKITE ELEMENTO DATA"<<endl;
        cin>>naujas->data;
        pirmas->prev=naujas;
        naujas->next=pirmas;
        naujas->prev=NULL;
        pirmas=naujas;
    }
    else
    {
        two = one;
        one = one->next;
        while (one!=NULL)
        {
            if(one->data == pasirinkimas10)
            {
                naujas = new tipas;
                cout<<"IVESKITE ELEMENTO DATA"<<endl;
                naujas->next=NULL;
                naujas->prev=NULL;
                cin>>naujas->data;
                naujas->next=one;
                one->prev=naujas;
                two->next=naujas;
                naujas->prev=two;
                rasta=true;
                break;
            }
            two = one;
            one = one->next;
        }
        if(rasta==false)
        {
            cout<<"TOKIO ELEMENTO NERA"<<endl;
        }
    }
}
void koreguoti (int &n, tipas *&pirmas, tipas *&galas, tipas *&naujas, tipas *&temp)
{
    bool rasti = false;
    int keisti;
    temp = pirmas;
    cout<<"IVESKITE DATA KURI NORITE PAKEISTI"<<endl;
    cin>>keisti;
    if(keisti==pirmas->data)
    {
        cout<<"IVESKITE PIRMO ELEMENTO DATA"<<endl;
        cin>>pirmas->data;
        return;
    }
    temp=temp->next;
    while(temp!= NULL)
    {
        if(temp->data == keisti)
        {
            cout<<"IVESKITE SKAICIU"<<endl;
            cin>>temp->data;
            rasti=true;
            break;
        }
        temp=temp->next;
    }
    if(rasti==false)
    {
        cout<<"TOKIO ELEMENTO NERA"<<endl;
    }

}
void trinti (int &n, tipas *&pirmas, tipas *&galas, tipas *&naujas, tipas *&temp)
{
    tipas *vienas, *du;
    bool tikrinti = false;
    int pasirinkimas5;
    cout<<"IVESKITE ELEMENTO DATA, KURI NORITE ISTRINTI"<<endl;
    cin>>pasirinkimas5;
    if(pasirinkimas5 == pirmas->data)
    {
        naujas=pirmas;
        pirmas=pirmas->next;
        delete naujas;
        if(pirmas!=NULL)
        {
            pirmas->prev=NULL;
        }
        else
        {
            galas=NULL;
        }

        cout<<"ISTRINTA"<<endl;
        tikrinti=true;
        return;

    }
    else if(pasirinkimas5 == galas->data)
    {
        naujas = galas;
        vienas = naujas;
        vienas=vienas->prev;
        galas = galas->prev;
        delete naujas;
        vienas->next=NULL;
        tikrinti =true;
        cout<<"ISTRINTA"<<endl;
        return;
    }

   else
    {
        naujas = pirmas;
        naujas=naujas->next;
        while(naujas != NULL)
        {
            if(naujas->data == pasirinkimas5)
            {
                vienas=naujas;
                vienas=vienas->next;
                du=naujas;
                du=du->prev;
                vienas->prev=du;
                du->next=vienas;
                delete naujas;
                tikrinti=true;
                cout<<"ISTRINTA"<<endl;
                return;
            }
            naujas=naujas->next;
        }
        if(tikrinti==false)
        {
            cout<<"TOKIO ELEMENTO NERA"<<endl;
            return;
        }
    }
}
void Sarasotrinimas (int &n, tipas *&pirmas, tipas *&galas, tipas *&naujas, tipas *&temp)
{
    if(pirmas==NULL && galas ==NULL)
    {
        cout<<"SARASO NERA"<<endl;
        return;
    }
    int choose;
    cout<<endl;
    cout<<"PASIRINKITE TRINIMO BUDA"<<endl;
    cout<<"1. NUO PRADZIU"<<endl;
    cout<<"2. NUO GALO"<<endl;
    cin>>choose;
    if(choose == 1)
    {
        while(pirmas!=NULL)
        {
            temp=pirmas->next;
            delete pirmas;
            pirmas=temp;

        }
        galas=NULL;
        cout<<"ISTRINTAS SARASAS NUO PRADZIU"<<endl;
    }
    else if(choose == 2)
    {
        while(galas!=NULL)
        {
            galas->next=NULL;
            temp=galas->prev;
            delete galas;
            galas=temp;

        }
        pirmas=NULL;
        cout<<"ISTRINTAS SARASAS NUO GALO"<<endl;
    }
    else
        cout<<"PASIRINKOTE NETEISINGAI"<<endl;
}
void Paieska (int &n, tipas *&pirmas, tipas *&galas, tipas *&naujas, tipas *&temp)
{
    bool patikra=false;
    int paieska;
    int sumuoti=1;
    cout<<"IVESKITE DATA KURIO KURIO ELEMENTO IESKOTE"<<endl;
    cin>>paieska;
    naujas = pirmas;
    if(paieska == pirmas->data)
    {
        cout<<"PIRMAS ELEMENTAS *"<<pirmas->data<<"* ELEMENTO POZICIJA "<<sumuoti<<"*"<<endl;
        patikra=true;
        return;
    }
    else
    {
        naujas=naujas->next;
        sumuoti=2;
        while(naujas!=NULL)
        {
            if(paieska==naujas->data)
            {
                cout<<"ELEMENTO DATA *"<<naujas->data<<"* ELEMENTO POZICIJA *"<<sumuoti<<"*"<<endl;
                patikra==true;
                return;
            }
            naujas=naujas->next;
            sumuoti++;
        }
        if(patikra==false)
        {
            cout<<"NERA TOKIO ELEMENTO"<<endl;
            return;
        }
    }
}
void trinimasel (int &n, tipas *&pirmas, tipas *&galas, tipas *&naujas, tipas *&temp)
{
    tipas *vienas, *du;
    int sumuoti = 1;
    bool tikrinti = false;
    int pasirinkimas5;
    cout<<"IVESKITE ELEMENTO POZICIJA, KURIA NORITE ISTRINTI"<<endl;
    cin>>pasirinkimas5;
    if(pasirinkimas5 == sumuoti)
    {
        naujas=pirmas;
        pirmas=pirmas->next;
        delete naujas;
        if(pirmas!=NULL)
        {
            pirmas->prev=NULL;
        }
        else
        {
            galas=NULL;
        }

        cout<<"ISTRINTA"<<endl;
        tikrinti=true;
        n--;
        return;

    }
    else if(pasirinkimas5 == n)
    {
        naujas = galas;
        vienas = naujas;
        vienas=vienas->prev;
        galas = galas->prev;
        delete naujas;
        vienas->next=NULL;
        tikrinti =true;
        cout<<"ISTRINTA"<<endl;
        n--;
        return;
    }

   else
    {
        sumuoti = 2;
        naujas = pirmas;
        naujas=naujas->next;
        while(naujas != NULL)
        {
            if(sumuoti == pasirinkimas5)
            {
                vienas=naujas;
                vienas=vienas->next;
                du=naujas;
                du=du->prev;
                vienas->prev=du;
                du->next=vienas;
                delete naujas;
                tikrinti=true;
                cout<<"ISTRINTA"<<endl;
                n--;
                return;
            }
            sumuoti++;
            naujas=naujas->next;
        }
        if(tikrinti==false)
        {
            cout<<"TOKIO ELEMENTO NERA"<<endl;
            return;
        }
    }
}
void ivedimas (int &n, tipas *&pirmas, tipas *&galas, tipas *&naujas, tipas *&temp)
{
    if(pirmas==NULL)
    {
    int k=2;
    cout << "Iveskite elementu kieki"<<endl;
    cin >> n;
    naujas = new tipas;
    cout << "1-ojo Saraso elementa"<<endl;
    cin>>naujas->data;
    pirmas=naujas;
    pirmas->prev=NULL;
    int funkcija;
    for(int i=0; i<n-1; i++)
    {
        temp = naujas;
        naujas->next= new tipas;
        naujas=naujas->next;
        cout<<k<<"-ojo"<<" Saraso elementa"<<endl;
        cin>>naujas->data;
        naujas->prev=temp;
        k++;
    }
    naujas->next=NULL;
    galas = naujas;
    }
    else
    {
        cout<<"SARASAS EGZISTUOJA"<<endl;
    }

}
int main()
{
    tipas *pirmas, *galas, *naujas, *temp;
    int n;
    int k=2;
    cout << "Iveskite elementu kieki"<<endl;
    cin >> n;
    naujas = new tipas;
    cout << "1-ojo Saraso elementa"<<endl;
    cin>>naujas->data;
    pirmas=naujas;
    pirmas->prev=NULL;
    int funkcija;
    for(int i=0; i<n-1; i++)
    {
        temp = naujas;
        naujas->next= new tipas;
        naujas=naujas->next;
        cout<<k<<"-ojo"<<" Saraso elementa"<<endl;
        cin>>naujas->data;
        naujas->prev=temp;
        k++;
    }
    naujas->next=NULL;
    galas = naujas;
    while(true)
    {
        cout<<endl;
        cout<<"************************************************************"<<endl;
        cout<<"1. SARASO SPAUSDINIMAS NUO PRADZIOS"<<endl;
        cout<<"------------------------------------------------------------"<<endl;
        cout<<"2. SARASO SPAUSDINIMAS NUO GALO"<<endl;
        cout<<"------------------------------------------------------------"<<endl;
        cout<<"3. ITERPIA NAUJA ELEMENTA I NURODYTA SARASO POZICIJA"<<endl;
        cout<<"------------------------------------------------------------"<<endl;
        cout<<"4. ITERPIA ELEMENTA PRIES TIESINIO SARASO POZICIJA"<<endl;
        cout<<"------------------------------------------------------------"<<endl;
        cout<<"5. KOREGUOTI DUOMENIS"<<endl;
        cout<<"------------------------------------------------------------"<<endl;
        cout<<"6. ISTRINA PASIRINKTA REIKSME"<<endl;
        cout<<"------------------------------------------------------------"<<endl;
        cout<<"7. ISTRINA TIESINI SARASA"<<endl;
        cout<<"------------------------------------------------------------"<<endl;
        cout<<"8. ATLIEKA ELEMENTO PAIESKA SARASE"<<endl;
        cout<<"------------------------------------------------------------"<<endl;
        cout<<"9. ISTRINA PASIRINKTOJE POZICIJOJE ESANTI ELEMENTA"<<endl;
        cout<<"------------------------------------------------------------"<<endl;
        cout<<"10. SUKURIAMAS SARASAS"<<endl;
        cout<<"************************************************************"<<endl;
        cout<<"                   PASIRINKITE FUNKCIJA "<<endl;
        cin>>funkcija;
        cout<<endl;
        if(funkcija==1)
        {
            spausdinimas1(n, *&pirmas, *&galas, *&naujas, *&temp);
        }
        if(funkcija==2)
        {
            spausdinimas2(n, *&pirmas, *&galas, *&naujas, *&temp);
        }
        if(funkcija==3)
        {
            iterpimas(n, *&pirmas, *&galas, *&naujas, *&temp);
        }
        if(funkcija==4)
        {
            pries(n, *&pirmas, *&galas, *&naujas, *&temp);
        }
        if(funkcija==5)
        {
            koreguoti(n, *&pirmas, *&galas, *&naujas, *&temp);
        }
        if(funkcija==6)
        {
            trinti(n, *&pirmas, *&galas, *&naujas, *&temp);
        }
        if(funkcija==7)
        {
            Sarasotrinimas(n, *&pirmas, *&galas, *&naujas, *&temp);
        }
        if (funkcija == 8)
        {
            Paieska(n, *&pirmas, *&galas, *&naujas, *&temp);
        }
        if(funkcija==9)
        {
            trinimasel(n, *&pirmas, *&galas, *&naujas, *&temp);
        }
        if(funkcija==10)
        {
            ivedimas(n, *&pirmas, *&galas, *&naujas, *&temp);
        }
    }

    return 0;
}
