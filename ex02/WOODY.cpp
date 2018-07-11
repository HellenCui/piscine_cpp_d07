

#include "WOODY.hh"
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
