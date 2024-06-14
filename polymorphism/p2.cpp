// //very important program .
// #include<iostream>
// using namespace std;
// class shape{
//     public:
// virtual int area()=0;
// virtual int detail(){
//     cout<<"This is the shape.";
//     return 0;
// }
// };
// class circle:public shape{
//     protected:
//     int radius;
//     public:
//     circle(int radius){
//         this->radius=radius;
//     }
//     int area(){
//         return radius*radius;
//     }
// int detail(){
//         cout<<"The area of circle is "<<area()<<endl;
//         return 0;
//     }
// };
// class reactangle:public shape{
// int length,width;
// public:
// reactangle(int length,int width){
//     this->length=length;
//     this->width=width;
// }
// int area(){
//     return length*width;
// }
// int detail(){
//     cout<<"The area of reactangle is: "<<area()<<endl;
//     return 0;
// }
// };
// int main()
// {
//     circle c(2.5);
//     reactangle r(1.2,5);
//     c.circle::area();
//     c.circle::detail();
//     r.reactangle::area();
//     r.reactangle::detail();
//    return 0;
// }

// #include<iostream>
// using namespace std;
// class myclass{
// public:
// virtual void show(){
//     cout<<"parent class 1 \n";
// }
// };
// class child1:public myclass{
// void show(){
//     cout<<"Child 1 .... \n";
// }
// };
// class child2:public myclass{
//     void show(){
//         cout<<"Child 2 .... \n";
//     }
// };
// int main()
// {
//     myclass *m;
//     myclass obj;
//     child1 obj2;
//     child2 obj3;
//     m = new myclass;
//     m =&obj;
//     m->show();
//     m =&obj2;
//     m->show();
//     m =&obj3;
//     m->show();
//    return 0;
// }

//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
// #include <iostream>
//                         using namespace std;
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cout << " *";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class parent
// {
// public:
//    virtual void show()
//     {
//         cout << "Parent class 1....\n";
//     }
// };
// class child1 : public parent
// {
//     void show()
//     {
//         cout << "child class 2.....\n";
//     }
// };
// class child2 : public parent
// {
//     void show()
//     {
//         cout << "child class 3 .....\n";
//     }
// };
// int main()
// {
//     parent *ptr[5];
//     int op;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Enter your choice:";
//         cin>>op;
//         if (op == 1)
//         {
//             ptr[i] = new parent;
//         }
//         else if (op == 2)
//         {
//             ptr[i] = new child1;
//         }
//         else
//         {
//             ptr[i] = new child2;
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         ptr[i]->show();
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class parent {
// char city[50];
// public:
// void input(){
//     cout<<"Enter the city Name:";
//     cin>>city;
// }
// void output(){
//     cout<<"City Name: "<<city<<endl;
// }
// };
// int main()
// {
//     parent *ptr[5];
// for(int i=0; i<5; i++){
//     ptr[i] = new parent;
//     ptr[i]->input();
// }
// for(int i =0; i<5; i++){
//     ptr[i]->output();
// }
//    return 0;
// }

// #include<iostream>
// using namespace std;
// class A{
// protected:
// int a;
// public:
// void input(int a){
//     this->a=a;
// }
// void output(){
//     cout<<"a= "<<a<<endl;
// }
// };
// class B:public A{
// protected:
// int b;
// public:
// void input(int a,int b){
//     A::input(a);
//     this->b=b;
// }
// void output(){
//     A::output();
//     cout<<"b = "<<b<<endl;
// }
// };
// class C:public B{
// protected:
// int c;
// public:
// void input(int a,int b,int c){
//     B::input(a,b);
//     this->c=c;
// }
// void output(){
//     B::output();
//     cout<<"c = "<<c<<endl;
// }
// };
// int main()
// {
//     C obj;
//     obj.input(1,2,3);
//     obj.output();
//    return 0;
// }


// #include<iostream>
// using namespace std;
// class parent{
// protected:
// int a;
// public:
// void set(int a){
//     this->a=a;
// }
// void show(){
//     cout<<"a: "<<a<<endl;
// }
// };
// class child1{
// protected:
// int b;
// public:
// void set(int b){
//     this->b=b;
// }
// void show(){
//     cout<<"b = "<<b<<endl;
// }
// };
// class baby:public parent,public child1{
// protected:
// int c;
// public:
// void set(int a,int b,int c){
//     parent::set(a);
//     child1::set(b);
//     this->c=c;
// }
// void show(){
//     parent::show();
//     child1::show();
//     cout<<"c: "<<c<<endl;
// }
// };
// int main()
// {
//     baby b;
//     b.set(1,2,3);
//     b.show();
//    return 0;
// }

// #include<iostream>
// using namespace std;
// class A{
//     protected:
//     int a;
//     public:
//     A(int a){
//         this->a=a;
//     }
//     void show(){
//         cout<<"a: "<<a<<endl;
//     }
// };
// class B{
//     protected:
//     int b;
//     public:
//     B(int b)
//     {
//         this->b=b;
//     }
//     void show(){
//         cout<<"b: "<<b<<endl;
//     }
// };
// class C:public A,public B{
// protected:
// int c;
// public:
// C(int a,int b,int c):A(a),B(b){
//     this->c=c;
// }
// public:
//  void show(){
//     cout<<"c: "<<c<<endl;
//  }
// };
// int main()
// {
//     C obj(1,2,3);
//     obj.A::show();
//     obj.B::show();
//     obj.C::show();
//    return 0;
// }


// #include<iostream>
// #include<math.h>
// using namespace std;
// class shape{
//     protected:
//     int a,b;
// public:
// virtual int area()=0;
// virtual void  detail(){
// cout<<"Shape: "<<endl;
// }
// };
// class circle:public shape{
// protected:
// int radius;
// float pi =3.141;
// public:
// circle(int radius){
//     this->radius=radius;
// }
// int area(){
//     cout<<"Area is: "<<pi*radius*radius;
//     return 0;
// }
// void detail(){
//     cout<<"The area of circle with radius: "<<radius<<" is "<<area()<<endl;
// }
// };
// class rectangle:public shape{
//     protected:
//     int lenght,width;
//     public:
//     rectangle(int lenght,int width){
//         this->lenght=lenght;
//         this->width =width;
//     }
//     int area(){
//         cout<<lenght*width<<endl;
//         return 0;
//     }
//     void detail(){
//         cout<<"The area of rectangle with lenght: "<<lenght <<" and width "<<width<<" and area is  "<<area();
//     }
// } ;
// int main()
// {
//     circle obj1(13);
//     obj1.detail();
//     rectangle obj2(2,3);
//     obj2.detail();
//    return 0;
// }


