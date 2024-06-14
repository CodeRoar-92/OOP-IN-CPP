// #include<iostream>
// using namespace std;
// class main{
// protected:
// int n;
// public:
// main(){
//     n=0;
// }
// main(int n){
//     this->n=n;
// }
// void show(){
//     cout<<"N: "<<n<<endl;
// }
// };
// class child:public main{
// protected:
// char ch;
// public:
// child():main(){
//     ch='X';
// }
// child(char ch,int n):main(n){
//     this->ch=ch;
// }
// void display(){
//     cout<<"Char: "<<ch<<endl;
// }
// };
// int main()
// {
// child c1('$',1000) ,c2;
// c2.show();
// c2.display();
// c1.show();
// c1.display();
//    return 0;
// }

// #include<iostream>
// using namespace std;
// class Simple{
// protected:
// int a,b;
// public:
// void input(){
//     cout<<"Enter the a: ";
//     cin>>a;
//     cout<<"Enter the b: ";
//     cin>>b;
// }
// void add(){
//     cout<<"a+b= "<<a+b<<endl;
// }

// void sub(){
//     cout<<"a-b= "<<a-b<<endl;
// }
// void mul(){
//     cout<<"a*b= "<<a*b<<endl;
// }
// void div(){
//     cout<<"a/b= "<<a/b<<endl;
// }
// };
// class child:public Simple{
//     public:
// void add(){
//     if(a < 0 || b < 0){
//         cout<<"Invalid: ";
//     }
//     else{
//         Simple::add();
//     }
// }
// void sub(){
//     if(a < 0 || b < 0){
//         cout<<"Invalid: ";
//     }
//     else{
//         Simple::sub();
//     }
// }
// void mul(){
//     if(a < 0 || b < 0){
//         cout<<"Invalid: ";
//     }
//     else{
//         Simple::mul();
//     }
// }
// void div(){
//     if(a < 0 || b < 0){
//         cout<<"Invalid: ";
//     }
//     else{
//         Simple::div();
//     }
// }
// };

// int main()
// {
//     child c1;
//     c1.input();
//     c1.add();
// c1.sub();
// c1.div();
// c1.mul();
//    return 0;
// }

// #include<iostream>
// using namespace std;
// class myClass{
// protected:
// int n;
// public:
// void input(){
//     cout<<"Enter the n: ";
//     cin>>n;
// }
// void show(){
//     cout<<"N: "<<n<<endl;
// }
// };
// int main()
// {
//     myClass *ptr;
//     ptr = new myClass;
//     ptr->input();
//     ptr->show();
//    return 0;
// }

// #include<iostream>
// using namespace std;
// class myClass{
//     protected:
//     char name[50];
//     public:
//     void input(){
//         cout<<"Enter the city Name: ";
//         cin>>name;
//     }
//     void output(){
//         cout<<"City Name: "<<name<<endl;
//     }
// };
// int main()
// {
//     myClass *ptr[5];
//     for(int i=0; i<5; i++){
//         ptr[i]=new myClass;
//         ptr[i]->input();
//     }
//     for(int i=0; i<5; i++){
//         ptr[i]->output();
//     }
//    return 0;
// }

// #include <iostream>
// using namespace std;
// class myClass
// {
// public:
//  virtual void show()
//     {
//         cout << "Class A: ";
//     }
// };
// class child : public myClass
// {
// public:
//     void show()
//     {
//         cout << "Child B: ";
//     }
// };
// class child1:public myClass
// {
// public:
//     void show()
//     {
//         cout << "Clild C: ";
//     }
// };
// int main()
// {
//     myClass obj;
//     child obj2;
//     child1 obj3;
//     myClass *ptr;
//     ptr = &obj;
//     ptr->show();
//     ptr = &obj2;
//     ptr->show();
//     ptr = &obj3;
//     ptr->show();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class parent
// {
// public:
//     virtual void show()
//     {
//         cout << "Parent A: ";
//     }
// };
// class child1 : public parent
// {
// public:
//     void show()
//     {
//         cout << "Child B: ";
//     }
// };
// class child2 : public parent
// {
// public:
//     void show()
//     {
//         cout << " Child C: ";
//     }
// };
// int main()
// {
//     parent *ptr[5];
//     int op;
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<"Enter the option: ";
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
// class parent{
//     protected:
//     int n;
// };
// class child1:virtual public parent{

// };
// class child2:public virtual parent{

// };
// class baby:public child1,public child2{
//     public:
//     void input(){
//         cout<<"Enter the N: ";
//         cin>>n;
//     }
//     void set(){
//         cout<<"N: "<<n;
//     }
// };
// int main()
// {
// baby b;
// b.input();
// b.set();
//    return 0;
// }

// #include<iostream>
// using namespace std;
// class parent{
//     public:
//  virtual void show()=0;
// };
// class child:public parent{
//     public:
// void show(){
//     cout<<"Child 1:";
// }
// };
// class child1:public parent{
//     public:
// void show(){
//     cout<<"Child 2:";
// }
// };
// int main()
// {
//     parent *ptr[2];
//     ptr[0] = new child;
// ptr[1]=new child1;
// ptr[0]->show();
// ptr[1]->show();
//    return 0;
// }

//File Handling;


// #include <iostream>
// using namespace std;
// #include <cmath> // for M_PI

// class Shape {
// public:
//     // Pure virtual function
//     virtual double area() const = 0;

//     // Simple virtual function
//     virtual void describe() const {
//         cout << "This is a shape." << endl;
//     }

// };

// class Circle : public Shape {
// private:
//     double radius;

// public:
//     Circle(double r) : radius(r) {}

//     double area() const override {
//         return M_PI * radius * radius;
//     }

//     void describe() const override {
//         std::cout << "This is a circle with radius " << radius << "." << std::endl;
//     }
// };

// class Rectangle : public Shape {
// private:
//     double length, width;

// public:
//     Rectangle(double l, double w) : length(l), width(w) {}

//     double area() const override {
//         return length * width;
//     }

//     void describe() const override {
//         std::cout << "This is a rectangle with length " << length << " and width " << width << "." << std::endl;
//     }
// };

// int main() {
//     Shape* shapes[2];
//     shapes[0] = new Circle(5);
//     shapes[1] = new Rectangle(4, 6);

//     for (int i = 0; i < 2; ++i) {
//         shapes[i]->describe();
//         std::cout << "Area: " << shapes[i]->area() << std::endl;
//         delete shapes[i]; // Clean up
//     }

//     return 0;
// }

//Read and write the file:+++++++++++++++++++++++++++++++++

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     char city_names[50];
//     ofstream out("city.txt");
//     ifstream in("city.txt");
//     if(!out){
//         cout<<"File Opening Error: ";
//         exit(1);
//     }
//     for(int i =0; i<5; i++){
//         cout<<"Enter the city Names: ";
//         cin>>city_names;
//         out<<city_names<<endl;
//     }
//     out.close();
//     cout<<"The list of country names is given below: \n";
//     while(!in.eof()){
//         in>>city_names;
//         cout<<city_names<<endl;
//     }
//     in.close();
//    return 0;
// }


//Another important program;
// #include<iostream>
// #include<stdexcept>
// #include<fstream>
// using namespace std;
// int main()
// {
//     try{
//         string name;
//         ifstream file("f1.txt");
//         if(!file){
//         throw runtime_error("File opening Error");
//         }
//         for(int i=0; i<5; i++){
//             file>>name;
//             cout<<"City Name: "<<name<<endl;
//         }
//         file.close();
//     }
//     catch(const exception &e){
//         cout<<"Exception: "<<e.what()<<endl;
//     }
//    return 0;
// }