#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void shell_loop()
{
    std::string userInput;
    std::vector<std::string> strVector;
    while (1)
    {
        std::getline(std::cin, userInput,' ');
        strVector.push_back(userInput);
        if(fork())

     }
}

int main()
{
    shell_loop();
}