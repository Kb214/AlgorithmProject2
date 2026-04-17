#include<iostream>

int main(){

    char* str;

    std::cin.getline(str, 80);
    
    size_t length = std::char_traits<char>::length(str);

    std::cout << length << "\n";

    return 0;
}