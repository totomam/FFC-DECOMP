/* cflags:  */
/* From arcnid/ffc-decomp src/battle/table_lookup_key.c, externs renamed. */
/* 0x021BC440 (50 bytes) -O4,p */
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

typedef struct { u32 key; u32 val; } Ent;
extern Ent data_ov002_021d6b5c[];
extern u32 func_ov002_021c8e18(void* a0);
u32 func_ov002_021bc440(void* a0) {
    int i;
    i = 0;
    if (data_ov002_021d6b5c[i].val != 0) {
        do {
            if (func_ov002_021c8e18(a0) == data_ov002_021d6b5c[i].key) {
                return data_ov002_021d6b5c[i].val;
            }
            i++;
        } while (data_ov002_021d6b5c[i].val != 0);
    }
    return 0;
}
