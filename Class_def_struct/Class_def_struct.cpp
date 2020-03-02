// Using a structure to define a class.
#include <iostream>
#include <cstring>
using namespace std;

struct mystr {                                          //class mystr {
   void buildstr(char *s); // public                    //char str[255];
   void showstr();                                    //public:
   private: // now go private                            //void buildstr(char *s); // public
   char str[255];                                          //void showstr();
                                                            // } ;

} ;

void mystr::buildstr(char *s){
   if(!*s) *str = '\0'; // initialize string
   else strcat(str, s);}

void mystr::showstr() {cout << str << "\n"; }


int main() {
   mystr s;
   s.buildstr(""); // init
   s.buildstr("Hello ");
   s.buildstr("there!");
   s.showstr();
   return 0;
}
