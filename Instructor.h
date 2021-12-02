#pragma once
#include "Person.h"
class Instructor :
    public Person   //Inherits everything from person class
{
public:
    Instructor(string id = "s0000000", string newName = "no name", string newOffice = "no office");
protected:

private:
    string office;
};

