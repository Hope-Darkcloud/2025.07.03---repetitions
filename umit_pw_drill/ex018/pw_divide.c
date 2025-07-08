int pw_divide(float *a, float *b, float *r){
if(a == 0 || b == 0 || r == 0){
return 1;
}
if(*b == 0.0f){
return 1;
}
*r = *a / *b;
    return 0;}
