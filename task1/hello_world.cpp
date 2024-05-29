# include <iostream>
# include <string>

int main(){
    std::cout << "enter your name:";

    std::string name;
    std::getline (std::cin,name);
    std::cout << "hello world from @" << name << std::endl;


    return 0;

}
