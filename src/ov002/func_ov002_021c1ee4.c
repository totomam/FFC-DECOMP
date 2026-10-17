/* cflags:  */
/* From arcnid/ffc-decomp src/battle/branch_temp_c1ee4.c, externs renamed. */
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


/* 021C1EE4 (size 0x68) — build a scratch object, if it validates set flags on
   self and dispatch G (mode by arg2) + H, then finalize (+0xAD/+0xAE, notify +0x88).
   NOTE: compiled with -O4,p. */
extern void func_02005988(void*);
extern void* func_02052000(void*);
extern void func_020059cc(void*);
extern void func_02022ca4(void*, int);
extern void func_0202e6d0(void*, void*, int);
extern void func_0202ef48(void*);

void func_ov002_021c1ee4(void* self, void* arg1, int arg2) {
    u32 local[3];
    void* x;
    int m;
    func_02005988(local);
    x = func_02052000(local);
    func_020059cc(local);
    if (x != 0) {
        *((u8*)self + 0xac) = 1;
        if (arg2 != 3) {
            if (arg2 == 1) m = 1; else m = 0;
            func_02022ca4(*(void**)((u8*)self + 0x90), m);
        }
        func_0202e6d0(*(void**)((u8*)self + 0x88), arg1, 0);
    }
    *((u8*)self + 0xad) = 0;
    *((u8*)self + 0xae) = 1;
    self = (u8*)self + 0x88;
    func_0202ef48(*(void**)self);
}
