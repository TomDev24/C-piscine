#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

void    find_and_replace(std::string &line, const char *s1, const char *s2){
    size_t pos = 0;

    while((pos = line.find(s1, pos)) != std::string::npos){
        line.erase(pos, std::strlen(s1));
        line.insert(pos, s2);
        pos += std::strlen(s2);
    }
}

int main(int argc, const char** argv) {
    std::string line;
    std::ifstream read_file;
    std::ofstream out_file;

    if (argc != 4){
        std::cout << "Not enough params" << std::endl;
        return 1;
    }
    read_file.open(argv[1]);
    out_file.open(std::string(argv[1]) + ".replace");
    if (read_file && out_file){
        while(getline(read_file, line)){
            find_and_replace(line, argv[2], argv[3]);
            out_file << line << std::endl;
        }
    }
    return 0;
}