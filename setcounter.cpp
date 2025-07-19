/*Pgm 6
Develop a class to represent 1 digit counter.The class must have data member to represent counter 
Functn to set,display of the counter 
Functn to increment & decrement the counter */

# include <iostream>
using namespace std;
class counter 
{
  int c;
  public:
  void setcounter (int v)
  {
   c=v;
   }
   void display()
   {
     cout <<"\n\t Enter the value of counter is :"<<endl;
     }
    void increment()
    {
    if (c < 9)
        c++;
    else
        cout << "\n\tCounter is already at maximum (9)." << endl;
    }
    void decrement()
    {
     if (c > 0)
        c--;
    else
        cout << "\n\tCounter is already at minimum (0)." << endl;
     }
     };
    int main()
    {
     counter c1;
     int input;
     cout << "\n\tEnter an initial value for the counter (0–9): ";
      cin >> input;

      c1.setcounter(input);

     cout<<"\n\tAfter initialization"<<endl;
     
     c1.display();
     c1.increment();
     
     cout<<"\n\tAfter incrementing "<<endl;
     c1.display();
     c1.decrement();
     cout<<"\n\tAfter decrement "<<endl;
     c1.display();
     return 0;
}
    