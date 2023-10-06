#pragma once
#include <iostream>
using namespace std;

class Usuario
{
private:
    string user;
    string password;
    int age;

public:
    Usuario(const string& user, const string& password, int age); // Constructor


    virtual std::string getUser() const;
    virtual void setUser(const std::string& user);

    virtual std::string getPassword() const;
    virtual void setPassword(const std::string& password);

    virtual int getAge() const;
    virtual void setAge(int age);

};
