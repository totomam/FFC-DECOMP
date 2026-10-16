/* cflags:  */
/* From arcnid/ffc-decomp src/battle/ctor_two_children_021b836c.c, externs renamed. */
/* 021B836C (size 0x110 = 272 bytes), mwccarm -O4,p — MATCH
 * Ctor: init multi-field object, placement-construct sub-object at +0xB8,
 * two guarded Alloc(0x18)+Init+ListPush child blocks.
 * Keys: volatile u32 p3v[2] = genuine sub sp,#8 slot for p3 (live r3 for 1st call,
 * reload for 2nd); off=0x120 reusable offset local (+/- folds); u32* q 3-word zero;
 * two-tree self-subtract at +0x124; BOTH fill loops store 0 (loop2 s32 counter
 * reuses the r0 zero-copy with no init).
 */
#ifndef BATTLE_H
#define BATTLE_H

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct BattleState BattleState;
typedef struct Vivosaur Vivosaur;
typedef struct AttackInfo AttackInfo;

u32 rand_range(u32* rng_state, u32 max);

u32* BattleState_GetRng(BattleState* state);
s32 BattleState_GetTeamSize(BattleState* state);
Vivosaur* BattleState_GetVivosaur(BattleState* state, s32 index);

s32 Vivosaur_GetAbilityInfo(Vivosaur* vivo);
s32 Vivosaur_CheckSkill(s32 info, s32 skill_id);
s32 Vivosaur_GetType(Vivosaur* vivo);

#endif

extern void func_020694ac(void* self, u32 a, u32 b, u32 c);
extern void* func_ov002_021c7f88(void* dest, void* p1, u32 p3, u32 p4);
extern void* func_ov002_02198ddc(u32 handle);
extern void* func_ov002_021c2edc(void* p, void* vec);
extern void* func_0205681c(u32 n);
extern void func_02056bc0(void* dest, void* item);
extern void* func_ov002_021b833c(void* p, u32 handle);
extern u8 data_ov002_021d6278;
extern u8 data_ov002_021d62b8;

void* func_ov002_021b836c(void* self, void* p1, void* p2, u32 p3, u32 p4, u32 p5)
{
    u8* s = (u8*)self;
    u8* src = (u8*)p2;
    void* p;
    u32 i;
    s32 v;
    u32 off;
    u32* q;
    u32* q2;
    volatile u32 p3v[2];

    p3v[0] = p3;
    func_020694ac(self, 0, 0, p3);
    func_ov002_021c7f88(s + 0xB8, p1, p3v[0], p4);

    *(void**)(s + 0x00)  = &data_ov002_021d6278;
    *(void**)(s + 0xB8)  = &data_ov002_021d62b8;
    *(u32*)(s + 0xEC)  = 0;
    *(u8*)(s + 0xF0)   = 0;
    *(u8*)(s + 0xF1)   = 1;
    *(u32*)(s + 0xF4)  = 0;

    off = 0x120;
    q = (u32*)(s + off);
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    *(u32*)(s + (off + 0xC)) = p5;
    *(u8*)(s + (off + 0x10)) = 0;

    *(u32*)(s + 0xC0) = *(u32*)(src + 0x14);
    *(u32*)(s + (off - 4)) = *(u32*)(src + 0x10);
    off -= 0x10;
    *(u32*)(s + 0xE0) = *(u32*)(src + 0x18);
    *(u32*)(s + 0xE4) = *(u32*)(src + 0x20);
    *(u32*)(s + 0xE8) = *(u32*)(src + 0x24);
    *(u32*)(s + 0xDC) = *(u32*)(src + 0x1C);

    i = 0;
    do {
        *(u32*)(s + i * 4 + off) = 0;
        i++;
    } while (i < 3);

    q2 = (u32*)(s + 0x124);
    *q2 = *(u32*)(s + 0x124) - *q2;

    v = 0;
    do {
        *(u32*)(s + 0xF8 + v * 4) = 0;
        v++;
    } while (v < 6);

    p = func_0205681c(0x18);
    if (p != 0) {
        p = func_ov002_021c2edc(p, func_ov002_02198ddc(*(u32*)(s + 0xBC)));
    }
    func_02056bc0(s + 0x14, p);

    p = func_0205681c(0x18);
    if (p != 0) {
        p = func_ov002_021b833c(p, *(u32*)(s + 0xBC));
    }
    func_02056bc0(s + 0x14, p);

    return self;
}
