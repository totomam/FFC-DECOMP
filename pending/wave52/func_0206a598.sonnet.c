#include "ffc/types.h"

extern void func_02091a24(void *p);
extern void func_0208f42c(void);
extern void *func_0205681c(uint32_t size);
extern void func_020258b4(void *p);
extern void func_02056844(void *p);
extern uint8_t data_020b1b70[];
extern uint8_t data_020b1a98[];

typedef struct Node {
    void *next;
    void *prev;
    void *link;
    uint32_t data[3];
} Node;

typedef struct Blk {
    uint32_t w[3];
} Blk;

void *func_0206a598(uint32_t *a, void **r1, int flag, int flag2, Blk *src)
{
    Node *node;
    volatile uint32_t pad[3];
    uint32_t *volatile pa;
    Node *volatile tmp;

    if (a[0] == 0xFFFFFFFFu) {
        func_02091a24(data_020b1b70);
        func_0208f42c();
    }
    node = (Node *)func_0205681c(0x18);
    if (node == 0) {
        func_02091a24(data_020b1a98);
        func_0208f42c();
    }
    tmp = node;
    pa = a + 1;
    if (&node->data[0] != 0) {
        *(Blk *)node->data = *src;
    }
    pad[0]=0;
    node->prev = 0;
    node = tmp;
    tmp = 0;
    node->next = 0;
    if (&node->link != 0) {
        node->link = r1;
    }
    if (flag) {
        r1[0] = node;
    } else {
        r1[1] = node;
    }
    a[0] = a[0] + 1;
    (void)a[1];
    pad[1]=pad[0];
    func_020258b4(node);
    if (flag2) {
        a[2] = (uint32_t)node;
    }
    if (tmp != 0) {
        func_02056844(tmp);
    }
    return node;
}
