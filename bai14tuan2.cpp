#include<iostream>
using namespace std;

int main()
{
    double n,temp1,temp2,a,i=0,count=0;
    cout << "Nhap vao 1 so nguyen duong N bat ki: ";
    cin >> n;
    while(dem!=n)
    {
    	cout << "Nhap vao so thu " << count+1 << ": ";
        cin >> a;
        if(i==0) 
        {
            temp1=a;
            temp2=a;
        }
        if(temp1<a) temp1=a;
        if(temp2>a) temp2=a;
        i++;
        dem++;
    }
    cout << "So lon nhat trong day so la: " << temp1 << endl;
    cout << "So nho nhat trong day so la: " << temp2 << endl;
    return 0;
}
