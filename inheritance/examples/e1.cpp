// #include<iostream>
// using namespace std;
// class Move{
// protected:
// int position;
// public:
// Move(){
//     position =0;
// }
// void show(){
//     cout<<"Position: "<<position<<endl;
// }
// void forward(){
//     position++;
// }
// };
// class Move2:public Move{
// public:
// void backward(){
//     position--;
// }
// };
// int main()
// {
//     Move2 obj1;
//     obj1.show();
//     obj1.forward();
//     obj1.show();
//     obj1.backward();
//     obj1.show();
//    return 0;
// }

// Eample 2
//  #include<iostream>
//  using namespace std;
//  class parent{
//  protected:
//  int y;
//  public:
//  parent(){
//      y=0;
//  }
//  parent (int a){
//      y=a;
//  }
//  void show(){
//      cout<<"Y "<<y<<endl;
//  }
//  };
//  class child:public parent{
//  char z;
//  public:
//  child():parent(){
//      z='x';
//  }
//  child(char b,int p):parent(p){
//      z=b;
//  }
//  void display(){
//      cout<<"Z "<<z<<endl;
//  }
//  };
//  int main()
//  {
//      child obj1,obj2('@',100);
//      obj1.show();
//      obj1.display();
//      obj2.show();
//      obj2.display();
//     return 0;
//  }

//  #include<iostream>
// using namespace std;
// class person{
// protected:
// int id;
// char name[50];
// char address[200];
// public:
// person(){
//     id=0;
//     name[0]='\0';
//     address[0]='\0';
// }
// void input(){
//     cout<<"Enter the Id: "<<endl;
//     cin>>id;
//     cout<<"Enter the Name: "<<endl;
//     cin>>name;
//     cout<<"Enter the Address: "<<endl;
//     cin>>address;
// }
// void output(){
//     cout<<"Your personal information is as followes \n";
//     cout<<"Id = "<<id<<endl;
//     cout<<"Name = "<<name<<endl;
//     cout<<"Address = "<<address<<endl;
// }
// };
// class student:public person{
// int roll_number,marks;
// public:
// student(){
//     roll_number=marks=0;
// }
// void input(){
//     person::input();
//     cout<<"Enter the Roll Number: "<<endl;
//     cin>>roll_number;
//     cout<<"Enter the marks: "<<endl;
//     cin>>marks;
// }
// void output(){
//     person::output();
//     cout<<"Your Educational Information is as follows: \n";
//         cout<<"Roll Number: "<<roll_number<<endl;
//         cout<<"Marks: "<<marks<<endl;
// }
// };
// int main()
// {
//    student s;
//    s.input();
//    s.output();
//    return 0;
// }

// function Overridding
//  #include<iostream>
//  using namespace std;
//  class parent{
//  protected:
//  int n;
//  public:
//  parent(){
//      n=0;
//  }
//  parent(int n){
//  this->n=n;
//  }
//  void show(){
//      cout<<"N : "<<n<<endl;
//  }
//  };
//  class child: public parent{
//  char ch;
//  public:
//  child():parent(){
//      ch='x';
//  }
//  child(char ch,int m):parent(m){
//  this->ch=ch;
//  }
//  void show(){
//      parent::show();
//      cout<<"CH: "<<ch<<endl;
//  }
//  };
//  int main()
//  {
//      child c1, c2('$',100);
//      cout<<"Object 1 is as follow \n";
//      c1.show();
//      cout<<"Object 2 is as follow \n";
//      c2.show();
//     return 0;
//  }

// #include <iostream>
// using namespace std;
// class Simple
// {
// protected:
//     int a, b;

