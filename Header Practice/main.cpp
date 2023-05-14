#include <iostream>
#include <fstream>
#include "cylinder.h"
using namespace std;

int main()
{
    // calls original function which defaults to zero
    Cylinder().display();
    // we create a default copy of this object and store it into cylinderA
    Cylinder CylinderA;
    // We change the attributes of the object using our imkplementations(methods/functions)
    double num1 = 1, num2 = 2;
    CylinderA.setCylinderHeight(num1);
    CylinderA.setCylinderRadius(num2);
    // we can now display the new attributes found in the new object we created
    CylinderA.display();
    // We can create another copy of the object and sore it in cylinderB with three argumets instead of the default 2
    int num3 = 3;
    Cylinder CylinderB(num1, num2, num3);
    // This will display the new function attribues
    CylinderB.display();

    return 0;
}
