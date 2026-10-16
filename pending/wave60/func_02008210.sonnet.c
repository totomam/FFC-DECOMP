#include "ffc/types.h"
extern struct { int a; int b; } data_020a7ea4;
extern void func_02079838(int);
extern void func_02006c44(int);
void func_02008210(int x) {
    if (x < 0) x = 0;
    else if (x > 127) x = 127;
    data_020a7ea4.b = x;
    func_02079838(1);
    func_02006c44(data_020a7ea4.b);
}
