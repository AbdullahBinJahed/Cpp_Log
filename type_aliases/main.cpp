#include <iostream>
#include "Sales_item.h"

typedef double wages;    // wages is a synonym for double
typedef wages base, *p;  // base is a synonym for double, p for double*

/* Alias Declaration */

using SI = Sales_item;

int main()
{
  wages hourly, weekly;  // same as double hourly, weekly;
  SI item;               // same as Sales_item item;
  
  return 0;
}