#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;
 //placing variables into the lists 
 L1.insert(100, 1);
 L1.insert(2, 2);
 L1.insert(56, 3);
 L2.insert(25, 1);
 L2.insert(78, 2);


//displaying the lists
 cout<<"L1: ";
 L1.display();
 cout<<"\nL2: ";
 L2.display();
 
 //removing values from lists 
 L1.remove(2);
 L2.remove(1);

 //displaying lists after removal
 cout<<"\nL1: ";
 L1.display();
 cout<<"\nL2: ";
 L2.display();
}
