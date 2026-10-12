#include "ffc/types.h"

extern int func_ov000_02156f0c(void *a, int b);
extern int func_ov000_021570d4(void *a, void *b);
extern void func_ov000_02164af4(void);
extern int func_02093b18();
extern int func_ov000_0215710c(void *a, void *b, void *c, int d);
extern void func_ov000_02159014(int a, int b);

typedef struct { uint32_t w[8]; } Arr8;
extern Arr8 data_ov000_02169fc4;
extern uint8_t *data_ov000_02170000;
extern uint8_t data_ov000_0216a024[];
extern uint8_t data_ov000_0216a02c[];
extern int data_02144c00;
extern uint8_t data_ov000_0216a038[];
extern uint8_t data_ov000_0216a044[];

int func_ov000_02157ff4(void) {
    Arr8 list = data_ov000_02169fc4;
    int8_t buf[0x34];
    int tmp;
    int flag;
    int i;
    int k;
    uint8_t *g;
    uint8_t *h;
    int r;
    int cnt;
    int v;
    int8_t mask;

    flag = 0;
    h = data_ov000_02170000;
    if (func_ov000_02156f0c(h, 0) == 0) goto err;
    if (func_ov000_021570d4(h, data_ov000_0216a024)) func_ov000_02164af4();
    if (func_ov000_021570d4(h, data_ov000_0216a02c) == 0) goto err;
    v = func_02093b18();
    if (data_02144c00 == 0x22) goto err;
    if (v != 0xc8) goto err;
    r = func_ov000_0215710c(h, data_ov000_0216a038, &tmp, 4);
    if (r <= 0) goto err;
    v = func_02093b18(&tmp);
    if (data_02144c00 == 0x22) goto err;
    if (v == 1 || v > 0x64) {
        func_ov000_02159014(0x11, (int)0xffff7f18 - v);
        return 0;
    }
    for (i = 0; i < 7; i++) {
        if (list.w[i] == 0) continue;
        r = func_ov000_0215710c(h, (void *)list.w[i], buf, 0x33);
        if (r < 0) goto err;
        if (r == 0) continue;
        flag = 1;
        g = data_ov000_02170000;
        cnt = *(int *)(g + 0x1d60);
        if (r < cnt) goto err;
        mask = (int8_t)(1 << i);
        for (k = 0; k < cnt; k++) {
            if (buf[k] == '1') {
                int8_t *a = *(int8_t **)(data_ov000_02170000 + 0x1d58);
                a[k] |= mask;
            }
        }
    }
    r = func_ov000_0215710c(h, data_ov000_0216a044, buf, 0x33);
    if (r <= 0) goto err;
    g = data_ov000_02170000;
    cnt = *(int *)(g + 0x1d60);
    if (r < cnt) goto err;
    *(int *)(*(uint8_t **)(g + 0x1d5c)) = 0;
    cnt = *(int *)(data_ov000_02170000 + 0x1d60);
    if (cnt <= 0) return 1;
    for (k = 0; k < *(int *)(data_ov000_02170000 + 0x1d60); k++) {
        if (buf[k] == '1') {
            int *c = *(int **)(data_ov000_02170000 + 0x1d5c);
            (*c)++;
            if (flag) {
                int8_t *a = *(int8_t **)(data_ov000_02170000 + 0x1d58);
                a[k] |= (int8_t)0x80;
            } else {
                uint8_t *p = *(uint8_t **)(data_ov000_02170000 + 0x1d58);
                p[k] = 1;
            }
        }
    }
    return 1;

err:
    func_ov000_02159014(0x11, (int)0xffff7f04);
    return 0;
}
