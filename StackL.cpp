#include "StackL.h"

using namespace std;
//taking another break to make some diagrams to figure this out

int Stack::size()
{
  return data.size();
}

void Stack::push(int num)//pushes data to the top of the stack
{
  data.insert(num, 1);
}

void Stack::pop()//removes data from the top of the stack
{
  data.remove(1);
}

int Stack::top()//view value at top
{
  
 return data.display(1);
}

void Stack::clear()//clears the entire stack
{
  data.empty();
}
