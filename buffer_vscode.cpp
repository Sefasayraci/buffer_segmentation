/*
#include <iostream>
#include <cstring>

using namespace std;

//void Func(char[], char*)


int main(){

    setlocale(LC_ALL, "TURKISH");
    char dizi[20];
    //char dizi2[1];
    int dizi2;

    cout<<"Lütfen Girdileri Yaziniz"<<endl;
    cin>>dizi;
    cout<<"Girdi Uzunlugu="<<strlen(dizi)<<endl;

    cout<<"Tekrarlayan Harf Yerine Gelecek Girdiyi Yaziniz"<<endl;
    cin>>dizi2;

    //cout<<"Transmited Buffer"<<endl;
    //char dizi[8]={a,s,d,g,s,s,q,e};


    for(int i=0; i<strlen(dizi)-1; i++)
    {
        if(dizi[i]=!dizi[i+1])
        {
            dizi2 += dizi[i];
        }

    }

    if(dizi[strlen(dizi)-2] != dizi[strlen(dizi)-1])
    {
        dizi2 += dizi[strlen(dizi)-1];
    }

    else
    {
        dizi2 += dizi[strlen(dizi)-1];
    }

    cout<<"Sonuç="<<dizi;

    // return ?;
}
*/

/*****************************Bu kod üzerinde tekrar eden harflerin degistirilmesine yonelik****************************************
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "TURKISH");
    char dizi[20];
    char yeni_dizi[20];
    int index = 0;

    cout << "Transmited Buffer= ";
    cin >> dizi;
    cout << "Transmited Length= " << strlen(dizi) << endl;

    for (int i = 0; i < strlen(dizi); i++) {
        bool tekrar_ediyor = false;

        for (int j = 0; j < i; j++) {
            if (dizi[i] == dizi[j]) {
                tekrar_ediyor = true;
                break;
            }
        }

        if (!tekrar_ediyor) {
            yeni_dizi[index++] = dizi[i];
        }
    }

    yeni_dizi[index] = '_';

    cout << "Returned Buffer= " << yeni_dizi << endl;

    return 0;
}
*/

/*****************************Bu kod üzerinde tekrar eden harflerin degistirilmesine yonelik*****************************************/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "TURKISH");
    char t_buffer[20];
    char r_buffer[20] = "_";

    cout << "Transmited Buffer= ";
    cin >> t_buffer;
    cout << "Transmited Length= " << strlen(t_buffer) << endl;

    for (int i = 0; i < strlen(t_buffer); i++)
    {
        bool repeat = false;
        for (int j = 0; j < strlen(t_buffer); j++)
        {
            if (i != j && t_buffer[i] == t_buffer[j])
            {
                repeat = true;
                break;
            }
        }

        if (repeat) // parameter to pass to the main array with the repeating part condition (to be transmitted over the other array
        {
            r_buffer[strlen(r_buffer)] = t_buffer[i];
        }
    }

    cout << "Returned Buffer= " << r_buffer << endl;

    return 0;
}

