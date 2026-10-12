#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02052c68(void *a, void *b);
extern void func_02052988(void *p);
extern void func_02056844(void *p);
extern void func_02087678(void *p);
extern uint8_t data_0213e000[];
extern uint8_t data_0213dff4[];

typedef struct {
    uint32_t pad[2];
    volatile int32_t count;
} Obj;

void func_02052c04(Obj *p) {
    volatile uint16_t *ime = (volatile uint16_t *)0x04000208;
    uint16_t old = *ime;
    uint8_t *lock;
    *ime = 0;
    p->count = p->count - 1;
    int32_t c = p->count;
    (void)*ime;
    *ime = (old != 0) ? 1 : 0;
    if (c > 0) {
        return;
    }
    lock = data_0213e000;
    func_0208763c(lock);
    if (p->count == 0) {
        func_02052c68(data_0213dff4, p);
        if (p != 0) {
            func_02052988(p);
            func_02056844(p);
        }
    }
    func_02087678(lock);
}
