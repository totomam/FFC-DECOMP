#include "ffc/types.h"

typedef struct Alarm {
    void (*cb)(void *);
    void *arg;
    uint32_t _08;
    uint32_t fl, fh;
    struct Alarm *prev;
    struct Alarm *next;
    uint32_t pl, ph;
} Alarm;

typedef struct AlarmList {
    uint32_t _00;
    Alarm *head;
    Alarm *tail;
} AlarmList;

extern void func_02086700(uint32_t x);
extern unsigned long long func_020882cc(void);
extern void func_02088350(Alarm *a);
extern void func_020883ec(Alarm *a, uint32_t x, uint32_t y);
extern uint8_t data_02fe0000[];
extern AlarmList data_02141868;

#define PER(a) (*(unsigned long long *)&(a)->pl)
#define FIRE(a) (*(unsigned long long *)&(a)->fl)

void func_020885ac(void) {
    void (*cb)(void *);
    Alarm *next;
    Alarm *a;

    *(volatile uint16_t *)0x04000106 = 0;
    func_02086700(0x10);
    { uint32_t *p = (uint32_t *)data_02fe0000; uint32_t o = 0x3ff8; uint32_t m = 0x10; *(uint32_t *)((uint8_t *)p + o) |= m; }
    {
    unsigned long long now = func_020882cc();
    a = data_02141868.head;
    if (a != 0) {
        if (now < FIRE(a)) {
            func_02088350(a);
            return;
        }
        next = a->next;
        data_02141868.head = next;
        if (next == 0) {
            data_02141868.tail = 0;
        } else {
            next->prev = 0;
        }
        cb = a->cb;
        if (PER(a) == 0) {
            a->cb = 0;
        }
        if (cb != 0) {
            cb(a->arg);
        }
        if (PER(a) != 0) {
            a->cb = cb;
            func_020883ec(a, 0, 0);
        }
        if (data_02141868.head != 0) {
            func_02088350(data_02141868.head);
        }
    }
    }
}
