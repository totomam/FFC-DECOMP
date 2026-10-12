#include "ffc/types.h"

extern int func_ov000_02151a9c(void *obj);
extern void func_020849f4(void *src, void *dst, uint32_t n);
extern void func_020849e0(uint32_t val, void *dst, uint32_t n);

typedef struct { uint8_t a, b, c; uint8_t lo:7; uint8_t hi:1; } E;
typedef struct { uint8_t r:7; uint8_t f:1; } F;
typedef struct { uint8_t d[0xc0]; } O;

void func_ov000_02151d90(int a, uint8_t *base)
{
    E *e = (E *)(base + 0xbf4);
    O *o = (O *)(base + 0xc20);
    int i;
    int cur = a;
    E t4;
    O t2;

    for (i = a - 1; i >= 0; i--) {
        int found = 0;
        F *fp = (F *)(base + 0x14bc);
        if (fp->f == 1 && func_ov000_02151a9c(&o[cur]) == 1) {
            if (e[cur].c < e[i].c) {
                if (func_ov000_02151a9c(&o[i]) == 0) found = 1;
            } else found = 1;
        } else if (e[cur].b >= 0x13 && e[cur].b <= 0x16) {
            if (e[cur].c >= e[i].c) {
                if (e[i].b >= 0x13 && e[i].b <= 0x16) found = 1;
                else if (e[i].hi + e[i].lo + e[i].a + e[i].b + e[i].c == 0) found = 1;
            }
        } else {
            if (e[cur].c < e[i].c) {
                if (e[i].b >= 0x13 && e[i].b <= 0x16) found = 1;
            } else {
                if (((F *)(base + 0x14bc))->f == 1) {
                    if (func_ov000_02151a9c(&o[i]) == 0) found = 1;
                } else found = 1;
            }
        }
        if (found == 1) {
            func_020849f4(&e[i], &t4, 4);
            func_020849f4(&e[cur], &e[i], 4);
            func_020849f4(&t4, &e[cur], 4);
            func_020849f4(&o[i], &t2, 0xc0);
            func_020849f4(&o[cur], &o[i], 0xc0);
            func_020849f4(&t2, &o[cur], 0xc0);
            cur = i;
        }
    }
    func_020849e0(0, base + 0xbf4 + 0x28, 4);
    func_020849e0(0, base + 0xc20 + 0x780, 0xc0);
}
