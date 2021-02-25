#include<iostream>
using namespace std;

int main()
{
    double a,b,c;
    cout << "Nhap vao ban phim nhiet do duoi dang do F: ";
    cin >> a;
    b=(a-32)*5/9;
    c=c+273.15;
    cout << "Nhiet do dc do theo do C va do K la: ";
    cout << b << " " << c;
    return 0;
}
