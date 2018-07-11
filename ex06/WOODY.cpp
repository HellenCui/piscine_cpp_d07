

#include "WOODY.hh"
WOODY::WOODY(){
    
}

WOODY::WOODY(const std::string &name){
    setName(name);
}

WOODY::WOODY(const std::string &name, const std::string &file)
{
    if (name.empty()) return;
    setName(name);
    setType(BUZZ);
    if (file.empty()) {
        setAscii("woody.txt");
    }else{
        setAscii(file);
    }
}

bool WOODY::speak(const std::string &str){
    std::cout << "WOODY: " << _name << " \"" <<  str << "\"" << std::endl;
    return Toy::speak(str);
}
