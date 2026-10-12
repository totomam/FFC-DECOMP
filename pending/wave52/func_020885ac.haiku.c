#include "ffc/types.h"

typedef struct Alarm {
    void (*cb)(void *);
    void *arg;
    uint32_t _08;
    uint32_t fireLo;
    uint32_t fireHi;
    struct Alarm *prev;
    struct Alarm *next;
    uint32_t perLo;
    uint32_t perHi;
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

void func_020885ac(void) {
    Alarm *a;
    Alarm *next;
    AlarmList *list;
    unsigned long long now;
    unsigned long long fire;
    uint32_t off;
    void (*cb)(void *);

    *(volatile uint16_t *)0x04000106 = 0;
    func_02086700(0x10);
    off = 0x3ff8;
    *(uint32_t *)(data_02fe0000 + off) |= 0x10;
    now = func_020882cc();
    list = &data_02141868;
    a = list->head;
    if (a != 0) {
        fire = a->fireLo;
        fire |= (unsigned long long)a->fireHi << 32;
        if (now < fire) {
            func_02088350(a);
            return;
        }
        next = a->next;
        list->head = next;
        if (next == 0) {
            list->tail = 0;
        } else {
            next->prev = 0;
        }
        cb = a->cb;
        if ((a->perLo | a->perHi) == 0) {
            a->cb = 0;
        }
        if (cb != 0) {
            cb(a->arg);
        }
        if ((a->perLo | a->perHi) != 0) {
            a->cb = cb;
            func_020883ec(a, 0, 0);
        }
        if (list->head != 0) {
            func_02088350(list->head);
        }
    }
}
