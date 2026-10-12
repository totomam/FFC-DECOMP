#include "ffc/types.h"

extern void func_02091a24(void *msg);
extern uint32_t func_0208f42c(void);
extern void *func_0205681c(uint32_t size);
extern void *func_0205327c(void *destination, const void *source);
extern void func_02052be0(void);
extern void func_02052d10(uint32_t a, uint32_t b);
extern void func_020258b4(void *p);
extern void func_02056844(void *p);
extern uint8_t data_020af6b0[];
extern uint8_t data_020af604[];

typedef struct Sub {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint8_t e;
} Sub;

typedef struct Node {
    uint32_t n0;
    uint32_t n4;
    void *n8;
    Sub sub;
} Node;

Node *func_020441f8(uint32_t *list, uint32_t *out, uint32_t flag1, uint32_t flag2, Sub *src)
{
    Node *node;
    Node *tmp;
    Sub *s;
    uint32_t *lp;

    if (list[0] == 0xffffffffu) {
        func_02091a24(data_020af6b0);
        func_0208f42c();
    }
    node = func_0205681c(0x20);
    if (node == 0) {
        func_02091a24(data_020af604);
        func_0208f42c();
    }
    lp = list + 1;
    tmp = node;
    s = (Sub *)((uint8_t *)node + 0xc);
    if (s != 0) {
        s->a = src->a;
        func_0205327c(&s->b, &src->b);
        s->c = src->c;
        s->d = src->d;
        s->e = src->e;
        if (s->c != 0) {
            func_02052be0();
            if (s->e != 0) {
                func_02052d10(s->c, s->d);
            }
        }
    }
    node = tmp;
    node->n4 = 0;
    tmp = 0;
    node->n0 = 0;
    if (node) {
        node->n8 = (void *)out;
    }
    if (flag1) {
        out[0] = (uint32_t)node;
    } else {
        out[1] = (uint32_t)node;
    }
    (void)lp[0];
    lp[-1]++;
    func_020258b4(node);
    if (flag2) {
        list[3] = (uint32_t)node;
    }
    if (tmp) {
        func_02056844(tmp);
    }
    return node;
}
