#include <iostream>
using namespace std;
int main (){
   float a, b, area;
   int opzione;
   cout << "inserire a,b " << endl;
   cin >> a >> b;
   cout << "inserire opzione" << endl;
   cin >> opzione ;
   switch (opzione){
      case 0:
         area = ((a*b)/2);
         cout << area << endl;
         break;
      case 1:
         area = (a*a);
         cout << area << endl;
         break;
      case 2:
         area = (a*b);
         cout << area << endl;
         break;
      default:
         cout << "opzione non valida" << endl;

   }
   

   return 0;
}
