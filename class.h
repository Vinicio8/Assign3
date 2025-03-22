#ifndef CLASS_H
#define CLASS_H
#include <string>

class PersonalClass {
    private:
        int data;  
        void printData();  
    
    public:
        PersonalClass();
        PersonalClass(int data);
        int getData() const;
        void setData(int data);
        void showData() { printData(); }
    };
    
#endif 
