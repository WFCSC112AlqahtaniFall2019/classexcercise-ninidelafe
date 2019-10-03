#include <iostream>
using namespace std;

#include "Faculty.h"

int main() {
    //Faculty prof;

    string name="Nini";
    string degree="Accounting";
    string birthday= "July6";
    string address="Florida";
    string id="678";
    double ssn="456";
    double salary="45678";

    Faculty prof (name,degree,birthday,address,id,ssn,salary);

    prof.setAddress(address);
    prof.setDeg(degree);
    prof.setDOB(birthday);
    prof.setID(id);
    prof.setName(name);
    prof.setSalary(salary);
    prof.setSocial(ssn);

    return 0;
}



