#include "ffc/types.h"

extern void func_0208763c(void);
extern void func_0208b778(uint32_t a, uint32_t b, uint32_t c);
extern void func_02087678(void *p);
extern char data_0213e080[];
extern char data_0213e060[];
extern char data_0213e06c[];

typedef struct Node {
    uint32_t unused;
    struct Node *next;
    void *obj;
} Node;

void func_020543f0(void)
{
    uint32_t local[6];
    Node *n;
    Node *end;

    *(void **)((uint8_t *)local + 0x10) = data_0213e080;
    ((uint8_t *)local)[0x14] = 1;
    if (((uint8_t *)local)[0x14] != 0) {
        func_0208763c();
    }
    end = (Node *)data_0213e06c;
    n = *(Node **)(data_0213e060 + 0x10);
    while (n != end) {
        void **vt = *(void ***)n->obj;
        ((void (*)(void *))vt[2])(n->obj);
        n = n->next;
    }
    {
        uint8_t t;
        uint32_t m;
        t = (*(uint16_t *)0x02fffc40 == 2);
        m = t ? 4 : 0xc;
        func_0208b778(m, 0, 0);
    }
    n = *(Node **)(data_0213e060 + 0x10);
    end = (Node *)data_0213e06c;
    while (n != end) {
        void **vt = *(void ***)n->obj;
        ((void (*)(void *))vt[3])(n->obj);
        n = n->next;
    }
    if (((uint8_t *)local)[0x14] != 0) {
        func_02087678(*(void **)((uint8_t *)local + 0x10));
    }
}