// public:
//     Simple()
//     {
//         a = b = 0;
//     }
//     void input()
//     {
//         cout << "Enter a: \n";
//         cin >> a;
//         cout << "Enter b: \n";
//         cin >> b;
//     }
//     void add()
//     {
//         cout << "a+b= " << a + b<<endl;
//     }
//     void sub()
//     {
//         cout << "a-b= " << a - b<<endl;
//     }
//     void Mul()
//     {
//         cout << "a*b= " << a * b<<endl;
//     }
//     void div()
//     {
//         cout << "a/b= " << a / b<<endl;
//     }
// };
// class complex : public Simple
// {
// public:
//     void add()
//     {
//         if (a <= 0 || b <= 0)
//         {
//             cout << "Invalid statements \n";
//         }
//         else
//         {
//             Simple::add();
//         }
//     }
//     void sub()
//     {
//         if (a <= 0 || b <= 0)
//         {
//             cout << "Invalid statements \n";
//         }
//         else
//         {
//             Simple::sub();
//         }
//     }
//     void Mul()
//     {
//         if (a <= 0 || b <= 0)
//         {
//             cout << "Invalid statements \n";
//         }
//         else
//         {
//             Simple::Mul();
//         }
//     }
//     void div()
//     {
//         if (a <= 0 || b <= 0)
//         {
//             cout << "Invalid statements \n";
//         }
//         else
//         {
//             Simple::div();
//         }
//     }
// };
// int main()
// {
//     complex c1;
//     c1.input();
//     c1.add();
//     c1.div();
//     c1.Mul();
//     c1.sub();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class A{
//     protected:
//     int a;
//     void input(){
//         cout<<"Enter the a:\n";
//         cin>>a;
//     }
//     void output(){
//         cout<<"a = "<<a<<endl;
//     }
// };
// class B:public A{
// protected:
// int b;
// public:
// void input(){
//     A::input();
//     cout<<"Enter the b: \n";
//     cin>>b;
// }
// void output(){
//     A::output();
//     cout<<"b= "<<b<<endl;
// }
// };
// class C:public B{
// protected:
// int c;
// public:
// void input(){
//     B::input();{
//         cout<<"Enter the c: \n";
//         cin>>c;
//     }
// }
// void output(){
//     B::output();
//     {
//         cout<<"c= "<<c<<endl;
//     }
// }
// };
// int main()
// {
//     C c1;
//     c1.input();
//     c1.output();
//    return 0;
// }

// #include <iostream>
// using namespace std;
// class person
// {
// protected:
//     int id;
//     char name[50];
//     char address[100];

// public:
//     person()
//     {
//         id = 0;
//         name[0] = '\0';
//         address[0] = '\0';
//     }
//     void input()
//     {
//         cout << "Enter the id: \n";
//         cin >> id;
//         cout << "Enter the name: \n";
//         cin >> name;
//         cout << "Enter the address: \n";
//         cin >> address;
//     }
//     void output()
//     {
//         cout<<"Your personal Information is as follow: \n";
//         cout << "Id: " << id << endl;
//         cout << "Name: " << name << endl;
//         cout << "Address: " << address << endl;
//     }
// };
// class student : public person
// {
// protected:
//     int marks, roll_number;

// public:
//     student()
//     {
//         marks = roll_number = 0;
//     }
//     void input()
//     {
//         person::input();
//         cout << "Enter the Roll Number: \n";
//         cin >> roll_number;
//         cout << "Enter the Marks: \n";
//         cin >> marks;
//     }
//     void output()
//     {
//         person::output();
//         cout<<"Your Eductional Informationis as follow: \n";
//         cout << "Roll Number: " << roll_number << endl;
//         cout << "Marks: " << marks << endl;
//     }
// };
// class scholarShip : public student
// {
// protected:
//     char scholarShip_name[100];
//     int scholarShip_amount;

// public:
//     void input()
//     {
//         student::input();
//         {
//             cout << "Enter the scholarShip_Name: \n";
//             cin >> scholarShip_name;
//             cout << "Enter the scholarShip Amount: \n";
//             cin >> scholarShip_amount;
//         }
//     }
//     void output()
//     {
//         student::output();
//         cout<<"Your ScholarShip Infomation is as follow: \n";
//         cout << "ScholarShip Name: " << scholarShip_name << endl;
//         cout << "ScholarShip Amount: " << scholarShip_amount << endl;
//     }
// };
// int main()
// {
//     scholarShip s;
//     s.input();
//     s.output();
//     return 0;
// }

