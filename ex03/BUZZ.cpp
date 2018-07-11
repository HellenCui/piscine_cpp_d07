

#include "BUZZ.hh"
#include <iostream>
Buzz::Buzz(const std::string &name, const std::string &file)
{
    if (name.empty()) return;
    setName(name);
    setType(BUZZ);
    if (file.empty()) {
        setAscii("buzz.txt");
    }else{
        setAscii(file);
    }
}

Buzz::Buzz(const std::string &name){
    setName(name);
}

void Buzz::speak(const std::string &str){
    std::cout << "BUZZ: " << _name << " \"" <<  str << "\"" << std::endl;
}
