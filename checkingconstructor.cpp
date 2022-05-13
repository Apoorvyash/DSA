#include <iostream>

using namespace std;

 
class base {
  public:
    base()    
    { cout << "Constructing base\n"; }
    ~base()
    { cout<< "Destructing base\n"; }    
};
 
class derived: public base {
  public:
    derived()    
     { cout << "Constructing derived\n"; }
    ~derived()
       { cout << "Destructing derived\n"; }
};
int main(){
    derived *p;
   derived *d = p; 
  base *b = d;
  delete b;
  getchar();
  
    
    
    return 0;
}