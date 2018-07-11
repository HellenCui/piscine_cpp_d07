

#include "BUZZ.hh"
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
