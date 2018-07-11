

#ifndef BUZZ_hpp
#define BUZZ_hpp

#include <string>
#include "Toy.hpp"

class Buzz : public Toy{
public:
    Buzz(const std::string &name, const std::string &file);
    Buzz(const std::string &name);
    ~Buzz(){}
    
    virtual void speak(const std::string &str);
    virtual bool speak_es(const std::string &str);
};

#endif /* BUZZ_hpp */
