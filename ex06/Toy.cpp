

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

bool Toy::speak(const std::string &str){
    std::cout << _name << " \"" <<  str << "\"" << std::endl;;
    return true;
}

bool Toy::speak_es(const std::string &str){
    speak(str);
    return true;
}

std::ostream &operator<<(std::ostream &os, const Toy &toy){
    os << toy.getName() << std::endl << toy.getAscii() << std::endl;
    return os;
}

void operator<<(Toy &toy, const std::string &str){
    toy.setData(str);
}

Toy::Error Toy::getLastError(){
    Toy::Error s_error;
    
    s_error._what = _error;
    if (_error == "bad new illustration"){
        s_error._where = "setAscii";
        s_error.type = Toy::Error::PICTURE;
    }
    else if (_error == "wrong mode"){
        s_error._where = "speak_es";
        s_error.type = Toy::Error::SPEAK;
    }
    else{
        s_error._where = "speak_es";
        s_error.type = Toy::Error::UNKNOWN;
    }
    return s_error;
}

