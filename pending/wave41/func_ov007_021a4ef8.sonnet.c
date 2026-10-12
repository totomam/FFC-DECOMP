/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

struct Num {
    int v;
    Num(int x) : v(x) {}
    ~Num() {}
};

inline int diff(const Num &a, int b) { return a.v - b; }

extern "C" {
void *func_0205681c(uint32_t size);
void *func_0206df9c(void *p, int x);
void func_0206e27c(void *p, int x);
void func_02055ae8(void *a, void *b);
void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c4250;
extern Pair data_ov007_021c4258;

void func_ov007_021a4ef8(uint8_t *self)
{
    void *p = func_0205681c(0x29c);
    if (p) {
        p = func_0206df9c(p, 0);
    }
    *(void **)(self + 0xfc) = p;
    func_0206e27c(*(void **)(self + 0xfc), 1);
    {
        void *q = (void *)self;
        if (self) {
            q = (void *)(self + 0x80);
        }
        func_02055ae8((uint8_t *)*(void **)(self + 0xfc) + 0x20, q);
    }
    func_02056bc0(self + 0x48, *(void **)(self + 0xfc));
    {
        Num n = *(int *)(self + 0x120);
        *(int *)(self + 0x120) = diff(n, n.v);
    }
    {
        int x = *(volatile int *)(self + 0x12c);
        int y = *(int *)(self + 0x12c);
        *(int *)(self + 0x12c) = diff(Num(y), x);
    }
    {
        uint32_t a = data_ov007_021c4250.a;
        uint32_t b = data_ov007_021c4250.b;
        *(uint32_t *)(self + 0xb8) = a;
        *(uint32_t *)(self + 0xbc) = b;
    }
    {
        uint32_t a = data_ov007_021c4258.a;
        uint32_t b = data_ov007_021c4258.b;
        *(uint32_t *)(self + 0xc0) = a;
        *(uint32_t *)(self + 0xc4) = b;
    }
}
}
