//
// Created by Nini de la Fe on 10/3/19.
//

#ifndef CLASSEXCERCISE_FACULTY_H
#define CLASSEXCERCISE_FACULTY_H

#endif //CLASSEXCERCISE_FACULTY_H

#include <string>
using namespace std;

class Faculty {
    FAC(string n, string i, string a, string dob, string DEG, double ssn, double s){
        salary=s;
        name=n;
        id=i;
        address=a;
        DoB=dob;
        degree=DEG;
        SSN=ssn;
    }

public:
    string name;
    string id;
    string address;
    string DoB;
    string degree;
//getter and setter for salary


/* 1) create a getter and setter for each variable in the class*/

private:
    double salary;
    double SSN;

    double getSalary() { return salary; }

    void setSalary(double s);

    void setName(string n);

    double getName() { return name; }

    void setID(string i);

    double getID() { return id; }

    void setAddress(string a);

    double getAddress() { return address; }

    void setDOB(string dob);

    double getDOB() { return DoB; }

    void setDeg(string DEG);

    double getDeg() { return degree; }

    void setSocial(string ssn);

    double getSocial() { return SSN; }

};