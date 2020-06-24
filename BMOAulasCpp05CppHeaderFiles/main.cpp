//
//  main.cpp
//  BMOAulasCpp05CppHeaderFiles
//
//  Created by Breno Medeiros on 24/06/20.
//  Copyright © 2020 ProgramasBMO. All rights reserved.
//


#include <iostream>     //Qnd incluimos algo entre <> siginifica "Busque dependencias na pasta iostream"
//Obs: Quando referenciamos pasta tambem podemos usar "", mas arquivosso podem ser "" e não <>.

#include "Log.hpp"
//Obs: Caso o arquivo "Log.hpp" estivesse uma pasta acima desse arquivo(main.cpp),
// entao o include teria que ser da seguinte maineira:
//#include "../Log.hpp"


int main(int argc, const char * argv[]) {
    // insert code here...
    InitLog();
    Log("Hello, World!\n");
    return 0;
}
