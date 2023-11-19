#include <iostream>
#include <ctime>
using namespace std;
int main()
{
     srand(time(0));
  int sayi1,sayi2;
  sayi1=rand()%100;
  sayi2=rand()%100;
  cout<<sayi1<<endl;
  cout<<sayi2<<endl;
  if(sayi1<sayi2)
  {
      cout<<"buyuk sayi:";
        cout<<sayi2;
  }

        if(sayi1>sayi2)
        {
           cout<<"buyuk sayi:";
        cout<<sayi1;
        }

  return 0;
}
