void pw_ultimate_div_mod(int *a, int *b){
int divise, modulo;
divise = *a / *b;
modulo = *a % *b;
*a= divise;
*b= modulo;
}
