#include "ffc/types.h"

extern int32_t func_0200710c(void *p, int32_t a, int32_t b);
extern void func_02079908(int32_t a, int32_t b);
extern void func_02079978(int32_t a, int32_t b, int32_t c);
extern void func_02006dc8(void *p);

void func_02006fa4(void *p, int32_t v) {
    int16_t *s = (int16_t *)p;
    if (v < 0) {
        v = 0;
    }
    switch (func_0200710c(p, s[2], s[3])) {
    case 0:
        func_02079908(s[2], v);
        break;
    case 1:
        func_02079978(s[2], s[3], v);
        break;
    }
    func_02006dc8(p);
}
