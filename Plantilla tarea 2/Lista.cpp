#include "Lista.h"

Lista::Lista(): _primer(NULL) , _ultimo(NULL)
{

}

void Lista::Agregar(Elemento* elemento)
{
	
	if(_primer ==NULL){
			_primer = elemento;
			_ultimo = elemento;

		}
	else{
		_ultimo= elemento;
	}


}

bool Lista::Eliminar(int indice)
{
if(indice>0){


			return true;
		}
	   return false;












}

