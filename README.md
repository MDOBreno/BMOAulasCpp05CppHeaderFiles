# BMOAulasCpp05CppHeaderFiles
C++ Header Files: [ https://youtu.be/9RJTQmK0YPI ]



==> Caracteristica: [Exemplo de "a.cpp", "a.h", "b.cpp", "b.h", "c.cpp" e "c.h"]
- ARMAZENA as assinaturas(declarações) das funções publicas de seu arquivo ".cpp".
- Não são compilados(transformados em binarios), o que permitem ser LIDOS FACILMENTE

==> Utilidades dos Headers: 
- Para que a.cpp possa CONHECER as funções de b.cpp ao importar suas declaracoes em b.h
- Para que a.cpp, por conhecer as funções de b.cpp, possa UTILIZAR essas funcoes
- Porque c.h so armazenar as assinaturas(declarações) das funcoes de c.cpp, e não suas funções em si, permite que as funções de c.cpp possam ser chamadas em a.cpp e b.cpp simultaneamente(quando estes fazem include de c.h) SEM QUE OCORRA PROBLEMA DE LINKING durante Build do projeto

==> Conclusões entre usar .h e .hpp: [Tomando os Projetos da Stefanini como amostragem]
- Em ObjC usa-se quase 4x mais C++ do que C
- Em ObjC usa-se mais .hpp(10,48..) do que .h(7,70..)


	8889		 	.hpp
   /848				.cpp
	--------------
	10,4823113208


	2820 			.h
   /366				.c
	--------------
	7,7049180328


