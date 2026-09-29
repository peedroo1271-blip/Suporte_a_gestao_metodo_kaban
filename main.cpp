#include "dominios.hpp"
#include "entidades.h"

using namespace std;


int main(){
    try
    {

    }

    catch(invalid_argument& e)
    {
        cerr << e.what() <<endl;
        return -1;
    }
    return 0;
}
