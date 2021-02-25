#include<iostream>
using namespace std;

int main()
{
    int tuso,mauso,bientam,i=2;
    cout << "Nhap vao tu so va mau so : ";
    cin >> tu >> mau;
    while(true)
    {
        if(tu > mau) bientam=tu;
        else bientam=mauso;
        if(tuso%i==0 && mauso%i==0)
        {
            tuso=tuso/i;
            mauso=mauso/i;
            i=2;
        }
        else i++;
        if(i>bientam) break;
    }
    cout << "phan so toi gian la: " << tuso << "/" << mauso;
    
    return 0;
    
}
