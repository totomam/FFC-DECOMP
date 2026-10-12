#include "ffc/types.h"

extern void func_02091a24(void *msg);
extern uint32_t func_0208f42c(void);
extern void *func_0205681c(uint32_t size);
extern void func_020258b4(void *node);
extern void func_02056844(void *mem);
extern uint8_t data_ov007_021c4788[];
extern uint8_t data_ov007_021c4600[];

typedef struct Node {
    uint32_t a;
    uint32_t b;
    void *c;
    uint8_t d[6];
} Node;

typedef struct Head {
    uint32_t count;
    uint32_t list;
    Node *last;
} Head;

Node *func_ov007_021a8ed4(Head *p, Node **link, int at_tail, int flag2, uint8_t *src)
{
    Node *n;
    Node *tmp;
    uint8_t *dst;

    if (p->count == 0xffffffff) {
        func_02091a24(data_ov007_021c4788);
        func_0208f42c();
    }

    n = (Node *)func_0205681c(0x14);
    if (n == 0) {
        func_02091a24(data_ov007_021c4600);
        func_0208f42c();
    }

    tmp = n;
    dst = n->d;
    if (dst != 0) {
        dst[0] = src[0];
        dst[1] = src[1];
        dst[2] = src[2];
        dst[3] = src[3];
        dst[4] = src[4];
        dst[5] = src[5];
    }

    n->b = 0;
    tmp = 0;
    n->a = 0;
    n->c = link;

    if (at_tail) {
        *link = n;
    } else {
        link[1] = n;
    }

    p->count++;
    func_020258b4(n);

    if (flag2) {
        p->last = n;
    }

    if (tmp != 0) {
        func_02056844(tmp);
    }
    return n;
}
