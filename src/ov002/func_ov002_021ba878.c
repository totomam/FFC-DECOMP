/* cflags:  */
/* From arcnid/ffc-decomp src/battle/virt_loop_status_a878.c, externs renamed. */
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

/* Matched: 021BA878 (84B) -- REQUIRES -O4,p. cond stop, vt[14](m,1,1), count-up do-while calling func_02064b1c n times,
   then status byte |=1 on member +0x80. */
typedef void (*Fn)(void*, u32, u32);
extern u32 func_02064b38(void* m);
extern void func_02064b30(void* m);
extern void func_02064b1c(void* m);
void func_ov002_021ba878(void* s, u32 n) {
    void* m;
    u32 i;
    if (func_02064b38(*(void**)((u8*)s + 0x80)) != 0) {
        func_02064b30(*(void**)((u8*)s + 0x80));
    }
    m = *(void**)((u8*)s + 0x80);
    (*(Fn**)m)[14](m, 1, 1);
    i = 0;
    if (i < n) {
        do {
            func_02064b1c(*(void**)((u8*)s + 0x80));
            i++;
        } while (i < n);
    }
    s = (u8*)s + 0x80;
    m = *(void**)s;
    *(u32*)((u8*)m + 0xC) = (*(u32*)((u8*)m + 0xC) & ~0xFF) | 1;
}
