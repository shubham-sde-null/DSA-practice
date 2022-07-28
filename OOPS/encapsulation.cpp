#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    int height;
public:
void getAge(){
    cout<<this->age<<endl;
}
int setAge(int age){
    this->age=age;
}
Student(){
    cout<<"constructor called"<<endl;
}
~Student(){
    cout<<"destructor called"<<endl;
}
};
int main(){
    Student a;
    a.setAge(10);
    a.getAge();

return 0;
}