//
// Created by Nini de la Fe on 10/3/19.
//
#include "Faculty.h"
Faculty::FAC(string n, string i, string a, string dob, string DEG, double ssn, double s){
salary=s;
name=n;
id=i;
address=a;
DoB=dob;
degree=DEG;
SSN=ssn;
}

void Faculty::setSalary(double s){
    salary=s;
}

void Faculty::setName(string n){
name=n;
}

void Faculty::setID(string i){
id=i;
}

void Faculty::setAddress(string a){
address=a;
}

void Faculty::setDOB(string dob){
DoB=dob;
}
void Faculty::setDeg(string DEG){
degree=DEG;
}

void Faculty::setSocial(string ssn){
SSN=ssn;
}
