#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
  for (int i=0;i<10;i++)
    cout<<50+rand()%50<<endl;
  return 0;
}
