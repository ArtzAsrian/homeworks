#include <iostream>
using namespace std;
int main(){
    int b = 0;
    cin>>b;
    for(int i = 0; i < b; i++)
    {
        std:: cout << "*";
        std::cout << endl;
        for (int j = 0; j < i + 1; j++)
           std:: cout << "*";
    }
    return 0;
}
