#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern int func_ov001_02178324(void *a, void *l, const void *k);
extern int func_ov001_02178340(void *a, void *l, uint32_t v);
extern int func_ov001_021782b4(void *a, void *l, uint32_t n, uint32_t h);
extern int func_ov001_0217826c(void *a, void *l, uint32_t z);
extern void *func_ov000_02168784(uint32_t x, void *l);
extern uint32_t func_ov000_02168688(uint32_t z);
extern const char data_ov001_021910a0[];
extern const char data_ov001_021910a4[];
extern const char data_ov001_021910ac[];

typedef struct {
    uint32_t a0, a1, a2, a3, a4, a5;
} Lcl;

typedef struct {
    uint8_t pad[0x14];
    uint32_t val14;
    uint8_t pad2[0x3c - 0x18];
    uint32_t val3c;
} Obj;

int func_ov001_0217c2b8(void *a, Obj *b, uint32_t c, const uint8_t *text)
{
    uint32_t h;
    Lcl s;
    uint32_t *l;
    int r = 0;

    if (b == 0) {
        return 3;
    }
    if (text == 0) {
        return 3;
    }
    h = func_02092864(text);
    l = (uint32_t *)&s;
    l = (uint32_t *)&s;
    l[4] = 0;
    l[0] = 0;
    l[1] = 0;
    l[2] = 0;
    l[3] = 0;
    l[5] = 0;
    s.a4 = c;
    r = func_ov001_02178324(a, l, data_ov001_021910a0);
    if (r == 0) {
        r = func_ov001_02178340(a, l, c);
        if (r == 0) {
            r = func_ov001_02178324(a, l, data_ov001_021910a4);
            if (r == 0) {
                r = func_ov001_02178340(a, l, h);
                if (r == 0) {
                    r = func_ov001_02178324(a, l, data_ov001_021910ac);
                    if (r == 0) {
                        s.a5 = s.a2;
                        r = func_ov001_021782b4(a, l, (uint32_t)text, h);
                        if (r == 0) {
                            r = func_ov001_0217826c(a, l, 0);
                            if (r == 0) {
                                func_ov000_02168784(b->val3c, l);
                                b->val14 = func_ov000_02168688(0) + 10000;
                                r = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    return r;
}
