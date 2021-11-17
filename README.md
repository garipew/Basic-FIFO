# Basic-FIFO
Generic First-In-First-Out type made in C.

A brief description of the implemented commands:

"criaFilaVazia()" -> Create a new FIFO-type struct and returns its pointer.\n
"criaItem(int)" -> Create a new Item-type and returns its pointer. Recieves a int as parameter that will serve as an ID to the new Item-type.
"filaVazia(Fila*)" -> Returns 1 if the FIFO-type is empty and 0 otherwise. Recieves a FIFO-type pointer as parameter.
"enfilera(Item*, Fila*)" -> Add an Item-type to the last position of a FIFO-type.
"imprimeFila(Fila*)" -> Recieves a FIFO-type as parameter and print all Item-type's IDs. If the parameter is an empty FIFO-type this function will print "Fila Vazia.".
"desenfilera(Fila*)" -> Remove the first element of the FIFO-type passed as a parameter.
"deletaFila(Fila*)" -> Recieve a FIFO-type as parameter and delete it. 

Made by gabriben9
