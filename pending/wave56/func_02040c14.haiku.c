#include "ffc/types.h"

extern void *data_020b93b8;
typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_020af2e0;

extern void func_0201e954(void *a, void *b, void *c);
extern void *func_0201ecf0(void *a);
extern void func_0201ec94(void *a, void *b, void *c);
extern void func_02084b2c(void *dst, int c, uint32_t n);
extern void func_0201e92c(void *a, void *b, void *c);
extern void func_0201e9e4(void *a);
extern int func_0201ece4(void *a);
extern void *func_0203f784(void *p, int id);
extern void func_02056bc0(void *object, void *node);
extern void func_0201b854(void *a);

void func_02040c14(uint8_t *p) {
    uint32_t i;
    uint32_t buf[6];

    if (*(uint32_t *)(p + 0x1ac) != 0) {
        for (i = 0; i < *(uint32_t *)(p + 0x1ac); i++) {
            func_0201e954(data_020b93b8, (*(void ***)(p + 0x1a8))[i], buf);
            void *t = func_0201ecf0(data_020b93b8);
            func_0201ec94(data_020b93b8, t, buf);
            func_02084b2c(buf, 0, 0x18);
            func_0201e92c(data_020b93b8, (*(void ***)(p + 0x1a8))[i], buf);
        }
        func_0201e9e4(data_020b93b8);
    }

    if (func_0201ece4(data_020b93b8) == 0) {
        void *r = func_0203f784(p, 0x13);
        func_02056bc0(p + 0x14, r);
        func_0201b854(data_020b93b8);
    }

    *(Pair *)(p + 0x80) = data_020af2e0;
}
