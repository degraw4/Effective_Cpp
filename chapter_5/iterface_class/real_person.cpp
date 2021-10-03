// RealPerson.cpp
#include "person.h"
#include "real_person.h"

Person* Person::CreatePerson(string name, const MyAddress& addr, const MyDate& date)
{
    return new RealPerson(name, addr, date);
}

string RealPerson::GetName() const {
    return Name;
}

string RealPerson::GetAddress() const {
    return Name;
}

string RealPerson::GetBirthday() const {
    return Name;
}