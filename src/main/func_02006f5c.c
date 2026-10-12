#include "ffc/types.h"

extern int32_t func_0200710c(int16_t *p);
extern void func_02006fa4(int16_t *p, int32_t c);
extern void func_02079940(int32_t a, int32_t c);
extern void func_02079978(int32_t a, int32_t b, int32_t c);

void func_02006f5c(int16_t *p, int32_t a, int32_t b, int32_t c) {
    int32_t r = func_0200710c(p);
    if (a == p[2] && b == p[3]) {
        func_02006fa4(p, c);
        return;
    }
    switch (r) {
    case 0:
        func_02079940(a, c);
        return;
    case 1:
        func_02079978(a, b, c);
        return;
    }
}
