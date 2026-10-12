#include "ffc/types.h"

extern uint8_t *func_ov000_02166414(void);
extern uint32_t func_ov001_02180818(void *a);
extern uint16_t func_ov001_0218081c(void *a);
extern int func_ov000_0216888c(void *list, void *key, void *cb, int a, int b);
extern int func_ov001_021821ac(uint32_t a, uint32_t b, void *c);
extern void func_ov000_021652a8(int a, int b, int c, void *d, int e);
extern void func_ov000_02168848(void *list, int idx);
extern int func_ov000_02168768(void *list);
extern void *func_ov000_0216876c(void *list, int idx);
extern int func_ov000_02166444(void);
extern uint8_t data_ov000_0216b59c[];
extern uint8_t data_ov000_0216b5c4[];
extern uint8_t data_ov000_0216b5fc[];

typedef struct {
    uint32_t a;
    uint16_t b;
    uint32_t c;
} Key;

typedef void (*Fn)(uint32_t x, uint32_t y, int type, int flag, void *extra);

void func_ov000_021665c8(void *a, int mode) {
    int sel;
    int i;
    int r;
    int flag;
    uint8_t *item;
    Key k3;
    Key k1;
    Key k2;
    int type;
    int count;
    uint8_t *obj;

    obj = func_ov000_02166414();

    switch (mode) {
    case 7: type = 7; break;
    case 2: type = 2; break;
    case 6: type = 6; break;
    case 0: type = 0; break;
    default: type = 0xd; break;
    }

    if (mode == 2) {
        k1.a = func_ov001_02180818(a);
        k1.b = func_ov001_0218081c(a);
        sel = func_ov000_0216888c(*(void **)(obj + 4), &k1, (void *)func_ov000_02166444, 0, 0);
        if (sel != -1) {
            k2.a = func_ov001_02180818(a);
            k2.b = func_ov001_0218081c(a);
            r = func_ov001_021821ac(k2.a, k2.b, &k2);
            func_ov000_021652a8(0xc, 0, 0x10, data_ov000_0216b59c, r);
            func_ov000_02168848(*(void **)(obj + 4), sel);
        }
    }

    count = func_ov000_02168768(obj + 8);
    for (i = 0; i < count; i++) {
        item = (uint8_t *)func_ov000_0216876c(obj + 8, i);
        k3.a = func_ov001_02180818(a);
        k3.b = func_ov001_0218081c(a);
        r = func_ov000_0216888c(*(void **)(item + 0x20), &k3, (void *)func_ov000_02166444, i, i);
        if (r != -1) {
            if (*(void **)(item + 0x2c) != 0) {
                func_ov000_021652a8(0xc, i, 0x10, data_ov000_0216b5c4, i);
                flag = i;
                if (mode == 2) {
                    flag = 1;
                }
                ((Fn)*(void **)(item + 0x2c))(func_ov001_02180818(a),
                                              func_ov001_0218081c(a),
                                              type, flag, *(void **)(item + 0x38));
            }
            func_ov000_02168848(*(void **)(item + 0x20), r);
        }
    }

    if (*(int *)(obj + 0x30) > 0) {
        if (*(void **)(obj + 0x10) != 0) {
            func_ov000_021652a8(0xc, 0, 0x10, data_ov000_0216b5fc, 0);
            flag = 0;
            if (mode == 2) {
                flag = 1;
            }
            ((Fn)*(void **)(obj + 0x10))(func_ov001_02180818(a),
                                         func_ov001_0218081c(a),
                                         type, flag, *(void **)(obj + 0x2c));
        }
        *(int *)(obj + 0x30) = *(int *)(obj + 0x30) - 1;
    }
}
