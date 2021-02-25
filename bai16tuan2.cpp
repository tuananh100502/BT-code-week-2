#include<iostream>
using namespace std;

int main()
{
    int num;
    do
    {
        cout << "Nhap vao mot so trong khoang 0-->9: ";
        cin >> num;
        if(num==0) cout << "khong" << endl;
        if(num==1) cout << "mot" << endl;
        if(num==2) cout << "hai" << endl;
        if(num==3) cout << "ba" << endl;
        if(num==4) cout << "bon" << endl;
        if(num==5) cout << "nam" << endl;
        if(num==6) cout << "sau" << endl;
        if(num==7) cout << "bay" << endl;
        if(num==8) cout << "tam" << endl;
        if(num==9) cout << "chin" << endl;
    }
    while(num>=0 && num <=9);
    cout << "So ban vua nhap khong hop le, dung chuong trinh";
    
    return 0;
}
