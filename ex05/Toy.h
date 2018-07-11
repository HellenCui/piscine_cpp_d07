

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
    
    virtual void speak(const std::string &str);
    virtual bool speak_es(const std::string &str);

protected:
    ToyType _type;
    std::string _name;
    Picture _picture;
    std::string _error;
public:
    class Error{
    public:
        Error(){};
        ~Error(){};
        typedef enum { UNKNOWN, PICTURE, SPEAK } ErrorType;
        ErrorType type;
        std::string _what;
        std::string _where;
        std::string where(){ return _where; }
        std::string what(){ return _what; }
    };
    Toy::Error getLastError();
};


std::ostream &operator<<(std::ostream &os, const Toy &toy);
void operator<<(Toy &toy, const std::string &str);
#endif /* Toy_hpp */