// Multilevel inheritance with parameters+++++++++++++++++

// #include<iostream>
// using namespace std;
// class parent{
// protected:
// int n;
// public:

// void set(int n){
//     this->n=n;
// }
// void get(){
//     cout<<"N: "<<n<<endl;
// }
// };
// class child:public parent{
//     protected:
//     int m;
//     public:
//     void set(int n,int m){
//         parent::set(n);
//         this->m=m;
//     }
//     void get(){
//         parent::get();
//         cout<<"M: "<<m<<endl;
//     }
// };
// class child1:public child{
// protected:
// int o;
// public:
// void set(int n,int m,int o){
//     child::set(n,m);
//     this->o=o;
// }
// void get(){
//     child::get();
//     cout<<"O: "<<o<<endl;
// }
// };
// int main()
// {
//     child1 c1;
//     c1.set(1,2,3);
//     c1.get();
//    return 0;
// }

// Mulitiple Inheritance++++++++++++++++++++

// #include<iostream>
// using namespace std;
// class A{
//     protected:
//     int a;
//     public:
//     void input(){
//         cout<<"Enter the A: \n";
//         cin>>a;
//     }
//     void output(){
//         cout<<"A= "<<a<<endl;
//     }
// };
// class B{
//     protected:
//     int b;
//     public:
//     void input(){
//         cout<<"Enter the B: \n";
//         cin>>b;
//     }
//     void output(){
//         cout<<"B= "<<b<<endl;
//     }
// };
// class C:public A,public B{
//     protected:
//     int c;
//     public:
//     void input(){
//         A::input();
//         B::input();
//         cout<<"Enter the C: \n";
//         cin>>c;
//     }
//     void output(){
//         A::output();
//         B::output();
//         cout<<"C= "<<c<<endl;
//     }
// };
// int main()
// {
//     C c1;
//     c1.input();
//     c1.output();
//    return 0;
// }

// Constructer in Multiple Inheitance
// #include <iostream>
// using namespace std;
// class A
// {
// protected:
//     int a;

// public:
//     A(int a)
//     {
//         this->a = a;
//     }
//     void show()
//     {
//         cout << "The value of a is = " << a << endl;
//     }
// };
// class B
// {
// protected:
//     int b;

// public:
//     B(int b)
//     {
//         this->b = b;
//     }
//     void show()
//     {
//         cout << "The value of b is = " << b << endl;
//     }
// };
// class C:public A, public B{
// protected:
// int c;
// public:
// C(int a,int b,int c):A(a),B(b){
//     this->c=c;
// }
// void show(){
//     A::show();
//     B::show();
//     cout << "The value of c is = " << c << endl;
// }
// };
// int main()
// {
//     C c(92,45,12);
//     c.show();
//     return 0;
// }


//Multiple Inheritance with Constructer
#include<iostream>
using namespace std;
class myClass{
protected:
int id;
public:
myClass(){
    id =0;
}
myClass(int id){
    this->id=id;
}
void output(){
cout<<"Id: "<<id<<endl;
}
};
class myClass2{
protected:
string name;
public:
myClass2(){
name="";
}
myClass2(string name){

this->name=name;
}
void output(){
    cout<<"Name: "<<name<<endl;
}
};
class myclass3:public myClass,public myClass2{
protected:
int marks;
public:
myclass3():myClass(),myClass2(){
    marks=0;
}
myclass3(int marks,int id,string name):myClass(id),myClass2(name){
    this->marks=marks;
}
void output(){
    myClass::output();
    myClass2::output();
    cout<<"Marks: "<<marks<<endl;
}
};
int main()
{
    myclass3 c(1082,234245,"Abdulla");
    c.output();
   return 0;
}