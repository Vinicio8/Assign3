#include "class.h"
#include <iostream>

void sandbox() {  
    PersonalClass obj1;           
    PersonalClass obj2(42);     

    obj1.showData();
    obj2.showData();
    obj1.setData(10);
    obj1.showData();
     
}
