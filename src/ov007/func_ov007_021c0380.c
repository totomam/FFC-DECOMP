#include "ffc/types.h"

extern void *func_ov000_021653d4(uint32_t size);
extern void *func_020903cc(void *p, int c, uint32_t n);

struct Ctx {
    void *f0;
    uint8_t pad0[0x20];
    void *f24;
    uint8_t pad1[0x20];
    uint32_t f48;
};

struct Node {
    struct Ctx *owner;
    void *a;
    void *b;
    uint32_t pad;
    void *c;
    void *d;
};

void *func_ov007_021c0380(struct Ctx *this, void *a, void *b, void *c, void *d)
{
    struct Node *n;

    this->f48 = 0;
    if (b == 0) {
        this->f48 = 3;
        return 0;
    }
    if (this->f0 == 0 || this->f24 == 0) {
        this->f48 = 1;
        return 0;
    }
    n = func_ov000_021653d4(0x24);
    if (n == 0) {
        this->f48 = 2;
        return 0;
    }
    func_020903cc(n, 0, 0x24);
    n->owner = this;
    n->a = a;
    n->b = b;
    n->c = c;
    n->d = d;
    return n;
}
