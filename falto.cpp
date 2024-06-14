// #include<iostream>
// using namespace std;
// class A{
// public:
// virtual void show()=0;
// };
// class B:public A{
//     public:
// void show(){
//     cout<<"Child class B...\n";
// }
// };
// class C:public B{
//     public:
// void show(){
//     cout<<"child class C ....\n";
// }
// };
// int main()
// {
//     A *ptr[2];
//     ptr[0]=new B;
//     ptr[1]=new C;
//     ptr[0]->show();
//     ptr[1]->show();
//     // B obj1;
//     // C obj2;
//     // ptr = &obj1;
//     // ptr->show();
//     // ptr =&obj2;
//     // ptr->show();
//    return 0;
// }

// #include<iostream>
// using namespace std;
// class Dad{
// public:
// void show(){
//     cout<<"Parent class ....\n";
// }
// };
// class Mom{
//     public:
//     void show(){
//         cout<<"Child class ...\n";
//     }
// };
// class baby:public Mom,public Dad{
// public:
// void show(){
//     Dad::show();
//     Mom::show();
//     cout<<"Baby...\n";
// }
// };
// int main()
// {
//     baby b;
//     b.show();
//    return 0;
// }
// #include <iostream>

// class Base {
// public:
//     virtual void show() {
//         std::cout << "Base class show function called." << std::endl;
//     }
// };

// class Derived : public Base {
// public:
// // override
//     void show()  {
//         std::cout << "Derived class show function called." << std::endl;
//     }
// };

// int main() {
//     Base *b;
//     Derived d;
//     b = &d;
//     // The call to show() will be resolved at runtime.
//     b->show(); // Output: Derived class show function called.

//     return 0;
// }