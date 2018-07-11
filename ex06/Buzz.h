

#ifndef BUZZ_hpp
#define BUZZ_hpp

#include <string>
#include "Toy.hh"

class Buzz : public Toy{
public:
    Buzz(const std::string &name, const std::string &file);
    Buzz(const std::string &name);
    ~Buzz(){}
    
    virtual bool speak(const std::string &str);
    virtual bool speak_es(const std::string &str);
};

#endif /* BUZZ_hpp */
