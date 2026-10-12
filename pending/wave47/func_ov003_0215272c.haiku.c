#include "ffc/types.h"

#define FIELD(p, off, T) (*(T *)((uint8_t *)(p) + (off)))

extern void *data_0213df18;
extern uint32_t func_0204f7d4(const void *object);
extern void func_02056c9c(void *object, uint32_t node);
extern void func_020509c0(void *object);
extern uint32_t func_0203b67c(void);
extern void func_02056bc0(void *object, uint32_t node);
extern void *func_0203b6f0(void);
extern void func_02050a7c(void *object, void *a, int b);
extern void func_02050b38(void *object);
extern char data_ov003_02179e24[];
extern char data_ov003_02179e94[];
extern char data_ov003_02179eb4[];
extern char data_ov003_02179ec4[];

uint8_t *func_ov003_0215272c(uint8_t *self, uint32_t arg)
{
    uint8_t *sub;
    uint32_t r6;
    uint8_t *p;
    uint32_t q;

    func_02056c9c(self, func_0204f7d4(data_0213df18));
    FIELD(self, 0x80, void *) = data_ov003_02179e24;
    func_020509c0(self + 0x84);
    FIELD(self, 0, void *) = data_ov003_02179e94;
    FIELD(self, 0x80, void *) = data_ov003_02179eb4;
    FIELD(self, 0x84, void *) = data_ov003_02179ec4;
    FIELD(self, 0x9c, uint32_t) = arg;
    FIELD(self, 0xa0, uint32_t) = 0;
    FIELD(self, 0xa4, uint32_t) = 0;
    FIELD(self, 0xb8, uint32_t) = 0;
    FIELD(self, 0xbc, uint32_t) = 0;
    FIELD(self, 0xc8, uint8_t) = 0;
    FIELD(self, 0xcc, uint32_t) = 2;
    FIELD(self, 0xd0, uint32_t) = 0;
    FIELD(self, 0xd4, uint32_t) = 2;
    FIELD(self, 0xd8, uint8_t) = 0;
    FIELD(self, 0xdc, int32_t) = 2 - 3;
    FIELD(self, 0xb8, uint32_t) = func_0203b67c();
    r6 = func_0203b67c();
    FIELD(self, 0xbc, uint32_t) = r6;
    sub = self + 0x48;
    func_02056bc0(sub, FIELD(self, 0xb8, uint32_t));
    func_02056bc0(sub, r6);
    FIELD(self, 0xc0, uint32_t) = func_0203b67c();
    p = func_0203b6f0();
    FIELD(self, 0xc4, uint8_t *) = p;
    FIELD(p, 0x12, uint8_t) = (uint8_t)((FIELD(p, 0x12, uint8_t) & ~0xffu) | 1);
    q = FIELD(self, 0xc4, uint32_t);
    sub = self + 0x48;
    func_02056bc0(sub, FIELD(self, 0xc0, uint32_t));
    func_02056bc0(sub, q);
    func_02050a7c(self + 0x84, self + 0xc8, 1);
    func_02050b38(self + 0x84);
    return self;
}
