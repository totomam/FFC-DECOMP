#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t func_02054200(void);
extern void func_0205420c(void);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021a17fc(void *obj, uint32_t a, int b);
extern void func_02056bc0(void *object, void *node);
extern void func_02036750(void *p);
extern void func_0201f1f0(void *a, uint32_t b, void *c);
extern void func_0201f1a8(void *a, uint32_t b, void *c);
extern void func_020367a8(void *p);
extern void *func_0202157c(uint32_t a, uint32_t b);
extern Pair data_ov007_021c3b64;
extern Pair data_ov007_021c3b6c;
extern Pair data_ov007_021c3b74;
extern Pair data_ov007_021c3b7c;
extern void *data_020b93b8;

void func_ov007_021a1a0c(void *self)
{
    char *s = (char *)self;
    int flag = 0;
    uint32_t buf[22];
    uint32_t r4;
    uint8_t i;
    uint32_t mask = 0xffffff;
    uint32_t bit = 0x02000000;
    void *node;
    int st;
    Pair v;

    st = *(*(int **)(s + 0x88));
    if (st == 1) {
        *(int *)(s + 0x8c) = 1;
        *(uint8_t *)(s + 0x98) = (uint8_t)flag;
        v = data_ov007_021c3b64;
        *(Pair *)(s + 0x80) = v;
        return;
    }
    if (st == 4) {
        *(int *)(s + 0x8c) = 3;
        *(int *)(s + 0x90) = 2;
        v = data_ov007_021c3b6c;
        *(Pair *)(s + 0x80) = v;
        return;
    }
    if (st == 3) {
        if (!(func_02054200() & bit)) {
            *(int *)(s + 0x8c) = 3;
            *(int *)(s + 0x90) = 1;
            v = data_ov007_021c3b74;
            *(Pair *)(s + 0x80) = v;
            return;
        }
        r4 = func_02054200() & mask;
        if (func_02054200() & (bit << 1)) {
            flag = 1;
        }
        func_0205420c();
        node = func_0205681c(0x88);
        if (node != 0) {
            node = func_ov007_021a17fc(node, r4, flag);
        }
        func_02056bc0(s + 0x14, node);
        flag = 1;
    }
    st = *(*(int **)(s + 0x88));
    if (st != 2) {
        for (i = 0; i < 3; i++) {
            func_02036750(buf);
            func_0201f1f0(data_020b93b8, i + 1, buf);
            func_0201f1a8(data_020b93b8, i + 4, buf);
            func_020367a8(buf);
        }
    }
    *(int *)(s + 0x8c) = 3;
    st = *(*(int **)(s + 0x88));
    if (st == 2) {
        *(int *)(s + 0x8c) = 2;
    } else if ((uint32_t)(st - 5) <= 1) {
        *(int *)(s + 0x8c) = 7;
    } else if (st == 7) {
        *(int *)(s + 0x8c) = 8;
    }
    if (flag == 0) {
        node = func_0202157c(0x45, 0);
        func_02056bc0(s + 0x14, node);
    }
    v = data_ov007_021c3b7c;
    *(Pair *)(s + 0x80) = v;
}
