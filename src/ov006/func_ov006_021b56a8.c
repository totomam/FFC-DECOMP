#include "ffc/types.h"

typedef struct Node {
    struct Node *prev;
    struct Node *next;
    void (*fn)(struct Node *self, void *arg);
    void *arg;
} Node;

typedef struct Elem {
    uint32_t f00;
    void *f04;
    uint32_t f08;
    uint32_t f0c;
    Node *head;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    Node sentinel;
    uint32_t f30;
    int32_t count;
    uint8_t flag;
    uint8_t pad[7];
} Elem;

extern Elem *data_ov006_021bc884;
extern void *func_ov006_021b3f44(void *p);
extern void func_ov006_021b5794(int idx, void *r);

void func_ov006_021b56a8(int idx)
{
    Node *n;
    int32_t i;
    void *r;

    if (data_ov006_021bc884[idx].flag == 0) {
        return;
    }
    n = data_ov006_021bc884[idx].head;
    while (n != &data_ov006_021bc884[idx].sentinel) {
        n->fn(n, n->arg);
        n = n->next;
    }

    i = 0;
    if (data_ov006_021bc884[idx].count > 0) {
        do {
            r = func_ov006_021b3f44(data_ov006_021bc884[idx].f04);
            if (r == 0) {
                break;
            }
            func_ov006_021b5794(idx, r);
            i++;
        } while (i < data_ov006_021bc884[idx].count);
    }
}
