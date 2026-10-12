#include "ffc/types.h"

extern void func_0208763c(void *);
extern void func_02023570(void *, void *, void *);
extern void func_02087678(void *);
extern uint8_t data_0213e080[];
extern uint8_t data_0213e060[];
extern uint8_t data_0213e06c[];
extern uint8_t data_0213e068[];

void func_02054558(uint8_t *p)
{
    if (p[4]) {
        uint8_t *lock = data_0213e080;
        uint8_t *sentinel;
        uint32_t buf[7];
        int c;
        uint8_t *node;

        p[4] = 0;
        func_0208763c(lock);
        sentinel = data_0213e06c;
        node = *(uint8_t **)(data_0213e060 + 0x10);
        goto chk;
        do {
            node = *(uint8_t **)(node + 4);
        chk:
            c = 0;
            if (node != sentinel && *(uint8_t **)(node + 8) != p) c = 1;
        } while (c);
        buf[1] = (uint32_t)node;
        func_02023570(buf, data_0213e068, &buf[1]);
        func_02087678(lock);
    }
}
