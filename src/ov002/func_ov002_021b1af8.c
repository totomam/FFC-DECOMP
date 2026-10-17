/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/virt_call_s8flag_ext84.c, externs renamed. */
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

/* Matched: 021B1AF8 (28B) — external call on self, then param mutated
   (self += 0x84), p = *self; s8-flag check then virtual call slot 2 on p. */
typedef void (*Fn1_1AF8)(void*);
extern void func_02065528(void*);
void func_ov002_021b1af8(u8* self) {
    void* p;
    func_02065528(self);
    self += 0x84;
    p = *(void**)self;
    if ((signed char)*(u32*)((u8*)p + 0xC) == 0) {
        (*(Fn1_1AF8**)p)[2](p);
    }
}
