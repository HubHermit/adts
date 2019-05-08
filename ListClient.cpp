#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;
 //placing variables into the lists 
 L1.insert(100, 1);
 L1.insert(48, 2);
 L1.insert(56, 3);
 L2.insert(25, 1);
 L2.insert(78, 2);


//displaying the lists

 L1.display(1);	

 L2.display(2);
 
 //removing values from lists 
 L1.remove(2);
 L2.remove(1);

 //displaying lists after removal
 cout<<"\nL1: ";
 L1.display(1);
 cout<<"\nL2: ";
 L2.display(1);
}
