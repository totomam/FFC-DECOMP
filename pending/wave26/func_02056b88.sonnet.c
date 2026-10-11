#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_dead_sink(void *p);

typedef struct Node {
    uint32_t unk0;
    struct Node *next;
} Node;

void func_02056b88(void *a0, void *a1)
{
    uint8_t *p = (uint8_t *)a0;
    Node *n = (Node *)a1;
    uint8_t f;
    uint32_t tmp[2];
    void *sub;

    f = p[0x12];
    sub = p + 0x1c;

    if (f != 0) {
        func_0208763c(sub);
    }
    if (*(Node **)(p + 0x14) == 0) {
        *(Node **)(p + 0x18) = (Node *)((uint8_t *)n + 4);
    }
    n->next = *(Node **)(p + 0x14);
    *(Node **)(p + 0x14) = n;
    if (f != 0) {
        func_02087678(sub);
    }
    if (f == 0xff) {
        func_dead_sink(tmp);
    }
}
