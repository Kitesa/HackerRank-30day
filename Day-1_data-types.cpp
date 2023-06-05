#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
     // Declare second integer, double, and String variables.
    int input1;
    std::cout << std::setprecision(1) << std::fixed;
    double input2;
    string input3;
   
    
    // Read and save an integer, double, and String to your variables.
    cin>>input1;
    cin>>input2;
    cin.get();
    getline(cin, input3);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout<<i+input1<<endl;
    // Print the sum of the double variables on a new line.
    cout<<d+input2<<endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout<<s+input3<<endl;
    return 0;
}
