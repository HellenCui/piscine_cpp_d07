

#ifndef Picture_hpp
#define Picture_hpp

#include <iostream>
#include <string>
class Picture{
public:
    //init
    Picture();
    Picture(const std::string &file);
    Picture(const Picture &a);
    ~Picture();
    // Get
    bool getPictureFromFile(const std::string& file);
    virtual std::string getData() const;
    // set
    virtual void setData(std::string data);
protected:
    std::string _data;
};

#endif /* Picture_hpp */
