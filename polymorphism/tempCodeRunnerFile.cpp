#include<iostream>
#include<fstream>
#include<stdexcept>
using namespace std;
int main()
{
    string str;
    ifstream file("city.txt");
    try{
        if(!file){
            throw runtime_error("File opening error:");
        }
    file>>str;
    }
    catch(const exception &e){
        cout<<"Exception: "<<e.what()<<endl;
    }
   return 0;
}