/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }

typedef struct { uint32_t a, b; } S8;

extern "C" {
extern int32_t func_0201ec38(void *arg);
extern void *func_0203f784(void *object, int32_t n);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void func_02046f28(void *node, uint32_t a, int32_t b);
extern void *data_020b93b8;
extern S8 data_020af2d0;
extern char data_020af228[];
extern S8 data_020af2d8;

void func_02040b80(uint8_t *p) {
    uint8_t *node;
    if (func_0201ec38(data_020b93b8) == 0) {
        void *n = func_0203f784(p, 3);
        func_02056bc0(p + 0x14, n);
        { uint32_t a = data_020af2d0.a, b = data_020af2d0.b; *(uint32_t *)(p + 0x80) = a; *(uint32_t *)(p + 0x84) = b; }
        return;
    }
    {
        int n = *(int32_t *)(p + 0x1ac);
        *(int32_t *)(p + 0x1ac) = diff(n, n);
    }
    node = (uint8_t *)func_0205681c(0x94);
    if (node != 0) {
        func_02046f28(node, *(uint32_t *)(p + 0x88), 3);
        *(void **)node = (void *)data_020af228;
        *(uint8_t **)(node + 0x90) = p + 0x1a8;
    }
    func_02056bc0(p + 0x14, node);
    { uint32_t a = data_020af2d8.a, b = data_020af2d8.b; *(uint32_t *)(p + 0x80) = a; *(uint32_t *)(p + 0x84) = b; }
}
}
