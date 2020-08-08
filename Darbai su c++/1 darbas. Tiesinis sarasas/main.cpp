#include <iostream>
using namespace std;
struct tipas
{
    int data;
    tipas *next;
};
void spausdinimas(int &n, tipas *&pirmas, tipas *&galas, tipas *&naujas, tipas *&temp, tipas *&rodykle2, tipas *&vienas, tipas *&du, tipas *&one, tipas *&two)
{
    temp=pirmas;
    cout<<endl;
    int o=1;

    while(temp!=NULL)
    {
        cout<<o<<": "<<temp->data<<" "<<endl;
        temp=temp->next;
        o++;
    }
    if(pirmas==NULL)
    {
        cout<<"SARASAS TUSCIAS"<<endl;
    }

}
void iterpimas(int &n, tipas *&pirmas, tipas *&galas, tipas *&naujas, tipas *&temp, tipas *&rodykle2, tipas *&vienas, tipas *&du, tipas *&one, tipas *&two)
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
        pirmas=naujas;

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
        naujas->next=po;
        n++;
    }
    else if(pasirinkimas==n+1)
    {
        naujas = new tipas;
        cout<<"IVESKITE ELEMENTO DATA"<<endl;
        cin>>naujas->data;
        galas->next=naujas;
        galas=naujas;
        n++;
    }
    else if(pasirinkimas>n)
    {
        cout<<"TOKIO ELEMENTO NERA"<<endl;
    }
}
void trinimas(int &n, tipas *&pirmas, tipas *&galas, tipas *&naujas, tipas *&temp, tipas *&rodykle2, tipas *&vienas, tipas *&du, tipas *&one, tipas *&two)
{
    while(pirmas!=NULL)
    {
        rodykle2=pirmas->next;
        delete pirmas;
        pirmas=rodykle2;
    }
    cout<<"ISTRINTA"<<endl;
}
void trinimas2(int &n, tipas *&pirmas, tipas *&galas, tipas *&naujas, tipas *&temp, tipas *&rodykle2, tipas *&vienas, tipas *&du, tipas *&one, tipas *&two)
{
    bool tikrinti = false;
    vienas = pirmas;
    int pasirinkimas5;
    cout<<"IVESKITE ELEMENTO DATA, KURI NORITE ISTRINTI"<<endl;
    cin>>pasirinkimas5;
    if(pasirinkimas5 == pirmas->data)
    {
        delete vienas;
        pirmas=pirmas->next;
        tikrinti=true;
        cout<<"ISTRINTA"<<endl;
        return;
    }
    else
    {
        du=vienas;
        vienas=vienas->next;
        while(vienas != NULL)
        {
            if(vienas->data == pasirinkimas5)
            {
                tikrinti=true;
                delete vienas;
                du->next=vienas->next;
                cout<<"ISTRINTA"<<endl;
                break;
            }
             du=vienas;
            vienas=vienas->next;
        }
        if(tikrinti==false)
        {
            cout<<"TOKIO ELEMENTO NERA"<<endl;
            return;
        }
    }

}
void iterpimas2(int &n, tipas *&pirmas, tipas *&galas, tipas *&naujas, tipas *&temp, tipas *&rodykle2, tipas *&vienas, tipas *&du, tipas *&one, tipas *&two)
{
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
        naujas->next=pirmas;
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
                cin>>naujas->data;
                naujas->next=one;
                two->next=naujas;
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
void pradines (int &n, tipas *&pirmas, tipas *&galas, tipas *&naujas, tipas *&temp, tipas *&rodykle2, tipas *&vienas, tipas *&du, tipas *&one, tipas *&two)
{
    if(pirmas!=NULL)
    {
   trinimas(n, *&pirmas, *&galas, *&naujas,*&temp, *&rodykle2, *&vienas, *&du, *&one, *&two);
    cout<<"*EGZISTUOJANTIS SARASAS YRA ISTRINTAS, TODEL YRA SUKURIAMAS NAUJAS SARASAS*"<<endl<<endl;
    cout<<"Iveskite elementu kieki"<<endl;
    cin>>n;
    pirmas = new tipas;
    galas=pirmas;
    naujas=pirmas;
    cout<<"1-ojo Saraso elementa"<<endl;
    cin>>pirmas->data;
    pirmas->next=NULL;
    int k=2;
    for(int i=0; i<n-1; i++)
    {
        naujas = new tipas;
        cout<<k<<"-ojo"<<" Saraso elementa"<<endl;
        cin>>naujas->data;
        naujas->next=NULL;
        galas->next=naujas;
        galas=naujas;
        k++;
    }
    }
    else
    {
    cout<<"*SARASAS NEEGZISTUOJA, BET YRA SUKURIAMAS NAUJAS*"<<endl<<endl;
    cout<<"Iveskite elementu kieki"<<endl;
    cin>>n;
    pirmas = new tipas;
    galas=pirmas;
    naujas=pirmas;
    cout<<"1-ojo Saraso elementa"<<endl;
    cin>>pirmas->data;
    pirmas->next=NULL;
    int k=2;
    for(int i=0; i<n-1; i++)
    {
        naujas = new tipas;
        cout<<k<<"-ojo"<<" Saraso elementa"<<endl;
        cin>>naujas->data;
        naujas->next=NULL;
        galas->next=naujas;
        galas=naujas;
        k++;
    }
    }

}

int main()
{
    int n;
    tipas *pirmas, *galas, *naujas, *temp, *rodykle2, *vienas, *du, *one, *two;
        cout<<"Iveskite elementu kieki"<<endl;
    cin>>n;
    pirmas = new tipas;
    galas=pirmas;
    naujas=pirmas;
    cout<<"1-ojo Saraso elementa"<<endl;
    cin>>pirmas->data;
    pirmas->next=NULL;
    int k=2;
    for(int i=0; i<n-1; i++)
    {
        naujas = new tipas;
        cout<<k<<"-ojo"<<" Saraso elementa"<<endl;
        cin>>naujas->data;
        naujas->next=NULL;
        galas->next=naujas;
        galas=naujas;
        k++;
    }

    while(true)
    {
        int funkcija;
        cout<<endl<<endl;
        cout<<"************************************************************"<<endl;
        cout<<"1. SARASO SPAUSDINIMAS"<<endl;
        cout<<"------------------------------------------------------------"<<endl;
        cout<<"2. ITERPIA NAUJA ELEMENTA I NURODYTA TIESINIO SARASO POZICIJA"<<endl;
        cout<<"------------------------------------------------------------"<<endl;
        cout<<"3. ISTRINA TIESINI SARASA"<<endl;
        cout<<"------------------------------------------------------------"<<endl;
        cout<<"4. ISTRINA PASIRINKTA TIESINIO SARASO ELEMENTA"<<endl;
        cout<<"------------------------------------------------------------"<<endl;
        cout<<"5. ITERPIA ELEMENTA PRIES TIESINIO SARASO POZICIJA"<<endl;
        cout<<"------------------------------------------------------------"<<endl;
        cout<<"6. SUKURIA TIESINI SARASA"<<endl;
        cout<<"************************************************************"<<endl<<endl;
        cout<<"                   PASIRINKITE FUNKCIJA "<<endl;
        cin>>funkcija;
        if(funkcija==1)
        {
            spausdinimas(n, *&pirmas, *&galas, *&naujas, *&temp, *&rodykle2, *&vienas, *&du, *&one, *&two);
        }
        if(funkcija==2)
        {
            iterpimas(n, *&pirmas, *&galas, *&naujas,*&temp, *&rodykle2, *&vienas, *&du, *&one, *&two);
        }
        if(funkcija==3)
        {
            trinimas(n, *&pirmas, *&galas, *&naujas,*&temp, *&rodykle2, *&vienas, *&du, *&one, *&two);
        }
        if(funkcija==4)
        {
            trinimas2(n, *&pirmas, *&galas, *&naujas, *&temp, *&rodykle2, *&vienas, *&du, *&one, *&two);
        }
        if(funkcija==5)
        {
            iterpimas2(n, *&pirmas, *&galas, *&naujas,*&temp,*&rodykle2, *&vienas, *&du, *&one, *&two);
        }
        if(funkcija==6)
        {
            pradines(n, *&pirmas, *&galas, *&naujas,*&temp,*&rodykle2, *&vienas, *&du, *&one, *&two);
        }
    }
    return 0;
}
