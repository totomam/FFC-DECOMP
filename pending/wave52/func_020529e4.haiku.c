#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Key;

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t pad0;
    uint32_t found;
    uint32_t pad1;
    uint32_t pad2;
    void *lock;
    uint8_t active;
} Local;

extern uint32_t data_0213e000;
extern uint32_t data_0213dff4;
extern uint32_t data_0213dff8;

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_02052a78(uint32_t *out, void *head, Key *key);
extern void *func_0205681c(uint32_t size);
extern void *func_020528f0(void *node, Pair p);
extern uint32_t *func_02052b0c(void *head, Key *key);

uint32_t *func_020529e4(Key key)
{
    Local l;
    Key *kp;
    uint32_t *node;
    uint16_t old;
    volatile uint16_t *ime = (volatile uint16_t *)0x04000208;

    l.lock = &data_0213e000;
    l.active = 1;
    if (l.active) {
        func_0208763c(l.lock);
    }

    kp = &key;
    func_02052a78((uint32_t *)&l.found, &data_0213dff4, kp);
    if (l.found != (uint32_t)&data_0213dff8) {
        node = *(uint32_t **)(l.found + 0x14);
    } else {
        node = func_0205681c(0x48);
        if (node != 0) {
            node = func_020528f0(node, *(Pair *)kp);
        }
        func_02052b0c(&data_0213dff4, &key)[2] = (uint32_t)node;
    }

    old = *ime;
    *ime = 0;
    node[2] = node[2] + 1;
    (void)*ime;
    *(volatile uint16_t *)0x04000208 = (old != 0) ? 1 : 0;

    if (l.active) {
        func_02087678(l.lock);
    }
    return node;
}
