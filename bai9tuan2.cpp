#include<iostream>
using namespace std;

int main()
{
    int x;
    cout << "Nhap vao 1 so bat ki: ";
    cin >> x;
    int sum=0,a;
    while(x>0)
    {
        a=x%10;
        x=x/10;
        sum=sum+a;
    }
    cout << "Tong cac chu so cua so ban da nhap la: ";
    cout << sum;
    return 0;
}
