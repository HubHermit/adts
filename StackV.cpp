#include "StackV.h"

using namespace std;

int Stack::size()
{
return data.size();
}

void Stack::push(int num)
{
  data.push_back(num);
}

void Stack::pop()
{
  
   data.pop_back();
  
}

int Stack::top()
{
 
return data[data.size()-1];
}

void Stack::clear()
{
  data.clear();
}


