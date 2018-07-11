

#ifndef Toy_hpp
#define Toy_hpp

#include "Picture.hh"
#include <string>
class Toy{
public:
    enum ToyType{
        BASIC_TOY  = 0,
        ALIEN      = 1,
        BUZZ       = 2,
        WOODY      = 3
    };
    //init
    Toy();
    Toy(const Toy &);
    Toy(ToyType type, const std::string &name, const std::string &file);
    virtual ~Toy(){};
    
public:
    //get
    virtual ToyType getType() const;
    virtual std::string getName() const;
    virtual std::string getAscii() const;
    
    //set
    void setType(ToyType type);
    void setName(const std::string &name);
    bool setAscii(const std::string &file);
    void setData(std::string data);

protected:
    ToyType _type;
    std::string _name;
    Picture _picture;
};
#endif /* Toy_hpp */
