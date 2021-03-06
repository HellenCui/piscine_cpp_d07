

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

void Toy::setData(std::string data){
    _picture.setData(data);
};

void Toy::setType(ToyType type){
    _type = type;
}

void Toy::speak(const std::string &str){
    std::cout << _name << " \"" <<  str << "\"" << std::endl;;
}

std::ostream &operator<<(std::ostream &os, const Toy &toy){
    os << toy.getName() << std::endl << toy.getAscii() << std::endl;
    return os;
}

void operator<<(Toy &toy, const std::string &str){
    toy.setData(str);
}
