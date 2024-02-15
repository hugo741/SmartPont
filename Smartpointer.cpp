/* Basicamente un SmartPointer es un puntero el cual elimina el espacio de 
   memoria cuando se termina de utilizar (cuando sale del ambito).
   Estos smart pointers son herramientas valiosas para evitar fugas de memoria 
   y desreferencias de punteros nulos, ya que gestionan automáticamente la 
   liberación de recursos asociados cuando ya no son necesarios. Además, 
   ayudan a mejorar la legibilidad y mantenibilidad del código.
*/

#include<memory>
#include<iostream>
using namespace std;

class Test{
 public:
  Test(){
    cout << "Texto entrada" << endl;
  } 
  ~Test(){
    cout << "Texto salida" << endl;
  }
};

int main(){
   unique_ptr<Test> xd  = make_unique<Test>();   
  return 0;  
}