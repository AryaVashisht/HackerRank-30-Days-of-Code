#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int a;
    double b,e;
    string str;
    
    // Read and save an integer, double, and String to your variables.
    cin>>a;
    cin>>b;

cin.ignore(); //ignores an end of line character 
getline(cin, str);

    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    e=b+d;
    cout<<i+a;
    cout<<endl;
    printf("%.1f",e);
    cout<<endl;
    cout<<s+str;
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}
