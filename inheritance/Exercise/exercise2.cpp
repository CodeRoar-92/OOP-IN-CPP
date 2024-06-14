//Exercise question No 3;
// #include <iostream>
// using namespace std;
// class teacher
// {
// protected:
//     int age;
//     string name;
//     string address;

// public:
//     teacher()
//     {
//         age = 0;
//         name = "";
//         address = "";
//     }
//     void input()
//     {
//         cout << "Enter the name:";
//          cin>> name;

//         cout << "Enter the age:";
//         cin >> age;

//         cout << "Enter the Address:";
//         cin >> address;
//     }
//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Address: " << address << endl;
//     }
// };
// class writer
// {
// protected:
//     int number_of_books;

// public:
//     writer()
//     {
//         number_of_books = 0;
//     }
//     void input()
//     {
//         cout << "Enter the No.books: ";
//         cin >> number_of_books;
//     }
//     void display()
//     {
//         cout << "The number books are written by author is: " << number_of_books << endl;
//     }
// };
// class scholar : public teacher, public writer
// {
//     public:
//     void input()
//     {
//         teacher::input();
//         writer::input();
//     }
//     void display()
//     {
//         teacher::display();
//         writer::display();
//     }
// };
// int main()
// {
//     scholar s;
//     s.input();
//     s.display();
//     return 0;
// }


//Exercise question No4;

// #include<iostream>
// using namespace std;
// class book{
//     protected:
// int bookId;
// char bookName[50];
// float price;
// public:
// book(){
//     bookId=0;
//     bookName[0]='\0';
//     price =0;
// }
// void input(){
//     cout<<"Enter the bookId:";
//     cin>>bookId;
//     cout<<"Enter bookName:";
//     cin>>bookName;
//     cout<<"Enter the Price:";
//     cin>>price;
// }
// void show(){
//     cout<<"Book Id: "<<bookId<<endl;
//     cout<<"Book Name: "<<bookName<<endl;
//     cout<<"Price: "<<price<<endl;
// }
// };
// class writer {
// protected:
// string writerName;
// string address;
// int nu_of_books[5];
// public:
// writer(){
//     writerName ="";
//     address ="";
//     nu_of_books[0]='\0';
// }
// void input(){
//     cout<<"Enter the writer name:";
//     cin>>writerName;
//     cout<<"Enter the Address:";
//     cin>>address;
//     for(int i =0; i<5; i++){
//     cout<<"Enter the nu-of-books:";
//     cin>>nu_of_books[i];
//     }
// }
// void display(){
//     cout<<"Writer Name: "<<writerName<<endl;
//     cout<<"Address: "<<address<<endl;
//     for(int i =0; i<5; i++){
//           cout<<"Number of Books: "<<nu_of_books[i]<<endl;
//     }
// }
// };
// int main()
// {
//     book b1;
//     writer w1;
//     b1.input();
//     b1.show();
//     w1.input();
//     w1.display();
//    return 0;
// }



//Exercise question N0 1 +++++++++++++++++++

// #include<iostream>
// using namespace std;
// class employee{
// protected:
// int id;
// int scale;
// public:
// employee(){
//     id=scale=0;
// }
// void input(){
//     cout<<"Enter the id:";
//     cin>>id;
//     cout<<"Enter the Scale:";
//     cin>>scale;
// }
// void show(){
//     cout<<"Id: "<<id<<endl;
//     cout<<"Scale: "<<scale<<endl;
// }
// };
// class manager:public employee{
// string department;
// public:
// void input(){
//     employee::input();
//     cout<<"Enter the department: ";
//     cin>>department;
// }
// void show(){
//     employee::show();
//     cout<<"Department Name: "<<department<<endl;
// }
// };
// int main()
// {
//     manager m;
//     m.input();
//     m.show();
//    return 0;
// }