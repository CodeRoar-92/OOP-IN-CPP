// #include<iostream>
// using namespace std;
// class employee{
// protected:
// int id;
// int scale;
// public:
// employee(){

// }
// void input(){
//     cout<<"Enter the id:";
//     cin>>id;
//     cout<<"Enter the scale:";
//     cin>>scale;
// }
// void show(){
//     cout<<"Id: "<<id<<endl;
//     cout<<"Scale: "<<scale<<endl;
// }
// };
// class manager:public employee{
// protected:
// int managerId;
// string department;
// public:
// void input(){
//     manager::input();
//     cout<<"Enter the ManagerId: ";
//     cin>>managerId;
//     cout<<"Enter the Department: ";
//     cin>>department;
// }
// void display(){
//     cout<<"ManagerId: "<<managerId<<endl;
//     cout<<"Department: "<<department<<endl;
// }
// };
// int main()
// {
//     manager m;
//     m.input();
//     m.show();
//     m.display();
//    return 0;
// }

// #include <iostream>
// #include <fstream>
// using namespace std;
// ofstream out("city.txt");
// class LocalPhone
// {
//     double phone;

// public:
//     void input()
//     {
//         cout << "Enter the phone:";
//         cin >> phone;
//         out << phone << endl;
//     }
//     void display()
//     {
//         cout << "Phone: " << phone << endl;
//     }
// };
// class Natphone : public LocalPhone
// {
//     double city_code;

// public:
//     void input()
//     {
//         LocalPhone::input();
//         cout << "Enter the City Code:";
//         cin >> city_code;
//         out << city_code << endl;
//     }
//     void show()
//     {
//         cout << "City Code is: " << city_code << endl;
//     }
// };
// class IntPhone : public Natphone
// {
//     int country_code;

// public:
//     void input()
//     {
//         Natphone::input();
//         cout << "Enter the country Code: ";
//         cin >> country_code;
//         out << country_code << endl;
//     }
//     void show()
//     {
//         Natphone::show();
//         cout << "Country Code: " << country_code << endl;
//     }
// };
// int main()
// {
//     IntPhone i;
//     i.input();
//     i.display();
//     i.show();
//     return 0;
// }


