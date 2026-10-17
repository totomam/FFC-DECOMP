/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/field_read_cond_dispatch_bc.c, externs renamed. */
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


/* 021B889C (size 0x180 incl pool) — field_read_cond_store family head + large else: sound 0x43F, bit tests 0x100/0x200, eor/and bit3, 4x alloc+ctor+enqueue */

extern u32 func_ov002_02198d78(u32);                       /* 02198D78 */
extern u32 func_ov002_021c5ad4(u32, u32, u32);             /* 021C5AD4 */
extern void func_02056bc0(void*, void*);             /* 02056BC0 */
extern u32 func_ov002_02198dec(u32);                       /* 02198DEC */
extern u32 func_ov002_0219f4f8(u32);                       /* 0219F4F8 */
extern u32 func_ov002_02198e60(u32);                       /* 02198E60 */
extern void func_02021338(u32);                  /* 02021338 */
extern void func_02069300(u32);                      /* 02069300 */
extern u32 func_ov002_021c82ac(void*);                     /* 021C82AC */
extern void* func_020696e8(void*);                   /* 020696E8 */
extern u32 func_ov002_021b8674(void*);                     /* 021B8674 */
extern u32 func_ov002_021c6274(u32);                       /* 021C6274 */
extern void func_ov002_021c82b0(void*);                    /* 021C82B0 */
extern void* func_ov002_021b9a00(void*, u32, u32, void*);  /* 021B9A00 */
extern void* func_ov002_021b82f4(void*, void*, void*);     /* 021B82F4 */
extern void* func_ov002_021b82b0(void*, u32, void*);       /* 021B82B0 */
extern void* func_0205681c(u32);                     /* 0205681C */
extern u32 data_ov002_021d6094[2];                         /* 021D6094 */

void func_ov002_021b889c(void* self)
{
    u32 val;
    void* j;
    u32 f;
    u32 h;
    void* q;
    void* b;

    val = func_ov002_021c5ad4(func_ov002_02198d78(*(u32*)((u8*)self + 0xBC)), 0, 0);
    if (val != 0) {
        func_02056bc0((void*)((u8*)self + 0x14), (void*)val);
        return;
    }
    if (func_ov002_0219f4f8(func_ov002_02198dec(*(u32*)((u8*)self + 0xBC))) != 0) {
        return;
    }
    if (func_ov002_02198e60(*(u32*)((u8*)self + 0xBC)) != 0) {
        func_02021338(0x43F);
        func_02069300(*(u32*)((u8*)self + 0xF8));
        return;
    }
    if (func_ov002_021c82ac((void*)((u8*)self + 0xB8)) != 0) {
        return;
    }
    j = func_020696e8(self);
    f = *(u32*)((u8*)j + 4);
    if (f & 0x100) {
        h = *(u32*)((u8*)self + 0xFC);
        if (h != 0) {
            data_ov002_021d6094[1] = func_ov002_021b8674(self);
            func_02069300(h);
            return;
        }
    } else if (f & 0x200) {
        h = *(u32*)((u8*)self + 0x104);
        if (h != 0) {
            data_ov002_021d6094[1] = func_ov002_021b8674(self);
            func_02069300(h);
            return;
        }
    }
    j = func_020696e8(self);
    if ((*(u32*)((u8*)j + 4) ^ *(u32*)((u8*)j + 8)) & *(u32*)((u8*)j + 4) & 8) {
        if (func_ov002_021c6274(func_ov002_02198d78(*(u32*)((u8*)self + 0xBC))) != 0) {
            return;
        }
        *(u8*)((u8*)self + 0xF0) = 0;
        func_ov002_021c82b0((void*)((u8*)self + 0xB8));

        q = func_0205681c(0x98);
        if (q != 0) {
            q = func_ov002_021b9a00(q, *(u32*)((u8*)self + 0x11C), *(u32*)((u8*)self + 0xBC), (void*)((u8*)self + 0xF0));
        }
        func_02056bc0((void*)((u8*)self + 0x14), q);

        q = func_0205681c(0x1C);
        if (q != 0) {
            b = self;
            if (b != 0) {
                b = (void*)((u8*)b + 0xB8);
            }
            q = func_ov002_021b82f4(q, b, (void*)((u8*)self + 0xF0));
        }
        func_02056bc0((void*)((u8*)self + 0x14), q);

        q = func_0205681c(0x1C);
        if (q != 0) {
            q = func_ov002_021b82b0(q, *(u32*)((u8*)self + 0x12C), (void*)((u8*)self + 0xF0));
        }
        func_02056bc0((void*)((u8*)self + 0x14), q);

        q = func_0205681c(0x1C);
        if (q != 0) {
            q = func_ov002_021b82b0(q, (u32)self, (void*)((u8*)self + 0xF0));
        }
        func_02056bc0((void*)((u8*)self + 0x14), q);
    }
}
