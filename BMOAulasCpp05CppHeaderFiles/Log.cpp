//
//  Log.cpp
//  BMOAulasCpp05CppHeaderFiles
//
//  Created by Breno Medeiros on 24/06/20.
//  Copyright © 2020 ProgramasBMO. All rights reserved.
//

#include <iostream>
#include "Log.hpp"



void InitLog() {
    Log("Inicializar Log");
}

void Log(const char* mensagem) {
    std::cout << mensagem << std::endl;
}
