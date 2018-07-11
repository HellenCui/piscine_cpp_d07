

#ifndef ToyStory_hpp
#define ToyStory_hpp
#include <fstream>
#include <iostream>
#include <string>
#include "Toy.hh"
class ToyStory
{
public:
    static void tellMeAStory(std::string const& filename,
                             Toy& toy1,
                             bool(Toy::*func1)(std::string const&),
                             Toy& toy2,
                             bool(Toy::*func2)(std::string const&));
    
    static bool execute(Toy& toy,
                        bool (Toy::*func)(std::string const& str),
                        std::string const& str);
};

#endif /* ToyStory_hpp */
