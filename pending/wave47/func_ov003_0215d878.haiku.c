#include "ffc/types.h"

extern uint32_t data_ov003_0217a2e4;

typedef struct Node {
    struct Node *next;
    struct Node *prev;
    uint8_t *data;
} Node;

typedef struct VT {
    void *s0;
    void (*s1)(void *);
} VT;

typedef struct Base {
    VT *vt;
} Base;

typedef struct Self {
    void *vt;
    uint8_t pad04[0x34 - 0x04];
    Node head;
    uint8_t f40;
    uint8_t pad41[0x50 - 0x41];
    Base *f50;
    Base *f54;
    Base *f58;
} Self;

Self *func_ov003_0215d878(Self *this) {
    uint16_t old;
    uint8_t flag;
    volatile uint16_t *ime;
    Node *n;
    Node *nx;
    Node *h;
    Node *first;
    Node *x;

    this->vt = (void *)&data_ov003_0217a2e4;

    if (this->f50) {
        if (this->f50) {
            this->f50->vt->s1(this->f50);
        }
        this->f50 = 0;
    }

    if (this->f54) {
        if (this->f54) {
            this->f54->vt->s1(this->f54);
        }
        this->f54 = 0;
    }

    if (this->f58) {
        if (this->f58) {
            this->f58->vt->s1(this->f58);
        }
        this->f58 = 0;
    }

    if (this->head.data) {
        this->head.data[0xdc] = 1;
    }

    ime = (volatile uint16_t *)0x4000208;
    old = *ime;
    *ime = 0;
    flag = 0;
    if (old) {
        flag = 1;
    }

    if (this->f40) {
        n = &this->head;
        while (n->prev) {
            n = n->prev;
        }
        if (n) {
            do {
                nx = n->next;
                n->next = 0;
                n->prev = 0;
                n->data = 0;
                n = nx;
            } while (n);
        }
    } else {
        h = this->head.prev;
        if (h) {
            first = h->next;
            if (first) {
                nx = first->next;
                h->next = 0;
                if (nx) {
                    h->next = nx;
                    nx->prev = h;
                }
                first->prev = 0;
                first->next = 0;
            }
        } else {
            x = this->head.next;
            if (x) {
                x->prev = 0;
                this->head.next = 0;
            }
        }
    }

    old = *ime;
    *ime = flag;
    return this;
}
