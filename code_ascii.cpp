/*Adrian Glabik I semestr niestacjonarne 2016*/
#include <iostream>
char znak;
int main()
{
	printf("Nacisnij klawisz i zatwierdz enter\n");
	scanf("%c",&znak);
	printf("Twoj znak to %c\n", znak);
	printf("Numer ascii znaku to %d\n", znak);
	printf("W systemie osemkowym to %o\n", znak);
	printf("W systemie szesnatkowym to %x\n", znak);
	return 0;
}
