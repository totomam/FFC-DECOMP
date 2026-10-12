#include "ffc/types.h"

typedef struct Node {
    struct Node *next;
    uint32_t pad4;
    int32_t val;
} Node;

extern void func_0208763c(void *p);
extern void func_02087678(void *p);

int32_t func_0205819c(uint8_t *p) {
    uint8_t *q;
    Node *n;
    int32_t sum;
    int32_t r;
    q = p + 0x20;
    func_0208763c(q);
    n = *(Node **)(p + 0x10);
    sum = 0;
    while (n != 0) {
        sum += n->val;
        n = n->next;
    }
    r = sum - 1;
    func_02087678(q);
    return r;
}
