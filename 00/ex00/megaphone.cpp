#include <iostream>
#include <cstring>

int main(int argc, char const *argv[])
{
    if (argc == 1){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl; 
        return 1;
    }
    for (int i = 1; i < argc; i++){
        for (size_t j = 0; j < std::strlen(argv[i]); j++)
            std::cout << (char)toupper(argv[i][j]);
    }
    std::cout << std::endl;
    return 0;
}
