#include "ffc/types.h"

typedef struct Node {
    struct Node *next;
    void (*fn)(uint32_t);
    uint32_t key;
} Node;

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern Node *data_021452e0;

void func_0207ee40(uint32_t *p)
{
    for (;;) {
        Node *rhead = 0, *rtail = 0, *prev, *cur, *next, *n;
        uint32_t base = p[1];
        uint32_t end = base + (p[2] + p[3]);
        uint32_t ip = func_02088978();
        Node *head;
        prev = 0;
        cur = head = data_021452e0;
        for (; cur != 0; cur = next) {
            uint32_t k = cur->key;
            next = cur->next;
            uint32_t f4 = (uint32_t)cur->fn;
            if ((k == 0 && f4 >= base && f4 < end) || (k >= base && k < end)) {
                if (rtail == 0) rhead = cur; else rtail->next = cur;
                if (head == cur) { head = next; data_021452e0 = next; }
                cur->next = 0;
                rtail = cur;
                if (prev) prev->next = next;
            } else {
                prev = cur;
            }
        }
        func_0208898c(ip);
        if (rhead == 0) return;
        n = rhead;
        do {
            next = n->next;
            if (n->fn) n->fn(n->key);
            n = next;
        } while (n != 0);
    }
}
