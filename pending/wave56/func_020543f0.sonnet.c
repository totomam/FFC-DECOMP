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

static inline int chk(void)
{
    if (*(volatile uint16_t *)0x02fffc40 == 2) return 1;
    return 0;
}

static inline void each(int k)
{
    Node *end = (Node *)data_0213e06c;
    Node *n = *(Node **)(data_0213e060 + 0x10);
    while (n != end) {
        void **vt = *(void ***)n->obj;
        ((void (*)(void *))vt[k])(n->obj);
        n = n->next;
    }
}

void func_020543f0(void)
{
    uint32_t local[6];
    *(void **)((uint8_t *)local + 0x10) = data_0213e080;
    ((uint8_t *)local)[0x14] = 1;
    if (((uint8_t *)local)[0x14] != 0) {
        func_0208763c();
    }
    each(2);
    func_0208b778(!chk() ? 0xc : 4, 0, 0);
    each(3);
    if (((uint8_t *)local)[0x14] != 0) {
        func_02087678(*(void **)((uint8_t *)local + 0x10));
    }
}
