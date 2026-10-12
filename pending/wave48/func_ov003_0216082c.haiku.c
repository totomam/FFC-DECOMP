#include "ffc/types.h"

typedef struct Node {
    struct Node *next;
    struct Node *prev;
} Node;

typedef struct Buf {
    uint32_t a0;
    void *p1;
    void *p2;
    uint8_t flag;
} Buf;

typedef struct Frame {
    uint32_t pad;
    Buf buf;
} Frame;

typedef struct Pair {
    uint32_t a;
    uint32_t b;
} Pair;
extern Pair data_ov003_0217a414;
extern uint32_t data_020b8e44;

extern void *func_ov003_02160174(void *self, Pair d);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov003_0214649c(void *p);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02016448(void *out, uint32_t v);
extern void *func_02021638(uint32_t a, uint32_t b);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void func_02053290(void *obj);
extern void func_ov003_02160080(void *v);
extern void func_ov003_021600ac(void *v);
extern void *func_02056b10(void *owner);
extern void *func_02056aec(void *self);

void func_ov003_0216082c(uint8_t *self, int flag)
{
    Buf buf;
    Buf *pb;
    uint8_t *o;
    uint8_t *mar;
    uint8_t *m2;
    uint8_t *m3;
    uint32_t r6;
    volatile uint16_t *ime = (volatile uint16_t *)0x04000208;
    uint16_t old;
    uint32_t st;
    void *v;
    void *p;
    Node *head;
    Node *n;
    Node *n2;
    void *e4;

    p = func_ov003_02160174(self, data_ov003_0217a414);
    func_02056bc0(self + 0x14, p);

    o = (uint8_t *)func_ov003_0214649c(*(void **)(self + 0x80));
    mar = (uint8_t *)func_02052d90(*(void **)(o + 0xe4), *(uint32_t *)(o + 0xe8));
    if (mar[8] != 0) {
        pb = &buf;
        func_02016448(pb, data_020b8e44);
        m2 = (uint8_t *)func_02052d90(pb->p1, pb->p2);
        r6 = *(uint16_t *)(m2 + 0x22);
        m3 = (uint8_t *)func_02052d90(pb->p1, pb->p2);
        p = func_02021638(*(uint16_t *)(m3 + 0x20), r6);
        func_02056bc0(self + 0x14, p);
        if (pb->p1 != 0) {
            if (pb->flag != 0) {
                func_02052d3c(pb->p1, pb->p2);
            }
            func_02052c04(pb->p1);
        }
        func_02053290(pb);
    }

    v = *(void **)(self + 0xec);
    if (v != 0) {
        if (flag != 0) {
            func_ov003_02160080(v);
        } else {
            func_ov003_021600ac(v);
            p = func_02056b10(self + 0x14);
            func_02056bc0(*(void **)(self + 0xd4), p);
        }
        old = *ime;
        *ime = 0;
        st = (old != 0);
        if (self[0xf0] == 0) {
            head = *(Node **)(self + 0xe8);
            if (head != 0) {
                n = head->next;
                if (n != 0) {
                    n2 = n->next;
                    head->next = 0;
                    if (n2 != 0) {
                        head->next = n2;
                        n2->prev = head;
                    }
                    n->prev = 0;
                    n->next = 0;
                }
            } else {
                e4 = *(void **)(self + 0xe4);
                if (e4 != 0) {
                    ((Node *)e4)->prev = 0;
                    *(void **)(self + 0xe4) = 0;
                }
            }
            *(void **)(self + 0xec) = 0;
        }
        (void)*ime;
        *ime = (uint16_t)st;
    }

    p = func_02056aec(self);
    func_02056bc0(self + 0x14, p);
}
