

#ifndef BUZZ_hpp
#define BUZZ_hpp

#include <string>
#include "Toy.hh"

class Buzz : public Toy{
public:
    Buzz(const std::string &name, const std::string &file);
    ~Buzz(){}
};

#endif /* BUZZ_hpp */
