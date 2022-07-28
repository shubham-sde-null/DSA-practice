//Single Inheritance

// #include<iostream>
// using namespace std;
// //here we are making the parent class
// class Human{
// public:
// int height;
// int weight;
// int age;
// // int getAge(){
// //     return this->age;
// // }
// void getAge(){
//     cout<<this->age;
// }
// int setWeight(int w){
//     this->weight=w;
// }
// };
// //here we are making the child class which is inheriting the patent class Human
// class Male:public Human{
// public:
// string color;
// void sleep(){
// cout<<"male sleeping";
// }
// };
// int main(){
//     Male obj1;
//     obj1.getAge();
//     //we can see that the age is not present in class Male then also we are able to access the age because we have inherited the data members from class Human
//     // cout<<h1.age;
// return 0;
// }

//Multilevel


// #include<iostream>
// using namespace std;
// //here we are making the parent class
// class Animal{
// public:
// void Cute(){
//     cout<<"the dog is cute";
// }

// };
// //here we are making the child class which is inheriting the patent class Human
// class Dog:public Animal{

// };
// class Bulldog : public Dog{

// };
// //here we interited dog from animal and then bulldog from dog
// int main(){
//     Bulldog b1;
//     b1.Cute();

// return 0;
// }

//Multiple Inheritance
// #include<iostream>
// using namespace std;
// //here we are making the parent class
// class Animal{
// public:
// void Cute(){
//     cout<<"the dog is cute"<<endl;
// }

// };
// class Human{
//     public:
//     void day(){
//         cout<<"it's a wonderful day"<<endl;
//     }
// };
// class Hybrid:public Animal, public Human{

// };
// int main(){
//     Hybrid h1;
//     h1.Cute();
//     h1.day();

// return 0;
// }

//Hierarchial Inheritance
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     void func1(){
//         cout<<"hello this is function 1"<<endl;
//     }
// };
// class B: public A{
//     public:
//     void func2(){
//         cout<<"hello this is function 2"<<endl;
//     }
// };
// class C: public A{
//     public:
//     void func3(){
//         cout<<"hello this is function 3"<<endl;
//     }
// };
// int main(){
//     C object3;
//     object3.func1();
// return 0;
// }


//Hybrid Inheritance

#include<iostream>
using namespace std;
class A{
    public:
    void funcA(){
        cout<<"hello this is A function"<<endl;
    }
};
class D{
    public:
    void funcD(){
        cout<<"hello this is D function"<<endl;
    }
};
class B:public A{
    public:
    void funcB(){
        cout<<"hello this is B function"<<endl;
    }
};
class C:public A,public D{
    public:
    void funcC(){

        cout<<"hello this is C function"<<endl;
    }
};
int main(){
    C objC;
    objC.funcA();
return 0;
}

