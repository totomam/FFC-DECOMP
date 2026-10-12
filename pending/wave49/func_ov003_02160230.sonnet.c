#include "ffc/types.h"

typedef struct Node {
    struct Node *next;
    struct Node *prev;
} Node;

#define FIELD(p, off, T) (*(T *)((uint8_t *)(p) + (off)))

extern void func_ov003_021600ac(void *obj);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_0215fea4(void *node, void *self, uint32_t arg);
extern void *func_ov003_021603c4(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_0203b708(uint32_t size);
extern void *func_ov003_02160174(void *self, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);

extern uint32_t data_ov003_0217a3f4[];
extern uint32_t data_ov003_0217a3fc[];

void func_ov003_02160230(uint8_t *self, uint32_t param)
{
    volatile uint16_t *ime = (volatile uint16_t *)0x04000208;
    uint16_t cur;
    uint8_t r4;
    Node *L;
    Node *first;
    Node *second;
    Node *e4;
    Node *x;
    void *node;
    void *obj;
    void *tmp;
    void *res4;
    void *res8;
    void *r6p;
    void *p;

    if (FIELD(self, 0xec, void *) != 0) {
        func_ov003_021600ac(FIELD(self, 0xec, void *));
        uint16_t f1 = 0;
        cur = *ime;
        *ime = f1;
        if (cur) {
            f1 = 1;
        }
        if (FIELD(self, 0xf0, uint8_t) == 0) {
            L = FIELD(self, 0xe8, Node *);
            if (L != 0) {
                first = L->next;
                if (first != 0) {
                    second = first->next;
                    L->next = 0;
                    if (second != 0) {
                        L->next = second;
                        second->prev = L;
                    }
                    first->prev = 0;
                    first->next = 0;
                }
            } else {
                e4 = FIELD(self, 0xe4, Node *);
                if (e4 != 0) {
                    e4->prev = 0;
                    FIELD(self, 0xe4, Node *) = 0;
                }
            }
            FIELD(self, 0xec, void *) = 0;
        }
        (void)*ime;
        *ime = f1;
    }

    uint16_t f6 = 0;
    node = func_0205681c(0x30);
    if (node != 0) {
        node = func_ov003_0215fea4(node, self, param);
    }

    f6 = 0;
    cur = *ime;
    *ime = f6;
    if (cur) {
        f6 = 1;
    }

    if (FIELD(self, 0xf0, uint8_t) == 0) {
        L = FIELD(self, 0xe8, Node *);
        if (L != 0) {
            first = L->next;
            if (first != 0) {
                second = first->next;
                L->next = 0;
                if (second != 0) {
                    L->next = second;
                    second->prev = L;
                }
                first->prev = 0;
                first->next = 0;
            }
        } else {
            e4 = FIELD(self, 0xe4, Node *);
            if (e4 != 0) {
                e4->prev = 0;
                FIELD(self, 0xe4, Node *) = 0;
            }
        }
        FIELD(self, 0xec, void *) = 0;
        if (node != 0) {
            x = (Node *)((uint8_t *)node + 0x14);
            if (x->next != 0) {
                x->next->prev = (Node *)(self + 0xe4);
            }
            FIELD(self, 0xe4, Node *) = x->next;
            FIELD(self, 0xe8, Node *) = x;
            x->next = (Node *)(self + 0xe4);
            FIELD(self, 0xec, void *) = ((void **)x)[2];
        }
    }

    (void)*ime;
    r4 = 1;
    *ime = f6;

    res4 = func_ov003_021603c4(self, data_ov003_0217a3f4[0], data_ov003_0217a3f4[1], 1, param);
    obj = FIELD(self, 0xec, void *);
    res8 = func_0203b708(0x40);
    tmp = func_ov003_02160174(self, data_ov003_0217a3fc[0], data_ov003_0217a3fc[1]);
    r6p = FIELD(self, 0xd4, void *);
    func_02056bc0(r6p, tmp);
    func_02056bc0(r6p, res8);
    func_02056bc0(r6p, obj);
    func_02056bc0(r6p, res4);

    p = FIELD(self, 0x80, void *);
    if (FIELD(FIELD(p, 0x180, void *), 0xdc, void *) == 0) {
        r4 = 0;
    }
    obj = FIELD(self, 0xec, void *);
    FIELD(obj, 0x2c, uint8_t) = r4;
}
