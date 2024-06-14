// C++ program to demonstate the use of try,catch and throw
// in exception handling.

// #include <iostream>
// #include <stdexcept>
// using namespace std;

// int main()
// {

// 	// try block
// 	try {
// 		int numerator = 10;
// 		int denominator = 0;
// 		int res;

// 		// check if denominator is 0 then throw runtime
// 		// error.
// 		if (denominator == 0) {
// 			throw runtime_error(
// 				"Division by zero not allowed!");
// 		}

// 		// calculate result if no exception occurs
// 		res = numerator / denominator;
// 		//[printing result after division
// 		cout << "Result after division: " << res << endl;
// 	}
// 	// catch block to catch the thrown exception
// 	catch (const exception& e) {
// 		// print the exception
// 		cout << "Exception " << e.what() << endl;
// 	}

// 	return 0;
//  }


// #include<iostream>
// #include<stdexcept>
// using namespace std;
// int main()
// {
//     int nume;
//     int denum;
//     int res;
//     int numerator = 10;
// cin>>nume>>denum;
//     try{
//         if(denum == 0){
//             throw runtime_error("Devision by zero: ");
//         }
// res=nume/denum;
//         cout<<"Result: "<<res;
//     }
//     catch(const exception &e){
//         cout<<"Exception: "<<e.what()<<endl;
//     }
//    return 0;
// }



//vey important program;



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