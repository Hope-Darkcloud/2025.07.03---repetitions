int pw_casting(float f){
    int int_part = (int)f;
    char char_part = (unsigned char)f;
    float decimal_part = f - int_part;
    int  rounded;
    if (decimal_part >= 0.5){
        rounded = int_part + 1;
    }else{rounded = int_part;
    }
    return int_part + char_part + rounded;
}
