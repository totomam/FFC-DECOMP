#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
} Pair;

extern int func_0201e9f8(void *p);
extern void func_ov013_021bd11c(void *obj, int n);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *a, int b);
extern void func_02005988(void *dst, void *src);
extern void *func_02032d24(void *a, int w, int h, void *c, int d, int e);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *func_ov013_021bf980(void *a, void *b, uint8_t c, void *d);
extern void *func_02056f0c(void *a, int b);
extern void *data_020b93b8;
extern void *data_020b8e44;
extern Pair data_ov013_021c4208;
extern Pair data_ov013_021c4210;

void func_ov013_021bd710(uint8_t *self) {
    void *r6;
    void *tmp;
    int32_t pos[3];
    volatile Pair sz;
    int used;
    int zero;

    if (func_0201e9f8(data_020b93b8) == 0) {
        func_ov013_021bd11c(self, 3);
        zero = 0;
        used = 0;
        r6 = func_0205681c(0xb0);
        used = 0;
        if (r6 != 0) {
            tmp = func_020159c8(data_020b8e44, 0x1bd);
            func_02005988(pos, tmp);
            sz.a = 0x80;
            sz.b = 0x60;

            r6 = func_02032d24(r6, sz.a, sz.b, pos, 4, zero);
            used = 1;
        }
        func_02056bc0(self + 0x14, r6);
        if (used != 0) {
            func_020059cc(pos);
        }
        *(int32_t *)(self + 0xf0) = -1;
        *(Pair *)(self + 0xb8) = data_ov013_021c4208;
    } else {
        func_ov013_021bd11c(self, 2);
        r6 = func_0205681c(0x114);
        if (r6 != 0) {
            r6 = func_ov013_021bf980(r6, self, ((uint8_t *)*(void **)(self + 0xc8))[0x5c], self + 0xf0);
        }
        tmp = func_0205681c(0x18);
        if (tmp != 0) {
            tmp = func_02056f0c(tmp, 1);
        }
        func_02056bc0(self + 0x14, tmp);
        func_02056bc0(self + 0x14, r6);
        *(Pair *)(self + 0xb8) = data_ov013_021c4210;
    }
}
