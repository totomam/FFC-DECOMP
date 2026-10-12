#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern int func_ov003_0214b318(void *a, int b);
extern void *func_0203c2ac(void);
extern void *func_02060684(void *a, int b, int c, int d, int e, int f, int g, int h);
extern void func_02056bc0(void *object, void *node);
extern void func_02056c4c(void *object);

void func_ov003_021514d0(uint8_t *obj)
{
    uint8_t *node;
    uint8_t flag;
    uint8_t *p;
    int r4;

    if (*(void **)(obj + 0x80)) {
        node = *(uint8_t **)(obj + 0x90);
        flag = node[0x12];
        p = node + 0x1c;
        if (flag) {
            func_0208763c(p);
        }
        r4 = (*(uint32_t *)(node + 0x14) == 0);
        if (flag) {
            func_02087678(p);
        }
        if (r4 && func_ov003_0214b318(*(void **)(obj + 0x94), 1) == 0) {
            void *a;
            void *b;
            void *c;
            a = func_0203c2ac();
            b = func_02060684(a, 0x10, 0, 0x10, 0x10, 0x1e, 0, 0);
            c = func_02060684(a, 0, 0x10, 0x10, 0x10, 0x1e, 0, 0);
            node = *(uint8_t **)(obj + 0x90);
            func_02056bc0(node, c);
            func_02056bc0(node, b);
            return;
        }
    }

    node = *(uint8_t **)(obj + 0x90);
    flag = node[0x12];
    p = node + 0x1c;
    if (flag) {
        func_0208763c(p);
    }
    r4 = (*(uint32_t *)(node + 0x14) == 0);
    if (flag) {
        func_02087678(p);
    }
    if (!r4 && func_ov003_0214b318(*(void **)(obj + 0x94), 1) != 0) {
        func_02056c4c(*(void **)(obj + 0x90));
    }
}
