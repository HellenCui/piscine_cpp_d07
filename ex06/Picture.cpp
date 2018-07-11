
#include "Picture.hh"
#include <fstream>

Picture::Picture(const std::string &file):
_data("")
{
    Picture::getPictureFromFile(file);
}

Picture::Picture(){
    _data = "";
}

Picture::~Picture(){
    
}

bool Picture::getPictureFromFile(const std::string &file){
    std::ifstream ifs(file.c_str(), std::ios::in);
    _data = "";
    if (ifs.is_open()){
        char fileData;
        while (ifs.get(fileData)){
            _data += fileData;
        }
        ifs.close();
        return true;
    }else{
        _data = "ERROR";
        return false;
    }
}

std::string Picture::getData() const{
    return _data;
}

void Picture::setData(std::string data){
    _data = data;
}
