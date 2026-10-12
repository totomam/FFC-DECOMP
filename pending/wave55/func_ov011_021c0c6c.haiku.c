#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct { int quot; int rem; } DivRes;

extern void *func_0203b6fc(void *p);
extern uint32_t func_02036994(void *obj, uint32_t idx);
extern void func_02035f58(void *obj);
extern void func_0201f600(void *a, uint32_t idx, void *b, void *c);
extern uint32_t func_021adc9c(void *a, void *b, void *c, void *d);
extern uint32_t func_ov009_0219a390(void *o, Pair x);
extern uint32_t func_ov011_021c0574(void *a, void *b, uint32_t idx);
extern void func_02056bc0(void *obj, uint32_t node);
extern void *func_02035fd0(void *obj);
extern uint32_t func_020369c0(const void *obj, uint32_t idx);
extern int func_ov011_021c0058(void *a, void *b, uint32_t idx);
extern DivRes func_0209a76c(int a, int b);
extern uint32_t func_ov011_021c0ebc(void *p, void *buf, Pair c, Pair d);
extern void *data_020b93b8;
extern Pair data_ov011_021caf30[];
extern Pair data_ov011_021cad60;
extern Pair data_ov011_021cad30;

void *func_ov011_021c0c6c(uint8_t *p)
{
    void *r7;
    uint8_t i;
    uint8_t b1c;
    uint8_t buf80[0x60];
    uint8_t buf20[0x60];
    int v;
    int sel;
    uint32_t res;
    DivRes dv;

    r7 = func_0203b6fc(p);
    for (i = 0; i < 5; i++) {
        if (func_02036994(p + 0x220, i)) {
            func_02035f58(buf80);
            func_0201f600(data_020b93b8, i, p + 0x220, buf80);
            if (func_021adc9c(p, p + 0x2cc, buf80, &b1c)) {
                res = func_ov009_0219a390(((void **)(p + 0xd8))[i], data_ov011_021caf30[b1c]);
            } else {
                res = func_ov011_021c0574(p, p + 0x220, i);
            }
            func_02056bc0(r7, res);
            func_02035fd0(buf80);
        }
        if (func_02036994(p + 0x2cc, i)) {
            func_02035f58(buf20);
            func_0201f600(data_020b93b8, i, p + 0x2cc, buf20);
            if (!func_021adc9c(p, p + 0x220, buf20, &b1c)) {
                if (p[0x27b] == 0 && func_020369c0(p + 0x2cc, i)) {
                    sel = 0;
                } else if (p[0x27b] == 1 && !func_020369c0(p + 0x2cc, i)) {
                    sel = 1;
                } else {
                    v = func_ov011_021c0058(p, p + 0x2cc, i);
                    dv = func_0209a76c(v, 10);
                    if (dv.quot > p[0x27d]) {
                        sel = 0;
                    } else if (dv.quot < p[0x27d]) {
                        sel = 1;
                    } else {
                        sel = 2;
                    }
                }
                if (sel == 0) {
                    res = func_ov011_021c0ebc(p, buf20, data_ov011_021cad60, data_ov011_021caf30[i]);
                } else if (sel == 1) {
                    res = func_ov011_021c0ebc(p, buf20, data_ov011_021cad30, data_ov011_021caf30[i]);
                } else {
                    res = func_ov009_0219a390(((void **)(p + 0xec))[dv.rem], data_ov011_021caf30[i]);
                }
                func_02056bc0(r7, res);
            }
            func_02035fd0(buf20);
        }
    }
    return r7;
}
