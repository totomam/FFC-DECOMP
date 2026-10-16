#include "ffc/types.h"
typedef struct In { uint32_t w; uint16_t h; } In;
typedef struct Ob { void *p0; In *in; uint8_t id; } Ob;
extern void *func_ov006_021b49e4(int, int);
extern In *func_ov006_021b3e6c(int, int);
extern void *func_ov006_021b570c(int, void *, int);
extern void func_ov006_021a3600(void);
extern Ob *data_ov006_021bc6a4;
extern uint8_t data_ov006_021b8048[];
void func_ov006_021a354c(uint32_t id) {
    int four = 4;
    data_ov006_021bc6a4 = (Ob*)func_ov006_021b49e4(12, four);
    data_ov006_021bc6a4->id = id;
    data_ov006_021bc6a4->in = func_ov006_021b3e6c(0, 0x47);
    data_ov006_021bc6a4->in->h = (data_ov006_021bc6a4->in->h & 0xfffff3ff) | (four << 8);
    data_ov006_021bc6a4->in->w &= 0xfffff3ff;
    data_ov006_021bc6a4->in->h = (data_ov006_021bc6a4->in->h & 0xffff0fff) | (data_ov006_021b8048[id] << 12);
    data_ov006_021bc6a4->in->w = (data_ov006_021bc6a4->in->w & 0xfe00ff00) | 0xe6008b;
    data_ov006_021bc6a4->p0 = func_ov006_021b570c(1, (void*)func_ov006_021a3600, 0);
}
