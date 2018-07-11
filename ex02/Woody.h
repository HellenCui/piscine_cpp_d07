

#ifndef WOODY_hpp
#define WOODY_hpp

#include <string>
#include "Toy.hh"

class WOODY : public Toy{
public:
    WOODY(const std::string &name, const std::string &file);
    ~WOODY(){}
};

#endif /* WOODY_hpp */
