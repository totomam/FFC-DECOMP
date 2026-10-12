#include "ffc/types.h"

typedef struct Block {
    struct Block *next;
    uint32_t addr;
    uint32_t size;
} Block;

typedef struct Heap {
    uint8_t pad[0x10];
    Block *a;
    Block *b;
    Block *c;
} Heap;

extern void func_0208763c(void *);
extern void func_02056858(uint32_t);
extern void func_02057de8(Heap *, Block *);
extern void func_02087678(void *);

void func_02058048(Heap *h, uint32_t key, int flag) {
    void *lk = h;
    Heap *volatile self = h;
    Block *cur;
    Block **link;
    Block *n;
    Block *prev;
    Block *head;
    int mp;
    int mn;

    lk = (uint8_t *)h + 0x20;
    func_0208763c(lk);
    cur = self->c;
    link = &self->c;
    while (cur != 0) {
        if (cur->addr == key) {
            *link = cur->next;
            func_02056858(cur->addr);
            func_02057de8(self, cur);
            func_02087678(lk);
            return;
        }
        link = (Block **)cur;
        cur = cur->next;
    }
    cur = self->b;
    link = &self->b;
    while (cur != 0) {
        if (cur->addr == key) {
            *link = cur->next;
            break;
        }
        link = (Block **)cur;
        cur = cur->next;
    }
    if (flag != 0 && cur == 0) {
        func_02087678(lk);
        return;
    }
    head = self->a;
    n = head;
    prev = (Block *)&self->a;
    while (n != 0) {
        if (n->addr > cur->addr) {
            mp = 0;
            if (n != head && prev->addr + prev->size == cur->addr) {
                mp = 1;
            }
            mn = (cur->addr + cur->size == n->addr);
            if (mp && mn) {
                prev->size = n->size + cur->size + prev->size;
                prev->next = n->next;
                func_02057de8(self, cur);
                func_02057de8(self, n);
            } else if (mp) {
                prev->size = prev->size + cur->size;
                func_02057de8(self, cur);
            } else if (mn) {
                n->addr = cur->addr;
                n->size = n->size + cur->size;
                func_02057de8(self, cur);
            } else {
                cur->next = n;
                prev->next = cur;
            }
            func_02087678(lk);
            return;
        }
        prev = n;
        n = n->next;
    }
    func_02087678(lk);
}
