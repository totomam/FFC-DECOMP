/* cflags:  */
/* From arcnid/ffc-decomp src/battle/apply_loop_free_b553c.c, externs renamed. */
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


/* 021B553C (size 0x6c) — deleting-dtor variant of 021B54D0: same apply loop,
   then K(self) and Free(self). NOTE: compiled with -O4,p. */
extern u32 data_ov002_021d5b1c[];
extern void func_ov002_02198d08(void*, void*);
extern void* func_ov002_0219b860(void);
extern void* func_ov002_02198db8(void*, void*);
extern void* func_ov002_021ae5f4(void);
extern void func_ov002_021b101c(void*, int);
extern void func_020695d0(void*);
extern void func_02056844(void*);

void* func_ov002_021b553c(void* self) {
    void* h; s32 i; void* g; int mode;
    *(u32*)self = (u32)data_ov002_021d5b1c;
    func_ov002_02198d08(*(void**)((u8*)self + 0xb8), *(void**)((u8*)self + 0xbc));
    g = func_ov002_0219b860();
    i = 0;
    if (*(s32*)((u8*)self + 0xd0) > 0) {
        do {
            h = func_ov002_02198db8(*(void**)((u8*)self + 0xb8), ((void**)((u8*)self + 0xc4))[i]);
            if (g == func_ov002_021ae5f4()) mode = 4; else mode = 3;
            func_ov002_021b101c(h, mode);
            i++;
        } while (i < *(s32*)((u8*)self + 0xd0));
    }
    func_020695d0(self);
    func_02056844(self);
    return self;
}
