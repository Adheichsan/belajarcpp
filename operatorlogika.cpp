#include <iostream>

using namespace std;

int main(){

    //operator logika : not, and, or
    int a = 3;
    int b = 2;

    bool hasil;

    cout<<"untuk nilai true"<<endl;
    hasil = (a==3);
    cout<<hasil<<endl;
    hasil = (b==2);
    cout<<hasil<<endl;

    //not : untuk menghasilkan nilai false
    cout<<"untuk not"<<endl;
    hasil = !(a==3);
    cout<<hasil<<endl;
    hasil = !(b==2);
    cout<<hasil<<endl;

    //and : keduanya harus benar untuk menghasilkan nilai true
    cout<<"untuk and"<<endl; 
    hasil = (a==3) and (b==2); //true and true
    cout<<hasil<<endl;
    hasil = (a==3) and (b==3); //true and false
    cout<<hasil<<endl;
    hasil = (a==2) and (b==2); //false and true
    cout<<hasil<<endl;
    hasil = (a==1) and (b==1); //false and false
    cout<<hasil<<endl;

    //or : salah satu benar maka nilainya true
    cout<<"untuk or"<<endl;
    hasil = (a==3) or (b==2); //true and true
    cout<<hasil<<endl;
    hasil = (a==3) or (b==3); //true and false
    cout<<hasil<<endl;
    hasil = (a==2) or (b==2); //false and true
    cout<<hasil<<endl;
    hasil = (a==1) or (b==1); //false and false
    cout<<hasil<<endl;

    return 0;
}