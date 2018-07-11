

#ifndef Picture_hpp
#define Picture_hpp

#include <iostream>
#include <string>
class Picture{
public:
    Picture();
    Picture(const std::string &file);
    Picture(const Picture &a);
    ~Picture();
    std::string _data;
    bool getPictureFromFile(const std::string& file);
    
    virtual std::string getData() const;
    virtual void setData(std::string data);
};

#endif /* Picture_hpp */
