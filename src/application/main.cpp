#include <ostream>

#include "common.h"
#include "app.h"

namespace renderer
{
    extern ErrCode init();
}

int main() 
{
    using namespace renderer;
    ErrCode ec = init();
    
    if(ec == EC_OK)
        printf("Renderer init success");
    else
        printf("Renderer init failed");

    return 0;
}