#include <iostream>
using namespace std;
int main (){
    int a,b;
    a = 0; 
    b = 0;
    
    char s;
    
    cin>>a>>s>>b;
    
    switch(s){

    case '+':
        std::cout << a + b << std::endl;
    break;
    
    case '-':
        std::cout << a - b << std::endl;
    break;
        
    case '*':
        std::cout << a * b << std::endl;
    break;
    
    case '/':
        std::cout << a / b << std::endl;
    break;
        
    }
}
