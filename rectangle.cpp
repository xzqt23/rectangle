#include <iostream>

int main(){
    
    int rows;
    int columns;
    char symbol;

    std::cout<<"Enter number of rows: ";
    std::cin>>rows;

    std::cout<<"Enter number of columns: ";
    std::cin>>columns;

    std::cout<<"Enter symbol you wanted to use: ";
    std::cin>>symbol;


    for(int x = 1;x <= rows;x++){
        for(int j = 1;j <= columns;j++){
            std::cout<<symbol;
        }
        std::cout<<"\n";
    }

    return 0;
}