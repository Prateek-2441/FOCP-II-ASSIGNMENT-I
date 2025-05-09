#include<iostream>
#include<fstream>

using namespace std;
int main() {
    int age;
    char name[50];
    cout <<"enter your name:";
    cin.getline(name,50);
    cout<<endl<<"enter age:";
    cin>>age;
    ofstream fout ("sample.txt");
    fout <<"name: "<<name<<endl;
    fout <<"age: "<<age<<endl;
    fout.close();
cout<<endl<<endl<<"data written"<<endl;

    return 0;
}