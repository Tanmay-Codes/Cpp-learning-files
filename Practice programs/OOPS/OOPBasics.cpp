// this program shows the basics of the OOPs concepts as follows:
#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    student(){
        cout<<"Default constructor \n";
    }
    student(string s, int a){
        name = s;
        age = a;
        cout<<"Parameterized constructor \n";
    }
    student(student &a){
        cout<<"Copy constructor \n";
        name = a.name;
        age = a.age;
    }
    // this is example of the operator overloading
    bool operator == (student &a){
        if(name == a.name && age == a.age){
            return true;
        }
        return false;
    }
    ~student(){
        cout<<"destructor \n";
    }
};

int main(){
    student a("Tanmay", 29);
    student b;
    student c=a;
    cout<<(c==a?"same \n":"not same \n");
    return 0;

}