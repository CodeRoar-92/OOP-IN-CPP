// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     ofstream obj("f1.txt");
//     string str;
//     for(int i =0; i<5; i++){
//         cout<<"Enter the city name: ";
//         cin>>str;
//         obj<<str<<endl;
//     }

//    return 0;
// }

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     string str;
//     ifstream obj("f1.txt");
//     if(!obj){
//         cout<<"File opening Error: ";
//         exit(1);
//     }
//     while(!obj.eof()){
//         obj>>str;
//         cout<<"City name: "<<str<<endl;
//     }
//    return 0;
// }

// #include <iostream>
// #include <fstream>
// using namespace std;
// ofstream obj("f1.txt");
// class myclass
// {
// public:
//     string str;
//     void show()
//     {
//         int n = 10;
//         for (int i = 0; i < 10; i++)
//         {
//             cout << "Enter the city: ";
//             cin >> str;
//             obj << str << endl;
//         }
//     }
// };
// int main()
// {

//     myclass c1, c2;
//     c1.show();
//     return 0;
// }

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     string str;
//     ifstream obj("f1.txt");
//     if(!obj){
//         cout<<"File opening Error: ";
//         exit(1);
//     }
//     while(!obj.eof()){
//         obj>>str;
//         cout<<"City name: "<<str<<endl;
//     }
//    return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
// vector<int>a;
// a.push_back(4);
// a.push_back(2);
// a.push_back(1);
// a.push_back(4);
//    return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
// int n;cin>>n;
// vector<int>a(n);
// for(int i=0; i<n; i++){
//     cin>>a[i];
// }
//    return 0;
// }