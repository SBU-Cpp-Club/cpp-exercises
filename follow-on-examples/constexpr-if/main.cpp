#include "function.H"

int main() {

    type_1 t1;

    t1.a = 1.0;
    t1.b = 2.0;

    type_2 t2;

    t2.a = 3.0;
    t2.b = 4.0;
    t2.c = 5.0;

    pretty_print(t1);
    pretty_print(t2);

    return 0;
}


