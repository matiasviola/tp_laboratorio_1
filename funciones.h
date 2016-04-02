#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/**
*\brief se pasan los datos a la funcion por valor y devuelve el resultado
*\param operacion que se realizara
*\return resultado de operacion que se mostrara al usuario
*/
float sumar (float x,float y)
{
  float resultado;
  resultado=x+y;
  return resultado;
}

/**
*\brief se pasan los datos a la funcion por valor y devuelve el resultado
*\param operacion que se realizara
*\return resultado de operacion que se mostrara al usuario
**/
float restar (float x,float y)
{
    float resultado;
    resultado=x-y;
    return resultado;
}

/**
*\brief se pasan los datos a la funcion por valor y devuelve el resultado
*\param declaracion de variable local y operacion que se realizara
*\return resultado de operacion que se mostrara al usuario
**/
float dividir (float x,float y)
{
    if (y==0)
    {
       return printf("El dividendo no puede ser 0 \n");
    }
    else
    {
    float resultado;
    resultado=x/y;
    return resultado;
    }
}

/**
*\brief se pasan los datos a la funcion por valor y devuelve el resultado
*\param operacion que se realizara
*\return resultado de operacion que se mostrara al usuario
**/
float multiplicar (float x, float y)
{
    float resultado;
    resultado=x*y;
    return resultado;
}

/**
*\brief se pasa el dato a la funcion por valor y devuelve el resultado
*\param bucle y operacion que se realizara
*\return resultado de operacion que se mostrara al usuario
**/
float factorizar (float x)
{
    float factorizacion=1;
        int contador=1;

    while (contador<=x)
    {
        factorizacion=contador*factorizacion;
        contador++;
    }
        return factorizacion;
}




#endif // FUNCIONES_H_INCLUDED
