#include <fcntl.h>
#include <io.h>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;
// APKEICIA VIETOMIS.
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
// MASYVO PADALIJIMAS PAGAL AUKSCIAUSIAS VERTES
int Partition(int a[], int low, int high)
{
    int pivot, index, i;
    index = low;
    pivot = high;

    // GAUNAME PIVOT SKAICIU
    for(i=low; i < high; i++)
    {
        if(a[i] < a[pivot])
        {
            swap(&a[i], &a[index]);
            index++;
        }
    }
    // KEICIAME VERTE ESANT AUKSTAI IR GAUTUM INDEKSUI
    swap(&a[pivot], &a[index]);

    return index;
}
int RandomPivotPartition(int a[], int low, int high)
{
	int pvt, n, temp;
	n = rand();
	// Randomizing the pivot value in the given subpart of array.
	pvt = low + n%(high-low+1);

	// Swapping pvt value from high, so pvt value will be taken as pivot while partitioning.
	swap(&a[high], &a[pvt]);

	return Partition(a, low, high);
}
// IGYVENDINIMAS QUICK SORT ALGORITMO.
int QuickSort(int a[], int low, int high)
{
    int pindex;
    if(low < high)
    {
        // SKYRSTIMO MASYVAS NAUDOJANT ATSITIKTINE TVARKA.
        pindex = RandomPivotPartition(a, low, high);

        QuickSort(a, low, pindex-1);
        QuickSort(a, pindex+1, high);
    }
    return 0;
}

int main()
{
    cout<<"1. ELEMENTO IVEDIMAS SAVARANKISKAI"<<endl;
    cout<<"2. 1000 NESURIKIUOTU DUOMENU"<<endl;
    cout<<"3. 1000 ATVIRKSCIAI SURIKIUOTU DUOMENU"<<endl;
    cout<<"4. 10000 NESURIKIUOTU DUOMENU"<<endl;
    cout<<"5. 10000 ATVIRKSCIAI SURIKIUOTU DUOMENU"<<endl;
    cout<<"6. 50000 NESURIKIUOTU DUOMENU"<<endl;
    cout<<"7. 50000 ATVIRKSCIAI SURIKIUOTU DUOMENU"<<endl;
    cout<<"8. 100000 NESURIKIUOTU DUOMENU"<<endl;
    cout<<"9. 100000 ATVIRKSCIAI SURIKIUOTU DUOMENU"<<endl;
    cout<<"      PASIRINKITE RIKIAVIMO BUDA"<<endl;
    int n, i, pasirinkimas;

    cin>>pasirinkimas;
    while(true)
    {
        if(pasirinkimas==1)
        {
            cout<<"IVESKITE ELEMENTU KIEKI: ";
            cin>>n;
            int arr[n];
            for(i = 0; i < n; i++)
            {
                cout<<"IVESKITE ELEMENTO SKAICIU "<<i+1<<": "; // IVEDAME SKAICIUS
                cin>>arr[i];
            }
            QuickSort(arr, 0, n-1);
            // ATSPAUSDINA SURUSIUOTUS SKAICIUS.
            cout<<"Sorted Data ";
            for (i = 0; i < n; i++)
                cout<<"->"<<arr[i];

        }
        else if(pasirinkimas==2)
        {
            int n=1000;
            ifstream fd("1000ne.txt");
            int D[1000];
            for(int i=0; i<1000; i++)
            {
                fd>>D[i];
            }
            QuickSort(D, 0, n-1);
            for (i = 0; i < 1000; i++)
                cout<<"->"<<D[i];
            fd.close();
            ofstream fr("Rezultatai1000ne.txt");
            for(int i=0; i<1000; i++)
            {
                fr<<D[i]<<endl;
            }
            fr.close();
            break;
        }
        else if(pasirinkimas==3)
        {
            int n=1000;
            ifstream fd("1000su.txt");
            int D[1000];
            for(int i=0; i<1000; i++)
            {
                fd>>D[i];
            }
            QuickSort(D, 0, n-1);
            for (i = 0; i < 1000; i++)
                cout<<" "<<D[i];
            fd.close();
            ofstream fr("Rezultatai1000su.txt");
            for(int i=0; i<1000; i++)
            {
                fr<<D[i]<<endl;
            }
            fr.close();
            break;
        }
        else if(pasirinkimas==4)
        {
            int n=10000;
            ifstream fd("10000ne.txt");
            int D[10000];
            for(int i=0; i<10000; i++)
            {
                fd>>D[i];
            }
            QuickSort(D, 0, n-1);
            for (i = 0; i < 10000; i++)
                cout<<" "<<D[i];
            fd.close();
            ofstream fr("Rezultatai10000ne.txt");
            for(int i=0; i<10000; i++)
            {
                fr<<D[i]<<endl;
            }
            fr.close();
            break;

        }
        else if(pasirinkimas==5)
        {
            int n=10000;
            ifstream fd("10000su.txt");
            int D[10000];
            for(int i=0; i<10000; i++)
            {
                fd>>D[i];
            }
            QuickSort(D, 0, n-1);
            for (i = 0; i < 10000; i++)
                cout<<" "<<D[i];
            fd.close();
            ofstream fr("Rezultatai10000su.txt");
            for(int i=0; i<10000; i++)
            {
                fr<<D[i]<<endl;
            }
            fr.close();
            break;

        }
        else if(pasirinkimas==6)
        {
            int n=50000;
            ifstream fd("50000ne.txt");
            int D[50000];
            for(int i=0; i<50000; i++)
            {
                fd>>D[i];
            }
            QuickSort(D, 0, n-1);
            for (i = 0; i < 50000; i++)
                cout<<" "<<D[i];
            fd.close();
            ofstream fr("Rezultatai50000ne.txt");
            for(int i=0; i<50000; i++)
            {
                fr<<D[i]<<endl;
            }
            fr.close();
            break;

        }
        else if(pasirinkimas==7)
        {
            int n=50000;
            ifstream fd("50000su.txt");
            int D[50000];
            for(int i=0; i<50000; i++)
            {
                fd>>D[i];
            }
            QuickSort(D, 0, n-1);
            for (i = 0; i < 50000; i++)
                cout<<" "<<D[i];
            fd.close();
            break;

        }
        else if(pasirinkimas==8)
        {
            int n=100000;
            ifstream fd("100000ne.txt");
            int D[100000];
            for(int i=0; i<100000; i++)
            {
                fd>>D[i];
            }
            QuickSort(D, 0, n-1);
            for (i = 0; i < 100000; i++)
                cout<<" "<<D[i];
            fd.close();
            ofstream fr("Rezultatai100000ne.txt");
            for(int i=0; i<100000; i++)
            {
                fr<<D[i]<<endl;
            }
            fr.close();
            break;

        }
        else if(pasirinkimas==9)
        {
            int n=100000;
            ifstream fd("100000su.txt");
            int D[100000];
            for(int i=0; i<100000; i++)
            {
                fd>>D[i];
            }
            QuickSort(D, 0, n-1);
            for (i = 0; i < 100000; i++)
                cout<<" "<<D[i];
            fd.close();
            ofstream fr("Rezultatai100000su.txt");
            for(int i=0; i<100000; i++)
            {
                fr<<D[i]<<endl;
            }
            fr.close();
            break;
        }
    }


    return 0;
}
