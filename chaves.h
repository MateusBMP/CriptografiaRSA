typedef unsigned long int l_int;

l_int mod(l_int a, l_int b);				//Calcula modulo de dois inteiros para calcular valor de d
//l_int elevar(l_int numero, l_int base, l_int potencia);		//Eleva um numero a sua potencia
void escreveChave(l_int n, l_int e);		//Escreve a chave publica em um arquivo de texto
l_int geraN(l_int p, l_int q);				//Calcula valor de n
l_int geraD(l_int fiN, l_int e, int c);		//Calcula valor de d
