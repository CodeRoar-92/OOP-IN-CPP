// #include<iostream>
// using namespace std;
// class parent{
// private:
// int n;
// public:
// void input(){
//     cout<<"Enter the value: \n";
//     cin>>n;
// }
// void output(){
//     cout<<"Value: "<<n<<endl;
// }
// };
// int main()
// {
// parent *ptr;
// ptr = new parent;
// ptr->input();
// ptr->output();
//    return 0;
// }

// Example 2
// Array of pointer to object
//  #include<iostream>
//  using namespace std;
//  class parent{
//      private:
//      char name[50];
//      public:
//      void input(){
//          cout<<"Enter the name: ";
//          cin>>name;
//      }
//      void output(){
//          cout<<"Name: "<<name<<endl;
//      }
//  };
//  int main()
//  {
//  parent *ptr;
//  for(int i=1; i<=5; i++){
//      ptr = new parent;
//      ptr->input();
//  }
//  for(int i=1; i<=5; i++){
//      ptr->output();
//  }
//     return 0;
//  }

// Example 3
// pointers and inheritance  +++++++++++++++++++
//  #include<iostream>
//  using namespace std;
//  class A{
//      public:
//     virtual void show(){
//          cout<<"Class A.... \n";
//      }
//  };
//  class B:public A{
//      public:
//      void show(){
//          cout<<"Class B.... \n";
//      }
//  };class C:public B{
//      public:
//      void show(){
//          cout<<"Class C.... \n";
//      }
//  };
//  int main()
//  {
//      A *ptr;
//      A obj1;
//      B obj2;
//      C obj3;
//      ptr = new A;
//      ptr = &obj1;
//      ptr->show();
//      ptr = new B;
//      ptr = &obj2;
//      ptr->show();
//      ptr = new C;
//      ptr = &obj3;
//      ptr->show();
//     return 0;
//  }

// #include <iostream>
// using namespace std;
// class parent
// {
// public:
//     virtual void show()
//     {
//         cout << "Parent class: \n";
//     }
// };

// class child1 : public parent
// {
// public:
//     void show()
//     {
//         cout << "child1 class: \n";
//     }
// };

// class child2 : public parent
// {
// public:
//     void show()
//     {
//         cout << "Child2 class: \n";
//     }
// };
// int main()
// {
//     parent *ptr[5];
//     int op;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Which object to create? \n";
//         cin >> op;
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
//         for (int i = 0; i < 5; i++)
//         {
//             ptr[i]->show();
//         }

//         return 0;
//     }

// pure virtual function and abstract class


// #include<iostream>
// using namespace std;
// class parent{
//     public:
// virtual void show()=0;
// };
// class child1:public parent{
//     void show(){
//         cout<<"Child ... "<<endl;
//     }
// };
// class child2:public parent{
//     void show(){
//         cout<<"Child1 ... "<<endl;
//     }
// };
// int main()
// {
//     parent *ptr[3];
//     ptr[0] =new child1;
//     ptr[1] =new child2;
//     ptr[2] =new child2;
// ptr[0]->show();
// ptr[1]->show();
// ptr[2]->show();
//    return 0;
// }

