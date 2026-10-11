#include "ffc/types.h"

extern void *func_02088978(void *p);
extern void func_0208898c(void *p);

typedef struct Node { struct Node *next; } Node;
typedef struct {
    uint32_t pad0;
    uint32_t pad4;
    Node *head;
    Node *tail;
} Queue;

extern Queue data_021419a4;

void func_0208a008(Node *p) {
    void *r = func_02088978(p);
    Queue *q = &data_021419a4;
    Node *t = q->tail;
    if (t == 0) {
        q->head = p;
    } else {
        t->next = p;
    }
    q->tail = p;
    p->next = 0;
    func_0208898c(r);
}
