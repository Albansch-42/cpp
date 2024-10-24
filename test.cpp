#include <iostream>
#include <string>

bool    isDouble( std::string _str ) {

    if ( _str.find( '.' ) == std::string::npos || _str.find( '.' ) == 0 
        || _str.find( '.' ) == _str.length() - 1 ){
            std::cout << "double false first" << std::endl;
            return false;
        }
    int j = 0;
    int found = 0;
    if ( _str[j] == '-' || _str[j] == '+' )
        j++;
    for ( int i( j ); i < ( int ) _str.length(); i++ ) {
        if ( _str[i] == '.' )
            found++;
        if ( ( !std::isdigit( _str[i] ) && _str[i] != '.' ) || found > 1 )
            return false;
    }

    return true;
}

bool    isFloat ( std::string _str ) {

    if ( _str.find( '.' ) == std::string::npos)
    {
        std::cout << "float false 1" << std::endl;
        return false;
    }
    if ( _str.back() != 'f' )
    {
        std::cout << (_str.back()) << std::endl;
        std::cout << "float false 2" << std::endl;
        return false;
    }
    if (_str.find( '.' ) == 0 )
    {
        std::cout << "float false 3" << std::endl;
        return false;
    }
    if (_str.find( '.' ) == _str.length() - 2 ){
        std::cout << "float false 4" << std::endl;
        return false;
    }
        
    int found = 0;
    int j = 0;
    if ( _str[j] == '-' || _str[j] == '+' )
        j++;
    for ( int i( j ); i < ( int ) _str.length() - 1; i++ ) {
        if ( _str[i] == '.' )
            found++;
        if ( ( !std::isdigit( _str[i] ) && _str[i] != '.' ) || found > 1 )
            return false;
    }

    return true;
}

int main(int argc, char **argv) {
    
    if (isFloat(argv[0])){
        std::cout << "it s an float" << std::endl;
    }
    if (isDouble(argv[0])){
        std::cout << "it s an Double" << std::endl;
    }
}