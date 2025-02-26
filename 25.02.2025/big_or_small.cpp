#include <iostream>
using namespace std;
void check(){
        int a = 0;
        std::cout<<"first num";
        std::cin>>a;
        int b = 0;
        std::cout<<"second num";
        std::cin>>b;
        if(a>b){
                std::cout<<"a>b";
        }else {
                std::cout<<"a<b";
        }


}
int main(){
        check();
}
