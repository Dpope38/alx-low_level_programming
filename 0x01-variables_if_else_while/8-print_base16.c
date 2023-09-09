#include <stdio.h>
/**
*main -Entry point
*
*Return Always sucess
*/

int main(void)
{
char c;
char d;
c = 'a';
d = 0;
while(d<10){
	putchar(d + '0');
	d++;


} 
while(c <= 'f'){
	putchar(c);
	c++; 




}
putchar('\n');
return 0;
}
