#include "ffc/types.h"

typedef struct {
    int32_t lo : 9;
    int32_t mid : 11;
    uint32_t t : 4;
    uint32_t hi : 8;
} Rec;

extern Rec *func_02008358(int32_t id);
extern void func_020069c8(int32_t a, int32_t b, int32_t c);
extern void func_02006a64(int32_t a, int32_t b, int32_t c);
extern void func_02006af8(int32_t a, int32_t b, int32_t c);
extern void func_02006a90(int32_t a, int32_t b, int32_t c);
extern void func_02006b48(int32_t a);
extern void func_02006ba4(int32_t a);
extern void func_02006bec(int32_t a);

void func_020080d0(int32_t id, int32_t arg)
{
    Rec *p;

    p = func_02008358((int16_t)id);
    if (p == 0) {
        return;
    }
    switch (p->t) {
    case 0:
    case 1:
    case 2:
        func_020069c8(p->lo, p->mid, arg);
        return;
    case 3:
        func_02006a64(p->lo, p->mid, arg);
        return;
    case 5:
        func_02006af8(p->lo, p->mid, arg);
        return;
    case 6:
        func_02006af8(p->lo, p->mid, arg);
        return;
    case 7:
        func_02006a90(p->lo, p->mid, arg);
        return;
    case 8:
        func_02006b48(arg);
        return;
    case 10:
        func_02006ba4(arg);
        return;
    case 11:
        func_02006bec(arg);
        return;
    case 12:
        func_02006ba4(arg);
        return;
    default:
        return;
    }
}
