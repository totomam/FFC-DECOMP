#include "ffc/types.h"

typedef struct Node {
    struct Node *next;
    uint32_t f4;
    uint32_t key;
} Node;

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern Node *data_021452e0;

void func_0207ee40(uint32_t *p)
{
    Node *rhead, *rtail, *head, *cur, *prev, *next, *n;
    uint32_t base, end, ip;
    void (*fn)(uint32_t);

top:
    rhead = 0;
    rtail = 0;
    base = p[1];
    end = base + (p[2] + p[3]);
    ip = func_02088978();
    head = data_021452e0;
    cur = head;
    prev = 0;
    if (cur == 0) goto done;
loop:
    next = cur->next;
    if (cur->key == 0) {
        if (cur->f4 >= base && cur->f4 < end) goto remove;
    }
    if (cur->key < base) goto keep;
    if (cur->key >= end) goto keep;
remove:
    if (rhead == 0) {
        rhead = cur;
    } else {
        rtail->next = cur;
    }
    cur->next = 0;
    rtail = cur;
    if (cur == head) {
        head = next;
        data_021452e0 = next;
    } else {
        prev->next = next;
    }
    goto cont;
keep:
    prev = cur;
cont:
    cur = next;
    if (cur != 0) goto loop;
done:
    func_0208898c(ip);
    if (rhead == 0) return;
    n = rhead;
    while (n != 0) {
        fn = (void (*)(uint32_t))n->f4;
        next = n->next;
        if (fn != 0) {
            fn(n->key);
        }
        n = next;
    }
    goto top;
}
