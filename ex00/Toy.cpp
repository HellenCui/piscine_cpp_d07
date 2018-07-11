

#include "Toy.hh"
#include "string.h"

Toy::Toy(){
    _type = BASIC_TOY;
    _name = "toy";
    _picture = Picture("");
}

Toy::Toy(const Toy &a){
    this->_picture = a._picture;
    this->_type = a._type;
    this->_name = a._name;
}

Toy::Toy(ToyType type, const std::string &name, const std::string &file):
_type(type),
_name(name),
_picture(Picture(file)){

}

Toy::ToyType Toy::getType() const {
    return _type;
}

std::string Toy::getName() const {
    return _name;
}

std::string Toy::getAscii() const {
    return _picture.getData();
}

bool Toy::setAscii(const std::string &file){
    if (_picture.getPictureFromFile(file)){
        return true;
    }
    return false;
}
void Toy::setName(const std::string &name){
    _name = name;
}

void Toy::setData(std::string a){
    _picture.setData(a);
};

