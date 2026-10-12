#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern int func_0201f2e0(void *p);
extern void *func_0203b688(void);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t n);
extern void func_02005988(void *obj, void *node);
extern void *func_02032d24(void *heap, Pair p, void *obj, uint32_t p5, uint32_t p6);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *func_ov011_021c8478(void *self, Pair p);
extern void *data_020b93b8;
extern void *data_020b8e44;
extern Pair data_ov011_021cbd7c;

int func_ov011_021c857c(char *self)
{
    void *r7;
    void *r6;
    int r4;
    uint32_t buf[3];
    Pair pr;

    if (func_0201f2e0(data_020b93b8) == 0) {
        r7 = func_0203b688();
        if (*(int *)(self + 0x3ac) == 1) {
            uint32_t *p = *(uint32_t **)(self + 0x34c);
            p[3] = (p[3] & ~0xffu) | 2;
        }
        r4 = 0;
        r6 = func_0205681c(0xb0);
        if (r6 != 0) {
            void *node = func_020159c8(data_020b8e44, 0xb4);
            func_02005988(buf, node);
            pr.a = 0x80;
            pr.b = 0x60;
            r4 = 1;
            r6 = func_02032d24(r6, pr, buf, 4, 0);
        }
        func_02056bc0(self + 0x14, r6);
        if (r4 != 0) {
            func_020059cc(buf);
        }
        if (*(int *)(self + 0x3ac) == 1) {
            void *n = func_ov011_021c8478(self, data_ov011_021cbd7c);
            func_02056bc0(r7, n);
        }
        func_02056bc0(self + 0x14, r7);
        return 1;
    }
    return 0;
}
