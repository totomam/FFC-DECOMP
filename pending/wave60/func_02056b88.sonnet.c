#include "ffc/types.h"
extern void func_0208763c(void *);
extern void func_02087678(void *);
typedef struct N { uint32_t a; struct N *next; } N;
typedef struct { uint8_t pad[0x12]; uint8_t f; uint8_t p2; N *head; N *tail; uint8_t lock[1]; } S;
void func_02056b88(S *s, N *n) {
    uint8_t f = s->f; volatile uint32_t pad[2]; (void)pad;
    void *l = s->lock;
    if (f) func_0208763c(l);
    if (s->head == 0) s->tail = (N*)&n->next;
    n->next = s->head;
    s->head = n;
    if (f) func_02087678(l);
}
