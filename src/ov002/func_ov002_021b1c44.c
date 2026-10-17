/* cflags:  */
/* From arcnid/ffc-decomp src/battle/unit_panels_build_pair_021b1c44.c, externs renamed. */
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

/* Matched: 021B1C44, size 0xE4 (228B), -O4,p.
   Builds 2 per-unit func_ov002_021b18fc(0x98) panels: Str tmp ctor/dtor each iter, vtable
   slot-8 virtual call via C fn-pointer array, stores into s+0x8C+k*4;
   then func_0203bb94(&data_ov002_021d587c), two Appends through t2 = s+0x48 local,
   whole-Pair copy *(Pair*)(s+0x80) = data_ov002_021d5874 (split-base idiom).
   flag = 1; if (k != 1) flag = 0; local t mutation t = s; t += 0x48. */

extern void* func_0203b7fc(u32, u32, u32);                      /* 0x203b7fc */
extern void* func_ov002_02198d14(void*, u32);                           /* 0x2198d14 */
extern void func_ov002_0219b868(void*, void*);                          /* 0x219b868 */
extern void* func_ov002_0219c5b0(void*);                                /* 0x219c5b0 */
extern void* func_0205681c(u32);                                    /* 0x205681c */
extern void* func_ov002_021b18fc(void*, void*, void*, u32, void*, u32);  /* 0x21b18fc */
extern void func_02056bc0(void*, void*);                         /* 0x2056bc0 */
extern void func_020059cc(void*);                                 /* 0x20059cc */
extern void* func_0203bb94(void*, u32, u32, u32);               /* 0x203bb94 */

extern u32 data_ov002_021d587c;
typedef struct { u32 x; u32 y; } Pair;
extern Pair data_ov002_021d5874;

typedef void (*VFn)(void*, u32);
typedef struct { u8 pad[0xC]; } Str;

void func_ov002_021b1c44(u8* s)
{
    u8* t;
    u32 k;
    void* q;
    void* u4;
    u8* t2;
    Str tmp;

    *(void**)(s + 0x94) = func_0203b7fc(0xF, 0xF, 1);
    t = s;
    t += 0x48;
    k = 0;
    do {
        u8* p;
        void* nm;
        void* obj;
        func_ov002_0219b868(&tmp, func_ov002_02198d14(*(void**)(s + 0x88), k));
        nm = func_ov002_0219c5b0(func_ov002_02198d14(*(void**)(s + 0x88), k));
        p = (u8*)func_0205681c(0x98);
        if (p != 0) {
            u32 flag;
            flag = 1;
            if (k != 1) {
                flag = 0;
            }
            p = (u8*)func_ov002_021b18fc(p, *(void**)(s + 0x94), &tmp, k, nm, flag);
        }
        *(void**)(s + k*4 + 0x8C) = p;
        func_02056bc0(t, *(void**)(s + k*4 + 0x8C));
        obj = *(void**)(s + k*4 + 0x8C);
        (*(VFn**)obj)[8](obj, 0);
        func_020059cc(&tmp);
        k++;
    } while (k < 2);
    q = func_0203bb94(&data_ov002_021d587c, 1, 0, 0);
    *(void**)(s + 0x98) = q;
    u4 = *(void**)(s + 0x94);
    t2 = s + 0x48;
    func_02056bc0(t2, q);
    func_02056bc0(t2, u4);
    *(Pair*)(s + 0x80) = data_ov002_021d5874;
}
