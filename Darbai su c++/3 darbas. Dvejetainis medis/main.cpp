#include <iostream>

using namespace std;
struct tipas
{
    int data;
    tipas *left;
    tipas *right;
};
void sukurimas(int &n, tipas *&root, tipas *&temp, int &v)
{
    if(root!=NULL)
    {
        cout<<"MEDYJE YRA ELEMENTU"<<endl<<endl;
        return;
    }
    int c=0;
    root=NULL;
    cout<<"IVESKITE ELEMENTU KIEKI MEDYJE"<<endl;
    cin>>n;

    while(c<n)
    {
        if(root==NULL)
        {
            root = new tipas;
            cout<<"IVESKITE SAKNIES SKAICIU"<<endl;
            cin>>root->data;
            root->left=NULL;
            root->right=NULL;
        }
        else
        {
            temp=root;
            cout<<"IVESKITE ELEMENTA"<<endl;
            cin>>v;
            while(true)
            {
                if(v<temp->data)
                {
                    if(temp->left==NULL)
                    {
                        temp->left= new tipas;
                        temp=temp->left;
                        temp->data=v;
                        temp->left=NULL;
                        temp->right=NULL;
                        cout<<"*SKAICIUS IVESTAS KAIREJE*"<<endl;
                        break;
                    }
                    else if(temp->left!=NULL)
                    {
                        temp=temp->left;
                    }
                }
                if(v>temp->data)
                {
                    if(temp->right==NULL)
                    {
                        temp->right= new tipas;
                        temp=temp->right;
                        temp->data=v;
                        temp->left=NULL;
                        temp->right=NULL;
                        cout<<"*SKAICIUS IVESTAS DESINEJE*"<<endl;
                        break;
                    }
                    else if(temp->right!=NULL)
                    {
                        temp=temp->right;
                    }
                }
                if(v==temp->data)
                {
                    if(temp->right==NULL)
                    {
                        temp->right=new tipas;
                        temp=temp->right;
                        temp->data=v;
                        temp->left=NULL;
                        temp->right=NULL;
                        cout<<"*SKAICIUS SUTAMPA IR JIS YRA TALPINAMAS I DESINE PUSE*"<<endl;
                        break;
                    }
                    else if(temp->right!=NULL)
                    {
                        temp=temp->right;
                    }
                }

            }
        }
        c++;
    }
}
void spausdinimas (int &n, tipas *&root, tipas *&temp, tipas *&curr)
{
    int ieskojimas;
    int gylis=0;
    cout<<"*IVESKITE ELEMENTA KURIO IESKOTE*"<<endl;
    cin>>ieskojimas;
    temp=root;
    if(ieskojimas==root->data)
    {
        cout<<"TAI YRA SAKNIES ELEMENTAS "<<"*"<<ieskojimas<<"*"<<endl;
        return;
    }
    while(temp!=NULL)
    {
        gylis++;
        if(temp->data==ieskojimas)
        {
            cout<<"ELEMENTAS SURASTAS "<<"*"<<ieskojimas<<"*"<<" ELEMENTO GYLIS "<<"*"<<gylis<<"*"<<endl;
            return;
        }
        else if(temp->data>ieskojimas)
        {
            temp=temp->left;
        }
        else
        {
            temp=temp->right;
        }
    }
    cout<<"TOKIO ELEMENTO NERA"<<endl;
    return;
}
void infix (tipas *&root, int & ieskojimas2)
{
    if(root==NULL)
    {
        cout<<"MEDIS TUSCIAS"<<endl<<endl;
        return;
    }
    if(root!=NULL)
    {
        if(root->left!=NULL)
        {
            infix(root->left, ieskojimas2);
        }
        cout<<root->data<<endl;
        if(root->right!=NULL)
        {
            infix(root->right, ieskojimas2);
        }
    }

}
void prefix(tipas *&root, int & ieskojimas2)
{
    if(root==NULL)
    {
        cout<<"MEDIS TUSCIAS"<<endl<<endl;
        return;
    }
    if(root!=NULL)
    {
        cout<<root->data<<endl;
        if(root->left!=NULL)
        {
            prefix(root->left, ieskojimas2);
        }
        if(root->right!=NULL)
        {
            prefix(root->right, ieskojimas2);
        }
    }

}
void postfix(tipas *&root, int & ieskojimas2)
{
    if(root==NULL)
    {
        cout<<"MEDIS TUSCIAS"<<endl<<endl;
        return;
    }
    if(root!=NULL)
    {
        if(root->left!=NULL)
        {
            postfix(root->left, ieskojimas2);
        }
        if(root->right!=NULL)
        {
            postfix(root->right, ieskojimas2);
        }
        cout<<root->data<<endl;
    }
}
void insertt(int &n, tipas *&root, tipas *&temp, tipas *&curr, int & ieskojimas2, int & v)
{
    if(root==NULL)
    {
        int pasirinkimas;
        cout<<"MEDIS YRA TUSCIAS"<<endl<<endl;
        cout<<"1. NORINT SUKURTI MEDI IS NAUJO"<<endl;
        cout<<"0. ATSAUKTI"<<endl;
        cin>>pasirinkimas;
        if(pasirinkimas==1)
        {
            sukurimas(n, *&root, *&temp, v);
        }
        else
        {
            cout<<"ATSAUKTA"<<endl<<endl;
            return;
        }
    }
    tipas *p;
    cout<<"*IVESKITE ELEMENTO REIKSME*"<<endl;
    cin>>ieskojimas2;
    curr=root;
    temp= new tipas;
    temp->data=ieskojimas2;
    while(curr)
    {
        p=curr;
        if(temp->data>curr->data)
        {
            curr=curr->right;
        }
        else
        {
            curr=curr->left;
        }
    }
    if(temp->data>p->data)
    {
        p->right=temp;
        temp->right=NULL;
        temp->left=NULL;
        cout<<"ELEMENTAS ITERTPAS DESINEJE"<<endl;
    }
    else
    {
        p->left=temp;
        temp->right=NULL;
        temp->left=NULL;
        cout<<"ELEMENTAS ITERPTAS KAIREJE"<<endl;
    }
}
void trinimas(tipas *&root, tipas *&curr, int & ieskojimas2)
{
    if(root==NULL)
    {
        cout<<"MEDIS YRA TUSCIAS"<<endl<<endl;
        return;
    }
    tipas *pagalbinis;
    cout<<"IVESKITE ELEMENTA KURI NORITE ISTRINTI"<<endl;
    cin>>ieskojimas2;
    bool found = false;
    curr=root;
    if(ieskojimas2==root->data)
    {

        tipas *pagalba, *pagalba2, *pagalba3, *kitas;

        if(root->left==NULL && root->right!=NULL)
        {

            pagalba=root;
            root=root->right;
            pagalba->data=root->data;
            cout<<pagalba->data<<"**"<<endl;
            delete pagalba;
            cout<<"VIRSURE ISTRINTA, DESINYSIS VAIKAS TAMPA VIRSUNE"<<endl;
            return;
        }
        else if(root->right==NULL && root->left!=NULL)
        {

            pagalba=root;
            root=root->left;
            pagalba->data=root->data;
            cout<<pagalba->data<<"**"<<endl;
            delete pagalba;
            cout<<"VIRSURE ISTRINTA, KAIRYSIS VAIKAS TAMPA VIRSUNE"<<endl;
            return;
        }
        if(root->right!=NULL && root->left!=NULL)
        {
            pagalba = root;
            pagalba=pagalba->right;
            while(pagalba->left!=NULL)
            {
                pagalba2=pagalba;
                pagalba=pagalba->left;
            }
            if(pagalba->right!=NULL && pagalba->left==NULL)
            {
                kitas=pagalba;
                pagalba2->left=kitas->right;
                kitas->left=NULL;
                kitas->right=NULL;
            }
            else if(pagalba2->right==NULL && pagalba2->left==NULL)
            {
                pagalba2->right=NULL;
                pagalba2->left=NULL;
            }
             else if(pagalba->right==NULL && pagalba->left==NULL)
            {
                pagalba2->left=NULL;
            }
            root->data=pagalba->data;
            delete pagalba;
            cout<<"VIRSUNE ISTRINTA, VIRSUNE TAMPA DESINIOSIOS PUSES KAIRIOSIOS PUSES MAZIAUSIAS ELEMENTAS"<<endl;
            return;
        }
    }

    if(root==NULL)
    {
        cout<<"MEDIS YRA TUSCIAS"<<endl<<endl;
        return;
    }
    else if(root!=NULL)
    {
        while (curr!=NULL)
        {
            if(curr->data==ieskojimas2)
            {
                found=true;
                cout<<"ELEMENTAS SURASTAS"<<endl;
                break;
            }
            else
            {
                pagalbinis=curr;
                if(ieskojimas2>curr->data)
                {
                    curr=curr->right;
                }
                else
                {
                    curr=curr->left;
                }
            }
        }
    }
    if(found==false)
    {
        cout<<ieskojimas2<<" ELEMENTAS NERA MEDYJE"<<endl;
        return;
    }
    //ISTRINA ELEMENTA SU VIENU VAIKU
    if((curr->left == NULL && curr->right != NULL) || (curr->left!=NULL && curr->right==NULL))
    {
        //JEI VAIKA TURI DESINYSIS ELEMENTAS O KAIRYSIS NETURI
        if(curr->left == NULL && curr->right != NULL)
        {
            if(pagalbinis->left == curr)
            {
                pagalbinis->left=curr->right;
                delete curr;
                curr=NULL;
                cout<<ieskojimas2<<" 8ELEMENTAS BUVO PASALINTAS IS MEDZIO"<<endl;
            }
            else
            {
                pagalbinis->right=curr->right;
                delete curr;
                curr=NULL;
                root=NULL;
                cout<<ieskojimas2<<" 7ELEMENTAS BUVO PASALINTAS IS MEDZIO"<<endl;
                //RANDA MAZIAUSIA ELEMENTA DESINEJE PUSEJE
            }
        }
    }
    else
        //JEI VAIKA TURI KAIRYSIS ELEMENTAS O DESINYSIS NETURI
    {
        if(pagalbinis->left==curr)
        {
            pagalbinis->left=curr->left;
            delete curr;
            curr=NULL;
            cout<<ieskojimas2<<" 6ELEMENTAS BUVO PASALINTAS IS MEDZIO"<<endl;

        }
        else
        {
            if(root->left==NULL && root->right==NULL)
            {
                cout<<ieskojimas2<<" ELEMENTAS BUVO PASALINTAS IS MEDZIO"<<endl;
                root=NULL;
                return;
            }
            pagalbinis->right=curr->left;
            delete curr;
            curr=NULL;
            cout<<ieskojimas2<<" 5ELEMENTAS BUVO PASALINTAS IS MEDZIO"<<endl;
        }

    }
    return;

// istrina elemento lapa
    if(curr->left == NULL && curr->right == NULL)
    {
        if(pagalbinis->left == curr)
            pagalbinis->left=NULL;
        else
            pagalbinis->right=NULL;
        delete curr;
        cout<<ieskojimas2<<" 4ELEMENTAS BUVO PASALINTAS IS MEDZIO"<<endl;
        root=NULL;
        return;
    }
    if(curr->left != NULL && curr->right != NULL)
    {
        // turi 2 vaikus
// pakeisti elementa su maziausia reiksme turinciu elementu desineje puseje
        tipas *check=curr->right;
        if((curr->left==NULL) && (curr->right==NULL))
        {
            curr=check;
            delete check;
            curr->right==NULL;
            cout<<ieskojimas2<<" 3ELEMENTAS BUVO PASALINTAS IS MEDZIO"<<endl;
        }
        else //desinys vaikas turi vaika
            // jei elemento desinio vaikas turi kairi vaika
            // eiti i kaire puse iki NULL ir rasti maziausia elementa
        {
            if(curr->right==NULL && curr->left!=NULL)
            {
                tipas *leftCurrent;
                tipas *leftCurrentPred;
                leftCurrentPred=curr->right;
                leftCurrent=curr->left;
                while(leftCurrent->left!=NULL)
                {
                    leftCurrentPred=leftCurrent;
                    leftCurrent=leftCurrent->left;
                }
                curr->data=leftCurrent->data;
                delete leftCurrent;
                leftCurrentPred->left=NULL;
                cout<<ieskojimas2<<" 2ELEMENTAS BUVO PASALINTAS IS MEDZIO"<<endl;

            }
            else
            {
                tipas *iesk=curr->right;
                curr->data=iesk->data;
                curr->right=iesk->right;
                delete iesk;
                cout<<ieskojimas2<<" 1ELEMENTAS BUVO PASALINTAS IS MEDZIO"<<endl;
            }
        }
        return;
    }
}
int main()
{
    tipas *root, *galas, *naujas, *temp, *curr;
    root=NULL;
    int n, v, funkcija, ieskojimas2, pasirinkimas;
    while (true)
    {
        cout<<"************************************************************"<<endl;
        cout<<"           1. SUKURIA DVEJETAINI PAIESKOS MEDI"<<endl;
        cout<<"           2. SURANDA ELEMENTA PAIESKOS MEDYJE"<<endl;
        cout<<"  3. ATSPAUSDINA DVEJATAINIO MEDZIO ELEMENTUS VIDINIU BUDU"<<endl;
        cout<<"4. ATSPAUSDINA DVEJATAINIO MEDZIO ELEMENTUS TIESIOGINIU BUDU"<<endl;
        cout<<"5. ATSPAUSDINA DVEJATAINIO MEDZIO ELEMENTUS ATVIRKSTINIU BUDU"<<endl;
        cout<<"              6. ITERPIA NAUJA ELEMENTA I MEDI"<<endl;
        cout<<"            7. ISTRINA PASIRINKTA MEDZIO ELEMENTA"<<endl;
        cout<<"************************************************************"<<endl;
        cout<<"                    *PASIRINKITE FUNKCIJA* "<<endl;
        cin>>funkcija;
        cout<<endl;
        if(funkcija==1)
        {
            sukurimas(n, *&root, *&temp, v);
        }
        if(funkcija==2)
        {
            spausdinimas(n, *&root, *&temp, *&curr);
        }
        if(funkcija==3)
        {
            cout<<"VIDINIU BUDU"<<endl;
            infix(*&root, ieskojimas2);

        }
        if(funkcija==4)
        {
            cout<<"TIESIOGINIU BUDU"<<endl;
            prefix(*&root, ieskojimas2);
        }
        if(funkcija==5)
        {
            cout<<"ATVIRKSTINIU BUDU"<<endl;
            postfix(*&root, ieskojimas2);
        }
        if(funkcija==6)
        {
            insertt(n, *&root, *&temp, *&curr, ieskojimas2, v);
        }
        if(funkcija==7)
        {
            trinimas(*&root, *&curr, ieskojimas2);
        }
    }



    return 0;
}
