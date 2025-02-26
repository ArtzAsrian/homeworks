#include <iostream>
using namespace std;
void checker(){
        int num = 1;
        std::cout<<"write num";
        std::cin>>num;
        num = num%2;
        if(num == 1){
                std::cout<<"number is prime";

        }else {
                std::cout<<"number is complex";
        }


}


int main()
        checker();
}
  
