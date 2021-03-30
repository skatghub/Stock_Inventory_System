#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
create_id()
{
    string userstr,passstr,check;
    cout<<"Enter the USERNAME: ";
    getline(cin,userstr);
    getline(cin,userstr);
    retry:
    cout<<endl<<"Enter the PASSWORD: ";
    char ch;
    ch = _getch();
    while(ch != 13)
    {
        passstr.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    cout<<endl<<"Re-Enter the PASSWORD: ";
    ch = _getch();
    while(ch != 13)
    {
        check.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    if(strcmp(passstr.c_str(),check.c_str())==0)
    {
        fstream fo;
        fo.open("USER_emp.txt");
        fo.seekg(0,ios::end);
        fo<<endl<<userstr;
        fo.close();
        fstream po;
        po.open("PASS_emp.txt");
        po.seekg(0,ios::end);
        po<<endl<<passstr;
        po.close();
    }
    else
    {
        cout<<"Password didn't match. Retry! "<<endl;
        goto retry;
    }
}
