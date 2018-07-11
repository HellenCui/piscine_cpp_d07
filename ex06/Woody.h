

#ifndef WOODY_hpp
#define WOODY_hpp

#include <string>
#include "Toy.hh"

class WOODY : public Toy{
public:
    WOODY();
    WOODY(const std::string &name);
    WOODY(const std::string &name, const std::string &file);
    ~WOODY(){}
    virtual bool speak(const std::string &str);
};

#endif /* WOODY_hpp */
