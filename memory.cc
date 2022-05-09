#include <iostream>
#include <fstream>
#include <string>

int main()
{
    int i, p = 0;
    char *path;
    std::string content = "a";
    std::cout << "\n Enter the number of byte: ";
    std::cin >> i;
    std::cout << "\n Enter the output directory: ";
    std::cin >> path;
    while(p < i)
    {
        p++;
        std::ofstream file;
        file.open(path + std::to_string(p) + ".MALWARE", std::ios_base::out);
        file << content;
        file.close();
        std::cout << "\n File created: " + std::to_string(p) + "\r\n";
    }
    
}