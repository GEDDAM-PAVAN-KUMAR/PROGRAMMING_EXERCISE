#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class X {
    public:
    string name;
    X(string n){
        name=n;
    }
    virtual void execute(){
        cout<<name<<" "<<"X class"<<endl;
    }
     void init(){
        execute();
    }
    
     void shutdown(){
        execute();
    }
};
class A :public X{
   // string name;
    public:
    A(string n):X(n){
        name=n;
    }
    void execute(){
        cout<<name<<" "<<"A class"<<endl;
    }
    
};
class B :public X{
    //string name;
    public:
    B(string n):X(n){
        name=n;
    }
    void execute(){
        cout<<name<<" "<<"B class"<<endl;
    }
    
};
class C :public X{
   // string name;
    public:
    C(string n):X(n){
        name=n;
    }
    void execute(){
        cout<<name<<" "<<"C class"<<endl;
    }
    
};
int main(){
    string cls;
    string nam;
    int choice=1;
    
    cout<<"Enter choice greater than 0 to continue";
    int count=0;
    while(cin>>choice){
        if(choice==0) break;
        cout<<"Enter the class U want to invoke A/B/C"<<endl;
        cin>>cls;
        cout<<"Enter the name of object"<<endl;
        cin>>nam;
        if(cls=="A"){
            A x(nam);
            x.execute();
            count++;
        }
        else if(cls=="B"){
            B x(nam);
            x.execute();
            count++;
        }
        else{
            C x(nam);
            x.execute();
            count++;
        }
        cout<<count<<" Objects are created till now"<<endl;
        cout<<"Enter 0 to quit the process!/\n greater than 0 to continue creation of objects"<<endl;
    }
}
