#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

int getRandom(void)
{
 int n=rand() % 99;
  return n;
}
int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
  int gerard=(rdnum1 + rdnum2 + rdnum3) / 3.0;
  int r1,r2,r3,min;
  if (gerard>rdnum1)
    r1= gerard - rdnum1;
    else 
     r1= rdnum1 - gerard;
  if (gerard>rdnum2)
    r2= gerard - rdnum2;
    else 
     r2= rdnum2 - gerard;
  if (gerard>rdnum3)
    r3= gerard - rdnum3;
    else 
     r3= rdnum3 - gerard;  
if (r1 <r2)
    if (r1 <r3)
      return rdnum1;
    else return rdnum3;
  else if (r2 <r3)
    return rdnum2;
  else return rdnum3;
}