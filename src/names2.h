//-------------------------------------------------------------------------
/*
Copyright (C) 1997, 2005 - 3D Realms Entertainment

This file is part of Shadow Warrior version 1.2

Shadow Warrior is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

Original Source: 1997 - Frank Maddin and Jim Norwood
Prepared for public release: 03/28/2005 - Charlie Wiederhold, 3D Realms
*/
//-------------------------------------------------------------------------

#ifndef NAMES2_H
#define NAMES2_H

#include "names.h"

// Rotation info

//      4
//    5   3
//  6       2
//    7   1
//      0


enum STAT_ENUMS
{
STAT_DEFAULT=               0,
STAT_MISC=                  1,

#define STAT_SKIP2_START    2
STAT_ENEMY=                 2,
STAT_DEAD_ACTOR=            3, //misc actor stuff - dead guys etc
STAT_MISSILE=               4,       
STAT_SHRAP=                 5,
#define STAT_SKIP2_END          5
#define STAT_SKIP2_INTERP_END   5

#define STAT_SKIP4_START    6
STAT_SKIP4=                 6,        
STAT_MISSILE_SKIP4=         7,
STAT_MINE_STUCK=                  8, //solely for mines
STAT_ENEMY_SKIP4=           9,
#define STAT_SKIP4_INTERP_END   9

STAT_ITEM=                  10,
#define STAT_SKIP4_END          10

STAT_FAF_COPY,
STAT_MAX=20,  // everything below here can move
STAT_PLAYER0,
STAT_PLAYER1,
STAT_PLAYER2,
STAT_PLAYER3,

STAT_PLAYER4,
STAT_PLAYER5,
STAT_PLAYER6,
STAT_PLAYER7,
STAT_PLAYER_UNDER0,

STAT_PLAYER_UNDER1,
STAT_PLAYER_UNDER2,
STAT_PLAYER_UNDER3,
STAT_PLAYER_UNDER4,
STAT_PLAYER_UNDER5,

STAT_PLAYER_UNDER6,
STAT_PLAYER_UNDER7,
STAT_GENERIC_QUEUE,  
STAT_OBJECT_SPRITE,   // sprites that move with objects
STAT_WALLBLOOD_QUEUE,
STAT_FLOORBLOOD_QUEUE,     
STAT_NO_STATE,        // sprites that don't need state control
STAT_STATIC_FIRE,
STAT_STAR_QUEUE,     
STAT_HOLE_QUEUE,
STAT_BREAKABLE,
STAT_SPRITE_HIT_MATCH, // TAG_SPRITE_HIT_MATCH
//
// Everything from here down does not get drawn 
//
STAT_DONT_DRAW,       
STAT_SUICIDE,
STAT_DIVE_AREA,      
STAT_UNDERWATER,     
STAT_UNDERWATER2,    

STAT_CEILING_FLOOR_PIC_OVERRIDE,
STAT_CLIMB_MARKER,   
STAT_ALL,            
STAT_SO_SHOOT_POINT,  // operational SO shooting point
STAT_SPAWN_TRIGGER,   // triggers spawn sprites
STAT_TRAP,            // triggered traps - spear/fireball etc
STAT_TRIGGER,         // attempt to replace tagging sectors - use ST1 sprites
STAT_DEMO_CAMERA,     // demo camera placement
STAT_FAF,             // floor above floor stat
STAT_SO_SP_CHILD,    
STAT_WARP,           
STAT_WARP_COPY_SPRITE1, 

STAT_WARP_COPY_SPRITE2, 
STAT_SOUND_SPOT,     
STAT_STOP_SOUND_SPOT,     
STAT_SPAWN_SPOT,     
STAT_AMBIENT,        
STAT_ECHO,
STAT_VATOR,          
STAT_ROTATOR,
STAT_ROTATOR_PIVOT,
STAT_SLIDOR,
STAT_FLOOR_SLOPE_DONT_DRAW,

STAT_EXPLODING_CEIL_FLOOR,
STAT_COPY_SOURCE,
STAT_COPY_DEST,
STAT_WALL_MOVE,  
STAT_WALL_MOVE_CANSEE,

STAT_SPAWN_ITEMS,
STAT_DELETE_SPRITE,
STAT_SPIKE,
STAT_LIGHTING,
STAT_LIGHTING_DIFFUSE,
STAT_WALL_DONT_MOVE_UPPER,
STAT_WALL_DONT_MOVE_LOWER,
STAT_FLOOR_PAN,
STAT_CEILING_PAN,
STAT_WALL_PAN,
STAT_NO_RIDE,
STAT_QUAKE_SPOT,
STAT_QUAKE_ON,
STAT_VIS_ON,
STAT_CHANGOR,

STAT_TRACK=200,
STAT_ST1=500,
STAT_QUICK_JUMP,
STAT_QUICK_JUMP_DOWN,
STAT_QUICK_SUPER_JUMP, 
STAT_QUICK_SCAN,     
STAT_QUICK_EXIT,     
STAT_QUICK_LADDER,
STAT_QUICK_OPERATE,
STAT_QUICK_DUCK,
STAT_QUICK_DEFEND   
};

// multi player start
#define STAT_MULTI_START    600
#define STAT_MULTI_START1   601
#define STAT_MULTI_START2   602
#define STAT_MULTI_START3   603
#define STAT_MULTI_START4   604
#define STAT_MULTI_START5   605
#define STAT_MULTI_START6   606
#define STAT_MULTI_START7   607

#define STAT_CO_OP_START    610
#define STAT_CO_OP_START1   611
#define STAT_CO_OP_START2   612
#define STAT_CO_OP_START3   613
#define STAT_CO_OP_START4   614
#define STAT_CO_OP_START5   615
#define STAT_CO_OP_START6   616
#define STAT_CO_OP_START7   617

//******************************************************************************

#define SWITCH_ON   562
#define SWITCH_OFF  561


#define TRACK_SPRITE  1900 //start of track sprites
#define ST1 2307
#define ST2 2308
#define ST_QUICK_JUMP 2309
#define ST_QUICK_JUMP_DOWN 2310
#define ST_QUICK_SUPER_JUMP 2311
#define ST_QUICK_SCAN 2312
#define ST_QUICK_EXIT 2313
#define ST_QUICK_OPERATE 2314
#define ST_QUICK_DUCK 2315
#define ST_QUICK_DEFEND 2316


//////////////////////
//
// TIMERS
//
//////////////////////

#define TICS_PER_SEC 120

#define FLY_INVENTORY_TIME 30
#define CLOAK_INVENTORY_TIME 30
#define ENVIRON_SUIT_INVENTORY_TIME 30

#define DAMAGE_TIME (1 * TICS_PER_SEC)

//////////////////////
//
// BLADES
//
//////////////////////

#define BLADE1  360
#define BLADE2  361
#define BLADE3  362

#define HORIZ_BLADES BLADE1 : BLADE2 : BLADE3

//////////////////////
//
// WEAPON RELATED
//
//////////////////////

#define ICON_STAR  1793

#define ICON_UZI   1797
#define ICON_UZIFLOOR 1807
#define ICON_LG_UZI_AMMO  1799

#define ICON_HEART      1824
#define ICON_HEART_LG_AMMO 1820

#define ICON_GUARD_HEAD 1814
#define ICON_FIREBALL_LG_AMMO 3035

#define NAPALM_MIN_AMMO 10
#define RING_MIN_AMMO 30 

#define ICON_ROCKET      1843
#define ICON_SHOTGUN     1794
#define ICON_LG_ROCKET 1796
#define ICON_LG_SHOTSHELL 1823
#define ICON_AUTORIOT 1822

#define ICON_MICRO_GUN 1818
#define ICON_MICRO_BATTERY 1800

#define ICON_GRENADE_LAUNCHER 1817
#define ICON_LG_GRENADE 1831

#define ICON_LG_MINE 1842

#define ICON_RAIL_GUN 1811
#define ICON_RAIL_AMMO 1812

// not used now
#define ICON_SPELL     1880
#define ICON_ELECTRO   1822

#define ICON_EXPLOSIVE_BOX 1801
#define ICON_ENVIRON_SUIT   1837
#define ICON_FLY      1782
#define ICON_CLOAK    1804
#define ICON_NIGHT_VISION 3031
#define ICON_NAPALM      3046
#define ICON_RING        3050
#define ICON_GOROAMMO    3035
#define ICON_HEARTAMMO   1820
#define ICON_RINGAMMO    3054
#define ICON_NAPALMAMMO  3058
#define ICON_GRENADE     3059
#define ICON_OXYGEN      1800
#define ICON_ARMOR       3030
#define ICON_SM_MEDKIT   1802    
#define ICON_BOOSTER     1810    
#define ICON_HEAT_CARD   1819
#define ICON_REPAIR_KIT  1813
#define ICON_MEDKIT      1803
#define ICON_CHEMBOMB    1808
#define ICON_FLASHBOMB   1805
#define ICON_NUKE        1809
#define ICON_CALTROPS    1829
#define ICON_FLAG        2520



#define STAR 2039
#define ELECTRO 2025

#define UZI_SMOKE 2146 
#define UZI_SPARK 2140 
#define SPIKES 2092    
#define GRENADE 2019
#define BLANK 2200


#define BODY 1002
#define BODY_BURN 1003
#define BODY_SIZZLE 1011


#define DART_R0  2130
#define DART_R1  2131
#define DART_R2  2132
#define DART_R3  2133
#define DART_R4  2134
#define DART_R5  2135
#define DART_R6  2136
#define DART_R7  2137

#define BOLT_THINMAN_FRAMES 1
#define BOLT_THINMAN_R0 2018
#define BOLT_THINMAN_R1 BOLT_THINMAN_R0 - (BOLT_THINMAN_FRAMES * 1)
#define BOLT_THINMAN_R2 BOLT_THINMAN_R0 - (BOLT_THINMAN_FRAMES * 2)
#define BOLT_THINMAN_R3 BOLT_THINMAN_R0 - (BOLT_THINMAN_FRAMES * 3)
#define BOLT_THINMAN_R4 BOLT_THINMAN_R0 - (BOLT_THINMAN_FRAMES * 4)

#define SPEAR_FRAMES 1
#define SPEAR_R0 2030
#define SPEAR_R1 SPEAR_R0 + (SPEAR_FRAMES * 1)
#define SPEAR_R2 SPEAR_R0 + (SPEAR_FRAMES * 2)
#define SPEAR_R3 SPEAR_R0 + (SPEAR_FRAMES * 3)
#define SPEAR_R4 SPEAR_R0 + (SPEAR_FRAMES * 4)

#define STAR1      2049
#define EXP  3100 // Use new digitized explosion for big stuff
#define EXP2 2160 // My old explosion is still used for goro head
#define FIREBALL   2035
#define FIREBALL_FLAMES 3212

//////////////////////
//
// MISC
//
//////////////////////

#define COINCURSOR    2440  // Jim uses this for a text input cursor
#define STARTALPHANUM 4608  // New SW font for typing in stuff, It's in ASCII order.
#define ENDALPHANUM   4701

#define STATUS_BAR 2434
#define STATUS_KEYS 2881
#define STATUS_NUMBERS 2887
#define BORDER_TILE 2604

 
#define BLUE_KEY 1766
#define RED_KEY 1770
#define GREEN_KEY 1774
#define YELLOW_KEY 1778
#define GOLD_SKELKEY 1765
#define SILVER_SKELKEY 1769
#define BRONZE_SKELKEY 1773
#define RED_SKELKEY 1777
#define BLUE_CARD 1767
#define RED_CARD 1771
#define GREEN_CARD 1775
#define YELLOW_CARD 1779

#define BLUE_KEY_STATUE BLUE_KEY+2
#define RED_KEY_STATUE RED_KEY+2
#define GREEN_KEY_STATUE GREEN_KEY+2
#define YELLOW_KEY_STATUE YELLOW_KEY+2
#define SKEL_LOCKED 1846
#define SKEL_UNLOCKED 1847
#define RAMCARD_LOCKED 1850
#define RAMCARD_UNLOCKED 1851
#define CARD_LOCKED 1852
#define CARD_UNLOCKED 1853

#define WATER_BEGIN 320
#define WATER_END 320+8

#define WATER_BOIL 2305

#define FIRE_FLY0 630
#define FIRE_FLY1 631
#define FIRE_FLY2 632
#define FIRE_FLY3 633     
#define FIRE_FLY4 634

#define FIRE_FLY_RATE 50

#define BREAK_LIGHT 443
#define BREAK_LIGHT_ANIM 447
#define BREAK_BARREL 453
#define BREAK_PEDISTAL 463
#define BREAK_BOTTLE1 468
#define BREAK_BOTTLE2 475
#define BREAK_MUSHROOM 666

//////////////////////
//
// COOLIE
//
//////////////////////

#define COOLIE_CHARGE_FRAMES 4
#define COOLIE_CHARGE_R0 1420
#define COOLIE_CHARGE_R1 COOLIE_CHARGE_R0 + (COOLIE_CHARGE_FRAMES * 1)
#define COOLIE_CHARGE_R2 COOLIE_CHARGE_R0 + (COOLIE_CHARGE_FRAMES * 2)
#define COOLIE_CHARGE_R3 COOLIE_CHARGE_R0 + (COOLIE_CHARGE_FRAMES * 3)
#define COOLIE_CHARGE_R4 COOLIE_CHARGE_R0 + (COOLIE_CHARGE_FRAMES * 4)

#define COOLIE_RUN_FRAMES 4
#define COOLIE_RUN_R0 1400
#define COOLIE_RUN_R1 COOLIE_RUN_R0 + (COOLIE_RUN_FRAMES * 1)
#define COOLIE_RUN_R2 COOLIE_RUN_R0 + (COOLIE_RUN_FRAMES * 2)
#define COOLIE_RUN_R3 COOLIE_RUN_R0 + (COOLIE_RUN_FRAMES * 3)
#define COOLIE_RUN_R4 COOLIE_RUN_R0 + (COOLIE_RUN_FRAMES * 4)

#define COOLIE_PAIN_FRAMES 1
#define COOLIE_PAIN_R0 1420
#define COOLIE_PAIN_R1 COOLIE_PAIN_R0 //+ (COOLIE_PAIN_FRAMES * 1)
#define COOLIE_PAIN_R2 COOLIE_PAIN_R0 //+ (COOLIE_PAIN_FRAMES * 2)
#define COOLIE_PAIN_R3 COOLIE_PAIN_R0 //+ (COOLIE_PAIN_FRAMES * 3)
#define COOLIE_PAIN_R4 COOLIE_PAIN_R0 //+ (COOLIE_PAIN_FRAMES * 4)

#define COOLG_RUN_FRAMES 4
#define COOLG_RUN_R0 4277
#define COOLG_RUN_R1 COOLG_RUN_R0 + (COOLG_RUN_FRAMES * 1)
#define COOLG_RUN_R2 COOLG_RUN_R0 + (COOLG_RUN_FRAMES * 2)
#define COOLG_RUN_R3 COOLG_RUN_R0 + (COOLG_RUN_FRAMES * 3)
#define COOLG_RUN_R4 COOLG_RUN_R0 + (COOLG_RUN_FRAMES * 4)

#define COOLG_CLUB_FRAMES 2
#define COOLG_CLUB_R0 1451
#define COOLG_CLUB_R1 COOLG_CLUB_R0 + (COOLG_CLUB_FRAMES * 1)
#define COOLG_CLUB_R2 COOLG_CLUB_R0 + (COOLG_CLUB_FRAMES * 2)
#define COOLG_CLUB_R3 COOLG_CLUB_R0 + (COOLG_CLUB_FRAMES * 3)
#define COOLG_CLUB_R4 COOLG_CLUB_R0 + (COOLG_CLUB_FRAMES * 4)

#define COOLG_FIRE_FRAMES 3
#define COOLG_FIRE_R0 4297
#define COOLG_FIRE_R1 COOLG_FIRE_R0 + (COOLG_FIRE_FRAMES * 1)
#define COOLG_FIRE_R2 COOLG_FIRE_R0 + (COOLG_FIRE_FRAMES * 2)
//#define COOLG_FIRE_R3 COOLG_FIRE_R0 + (COOLG_FIRE_FRAMES * 3)
//#define COOLG_FIRE_R4 COOLG_FIRE_R0 + (COOLG_FIRE_FRAMES * 4)

#define COOLG_PAIN_FRAMES 1
#define COOLG_PAIN_R0 4306
#define COOLG_PAIN_R1 COOLG_PAIN_R0 //+ (COOLIE_PAIN_FRAMES * 1)
#define COOLG_PAIN_R2 COOLG_PAIN_R0 //+ (COOLIE_PAIN_FRAMES * 2)
#define COOLG_PAIN_R3 COOLG_PAIN_R0 //+ (COOLIE_PAIN_FRAMES * 3)
#define COOLG_PAIN_R4 COOLG_PAIN_R0 //+ (COOLIE_PAIN_FRAMES * 4)

#define COOLIE_DEAD_NOHEAD 1440
#define COOLIE_DIE 4260
#define COOLIE_DEAD 4268


//////////////////////
//
//  PLAYER NINJA
//
//////////////////////



#define PLAYER_NINJA_SHOOT_FRAMES 1
#define PLAYER_NINJA_SHOOT_R0 1069
#define PLAYER_NINJA_SHOOT_R1 PLAYER_NINJA_SHOOT_R0 + (PLAYER_NINJA_SHOOT_FRAMES * 2)
#define PLAYER_NINJA_SHOOT_R2 PLAYER_NINJA_SHOOT_R0 + (PLAYER_NINJA_SHOOT_FRAMES * 3)
#define PLAYER_NINJA_SHOOT_R3 PLAYER_NINJA_SHOOT_R0 + (PLAYER_NINJA_SHOOT_FRAMES * 4)
#define PLAYER_NINJA_SHOOT_R4 PLAYER_NINJA_SHOOT_R0 + (PLAYER_NINJA_SHOOT_FRAMES * 1)

#define PLAYER_NINJA_RUN_FRAMES 4
#define PLAYER_NINJA_RUN_R0 1094
#define PLAYER_NINJA_RUN_R1 PLAYER_NINJA_RUN_R0 + (PLAYER_NINJA_RUN_FRAMES * 1)
#define PLAYER_NINJA_RUN_R2 PLAYER_NINJA_RUN_R0 + (PLAYER_NINJA_RUN_FRAMES * 2)
#define PLAYER_NINJA_RUN_R3 PLAYER_NINJA_RUN_R0 + (PLAYER_NINJA_RUN_FRAMES * 3)
#define PLAYER_NINJA_RUN_R4 PLAYER_NINJA_RUN_R0 + (PLAYER_NINJA_RUN_FRAMES * 4)

#define ZOMBIE_RUN_R0 PLAYER_NINJA_RUN_R0+1

#define PLAYER_NINJA_STAND_FRAMES 1
#define PLAYER_NINJA_STAND_R0 PLAYER_NINJA_RUN_R0
#define PLAYER_NINJA_STAND_R1 PLAYER_NINJA_RUN_R1
#define PLAYER_NINJA_STAND_R2 PLAYER_NINJA_RUN_R2
#define PLAYER_NINJA_STAND_R3 PLAYER_NINJA_RUN_R3
#define PLAYER_NINJA_STAND_R4 PLAYER_NINJA_RUN_R4

#define PLAYER_NINJA_JUMP_FRAMES 4
#define PLAYER_NINJA_JUMP_R0 1074
#define PLAYER_NINJA_JUMP_R1 PLAYER_NINJA_JUMP_R0 + (PLAYER_NINJA_JUMP_FRAMES * 1)
#define PLAYER_NINJA_JUMP_R2 PLAYER_NINJA_JUMP_R0 + (PLAYER_NINJA_JUMP_FRAMES * 2)
#define PLAYER_NINJA_JUMP_R3 PLAYER_NINJA_JUMP_R0 + (PLAYER_NINJA_JUMP_FRAMES * 3)
#define PLAYER_NINJA_JUMP_R4 PLAYER_NINJA_JUMP_R0 + (PLAYER_NINJA_JUMP_FRAMES * 4)

#define PLAYER_NINJA_FALL_R0 PLAYER_NINJA_JUMP_R0+2
#define PLAYER_NINJA_FALL_R1 PLAYER_NINJA_JUMP_R1+2
#define PLAYER_NINJA_FALL_R2 PLAYER_NINJA_JUMP_R2+2
#define PLAYER_NINJA_FALL_R3 PLAYER_NINJA_JUMP_R3+2
#define PLAYER_NINJA_FALL_R4 PLAYER_NINJA_JUMP_R4+2

#define PLAYER_NINJA_CLIMB_FRAMES 4
#define PLAYER_NINJA_CLIMB_R0 1024
#define PLAYER_NINJA_CLIMB_R1 PLAYER_NINJA_CLIMB_R0 + (PLAYER_NINJA_CLIMB_FRAMES * 1)
#define PLAYER_NINJA_CLIMB_R2 PLAYER_NINJA_CLIMB_R0 + (PLAYER_NINJA_CLIMB_FRAMES * 2)
#define PLAYER_NINJA_CLIMB_R3 PLAYER_NINJA_CLIMB_R0 + (PLAYER_NINJA_CLIMB_FRAMES * 3)
#define PLAYER_NINJA_CLIMB_R4 PLAYER_NINJA_CLIMB_R0 + (PLAYER_NINJA_CLIMB_FRAMES * 4)

#define PLAYER_NINJA_CRAWL_FRAMES 4
#define PLAYER_NINJA_CRAWL_R0 1044
#define PLAYER_NINJA_CRAWL_R1 PLAYER_NINJA_CRAWL_R0 + (PLAYER_NINJA_CRAWL_FRAMES * 1)
#define PLAYER_NINJA_CRAWL_R2 PLAYER_NINJA_CRAWL_R0 + (PLAYER_NINJA_CRAWL_FRAMES * 2)
#define PLAYER_NINJA_CRAWL_R3 PLAYER_NINJA_CRAWL_R0 + (PLAYER_NINJA_CRAWL_FRAMES * 3)
#define PLAYER_NINJA_CRAWL_R4 PLAYER_NINJA_CRAWL_R0 + (PLAYER_NINJA_CRAWL_FRAMES * 4)

#define PLAYER_NINJA_SWIM_FRAMES 4
#define PLAYER_NINJA_SWIM_R0 1114
#define PLAYER_NINJA_SWIM_R1 PLAYER_NINJA_SWIM_R0 + (PLAYER_NINJA_SWIM_FRAMES * 1)
#define PLAYER_NINJA_SWIM_R2 PLAYER_NINJA_SWIM_R0 + (PLAYER_NINJA_SWIM_FRAMES * 2)
#define PLAYER_NINJA_SWIM_R3 PLAYER_NINJA_SWIM_R0 + (PLAYER_NINJA_SWIM_FRAMES * 3)
#define PLAYER_NINJA_SWIM_R4 PLAYER_NINJA_SWIM_R0 + (PLAYER_NINJA_SWIM_FRAMES * 4)

#define PLAYER_NINJA_SWORD_FRAMES 3
#define PLAYER_NINJA_SWORD_R0 1161
#define PLAYER_NINJA_SWORD_R1 PLAYER_NINJA_SWORD_R0 + (PLAYER_NINJA_SWORD_FRAMES * 1)
#define PLAYER_NINJA_SWORD_R2 PLAYER_NINJA_SWORD_R0 + (PLAYER_NINJA_SWORD_FRAMES * 2)
#define PLAYER_NINJA_SWORD_R3 PLAYER_NINJA_SWORD_R0 + (PLAYER_NINJA_SWORD_FRAMES * 3)
#define PLAYER_NINJA_SWORD_R4 PLAYER_NINJA_SWORD_R0 + (PLAYER_NINJA_SWORD_FRAMES * 4)

#define PLAYER_NINJA_PUNCH_FRAMES 2
#define PLAYER_NINJA_PUNCH_R0 1176
#define PLAYER_NINJA_PUNCH_R1 PLAYER_NINJA_PUNCH_R0 + (PLAYER_NINJA_PUNCH_FRAMES * 1)
#define PLAYER_NINJA_PUNCH_R2 PLAYER_NINJA_PUNCH_R0 + (PLAYER_NINJA_PUNCH_FRAMES * 2)
#define PLAYER_NINJA_PUNCH_R3 PLAYER_NINJA_PUNCH_R0 + (PLAYER_NINJA_PUNCH_FRAMES * 3)
#define PLAYER_NINJA_PUNCH_R4 PLAYER_NINJA_PUNCH_R0 + (PLAYER_NINJA_PUNCH_FRAMES * 4)

#define PLAYER_NINJA_KICK_FRAMES 2
#define PLAYER_NINJA_KICK_R0 1186
#define PLAYER_NINJA_KICK_R1 PLAYER_NINJA_KICK_R0 + (PLAYER_NINJA_KICK_FRAMES * 1)
#define PLAYER_NINJA_KICK_R2 PLAYER_NINJA_KICK_R0 + (PLAYER_NINJA_KICK_FRAMES * 2)
#define PLAYER_NINJA_KICK_R3 PLAYER_NINJA_KICK_R0 + (PLAYER_NINJA_KICK_FRAMES * 3)
#define PLAYER_NINJA_KICK_R4 PLAYER_NINJA_KICK_R0 + (PLAYER_NINJA_KICK_FRAMES * 4)

#define PLAYER_NINJA_DIE    1152
#define PLAYER_NINJA_FLY    1069

//////////////////////
//
//  EVIL NINJA
//
//////////////////////

#define NINJA_RUN_FRAMES 4
#define NINJA_RUN_R0 4096
#define NINJA_RUN_R1 NINJA_RUN_R0 + (NINJA_RUN_FRAMES * 1)
#define NINJA_RUN_R2 NINJA_RUN_R0 + (NINJA_RUN_FRAMES * 2)
#define NINJA_RUN_R3 NINJA_RUN_R0 + (NINJA_RUN_FRAMES * 3)
#define NINJA_RUN_R4 NINJA_RUN_R0 + (NINJA_RUN_FRAMES * 4)

#define NINJA_STAND_FRAMES 1
#define NINJA_STAND_R0 NINJA_RUN_R0
#define NINJA_STAND_R1 NINJA_RUN_R1
#define NINJA_STAND_R2 NINJA_RUN_R2
#define NINJA_STAND_R3 NINJA_RUN_R3
#define NINJA_STAND_R4 NINJA_RUN_R4

#define NINJA_CRAWL_FRAMES 4
#define NINJA_CRAWL_R0 4162
#define NINJA_CRAWL_R1 NINJA_CRAWL_R0 + (NINJA_CRAWL_FRAMES * 1)
#define NINJA_CRAWL_R2 NINJA_CRAWL_R0 + (NINJA_CRAWL_FRAMES * 2)
#define NINJA_CRAWL_R3 NINJA_CRAWL_R0 + (NINJA_CRAWL_FRAMES * 3)
#define NINJA_CRAWL_R4 NINJA_CRAWL_R0 + (NINJA_CRAWL_FRAMES * 4)

#define NINJA_SWIM_FRAMES 4
#define NINJA_SWIM_R0 4122
#define NINJA_SWIM_R1 NINJA_SWIM_R0 + (NINJA_SWIM_FRAMES * 1)
#define NINJA_SWIM_R2 NINJA_SWIM_R0 + (NINJA_SWIM_FRAMES * 2)
#define NINJA_SWIM_R3 NINJA_SWIM_R0 + (NINJA_SWIM_FRAMES * 3)
#define NINJA_SWIM_R4 NINJA_SWIM_R0 + (NINJA_SWIM_FRAMES * 4)

#define NINJA_HARI_KARI_FRAMES 8
#define NINJA_HARI_KARI_R0 4211
#define NINJA_HARI_KARI_R1 NINJA_HARI_KARI_R0 
#define NINJA_HARI_KARI_R2 NINJA_HARI_KARI_R0 
#define NINJA_HARI_KARI_R3 NINJA_HARI_KARI_R0 
#define NINJA_HARI_KARI_R4 NINJA_HARI_KARI_R0 

#define NINJA_CLIMB_FRAMES 4
#define NINJA_CLIMB_R0 4182
#define NINJA_CLIMB_R1 NINJA_CLIMB_R0 + (NINJA_CLIMB_FRAMES * 1)
#define NINJA_CLIMB_R2 NINJA_CLIMB_R0 + (NINJA_CLIMB_FRAMES * 2)
#define NINJA_CLIMB_R3 NINJA_CLIMB_R0 + (NINJA_CLIMB_FRAMES * 3)
#define NINJA_CLIMB_R4 NINJA_CLIMB_R0 + (NINJA_CLIMB_FRAMES * 4)

#define NINJA_THROW_FRAMES 3
#define NINJA_THROW_R0 4202
#define NINJA_THROW_R1 NINJA_THROW_R0 + (NINJA_THROW_FRAMES * 1)
#define NINJA_THROW_R2 NINJA_THROW_R0 + (NINJA_THROW_FRAMES * 2)

// don't have rotations for pain frames currently

#if 1
#define NINJA_PAIN_FRAMES 2
#define NINJA_PAIN_R0 4219   //4164
#define NINJA_PAIN_R1 NINJA_PAIN_R0
#define NINJA_PAIN_R2 NINJA_PAIN_R0
#define NINJA_PAIN_R3 NINJA_PAIN_R0
#define NINJA_PAIN_R4 NINJA_PAIN_R0
#endif

#define NINJA_JUMP_FRAMES 4
#define NINJA_JUMP_R0 4142
#define NINJA_JUMP_R1 NINJA_JUMP_R0 + (NINJA_JUMP_FRAMES * 1)
#define NINJA_JUMP_R2 NINJA_JUMP_R0 + (NINJA_JUMP_FRAMES * 2)
#define NINJA_JUMP_R3 NINJA_JUMP_R0 + (NINJA_JUMP_FRAMES * 3)
#define NINJA_JUMP_R4 NINJA_JUMP_R0 + (NINJA_JUMP_FRAMES * 4)

#define NINJA_FALL_R0 NINJA_JUMP_R0+2
#define NINJA_FALL_R1 NINJA_JUMP_R1+2
#define NINJA_FALL_R2 NINJA_JUMP_R2+2
#define NINJA_FALL_R3 NINJA_JUMP_R3+2
#define NINJA_FALL_R4 NINJA_JUMP_R4+2

#define NINJA_LAND_R0 NINJA_JUMP_R0+3
#define NINJA_LAND_R1 NINJA_JUMP_R1+3
#define NINJA_LAND_R2 NINJA_JUMP_R2+3
#define NINJA_LAND_R3 NINJA_JUMP_R3+3
#define NINJA_LAND_R4 NINJA_JUMP_R4+3

#define NINJA_KNEEL_R0 NINJA_CRAWL_R0
#define NINJA_KNEEL_R1 NINJA_CRAWL_R1
#define NINJA_KNEEL_R2 NINJA_CRAWL_R2
#define NINJA_KNEEL_R3 NINJA_CRAWL_R3
#define NINJA_KNEEL_R4 NINJA_CRAWL_R4

#define NINJA_FLY_FRAMES 2
#define NINJA_FLY_R0 4116
#define NINJA_FLY_R1 NINJA_FLY_R0 + (NINJA_FLY_FRAMES * 1)
#define NINJA_FLY_R2 NINJA_FLY_R0 + (NINJA_FLY_FRAMES * 2)
#define NINJA_FLY_R3 NINJA_FLY_R0 + (NINJA_FLY_FRAMES * 3)
#define NINJA_FLY_R4 NINJA_FLY_R0 + (NINJA_FLY_FRAMES * 4)

#define NINJA_FIRE_FRAMES 2
#define NINJA_FIRE_R0 4116
#define NINJA_FIRE_R1 NINJA_FIRE_R0 + (NINJA_FIRE_FRAMES * 1)
#define NINJA_FIRE_R2 NINJA_FIRE_R0 + (NINJA_FIRE_FRAMES * 2)
#define NINJA_FIRE_R3 NINJA_FIRE_R0 + (NINJA_FIRE_FRAMES * 3)
#define NINJA_FIRE_R4 NINJA_FIRE_R0 + (NINJA_FIRE_FRAMES * 4)

#define NINJA_DIE 4219
#define NINJA_DEAD NINJA_DIE+8

#define NINJA_SLICED 4227
#define NINJA_DEAD_SLICED NINJA_SLICED+9

#define NINJA_Head_FRAMES 1
#define NINJA_Head_R0 1142
#define NINJA_Head_R1 NINJA_Head_R0 + (NINJA_Head_FRAMES * 1)
#define NINJA_Head_R2 NINJA_Head_R0 + (NINJA_Head_FRAMES * 2)
#define NINJA_Head_R3 NINJA_Head_R0 + (NINJA_Head_FRAMES * 3)
#define NINJA_Head_R4 NINJA_Head_R0 + (NINJA_Head_FRAMES * 4)

#define NINJA_HeadHurl_FRAMES 1
#define NINJA_HeadHurl_R0 1147
#define NINJA_HeadHurl_R1 NINJA_HeadHurl_R0 + (NINJA_HeadHurl_FRAMES * 1)
#define NINJA_HeadHurl_R2 NINJA_HeadHurl_R0 + (NINJA_HeadHurl_FRAMES * 2)
#define NINJA_HeadHurl_R3 NINJA_HeadHurl_R0 + (NINJA_HeadHurl_FRAMES * 3)
#define NINJA_HeadHurl_R4 NINJA_HeadHurl_R0 + (NINJA_HeadHurl_FRAMES * 4)

//////////////////////
//
// SERP BOSS
//
//////////////////////

#define SERP_RUN_FRAMES 3
#define SERP_RUN_R0 1300
#define SERP_RUN_R1 SERP_RUN_R0 + (SERP_RUN_FRAMES * 1)
#define SERP_RUN_R2 SERP_RUN_R0 + (SERP_RUN_FRAMES * 2)
#define SERP_RUN_R3 SERP_RUN_R0 + (SERP_RUN_FRAMES * 3)
#define SERP_RUN_R4 SERP_RUN_R0 + (SERP_RUN_FRAMES * 4)

#define SERP_SLASH_FRAMES 5
#define SERP_SLASH_R0 972
#define SERP_SLASH_R1 SERP_SLASH_R0 + (SERP_SLASH_FRAMES * 1)
#define SERP_SLASH_R2 SERP_SLASH_R0 + (SERP_SLASH_FRAMES * 2)
#define SERP_SLASH_R3 SERP_SLASH_R0 + (SERP_SLASH_FRAMES * 3)
#define SERP_SLASH_R4 SERP_SLASH_R0 + (SERP_SLASH_FRAMES * 4)

#define SERP_SPELL_FRAMES 4
#define SERP_SPELL_R0 997
#define SERP_SPELL_R1 SERP_SPELL_R0 + (SERP_SPELL_FRAMES * 1)
#define SERP_SPELL_R2 SERP_SPELL_R0 + (SERP_SPELL_FRAMES * 2)
#define SERP_SPELL_R3 SERP_SPELL_R0 + (SERP_SPELL_FRAMES * 3)
#define SERP_SPELL_R4 SERP_SPELL_R0 + (SERP_SPELL_FRAMES * 4)

#define SERP_DIE 960
#define SERP_DEAD 969

//////////////////////
//
// LAVA BOSS
//
//////////////////////

#define LAVA_RUN_FRAMES 1
#define LAVA_RUN_R0 2355
#define LAVA_RUN_R1 LAVA_RUN_R0 //+ (LAVA_RUN_FRAMES * 1)
#define LAVA_RUN_R2 LAVA_RUN_R0 //+ (LAVA_RUN_FRAMES * 2)
#define LAVA_RUN_R3 LAVA_RUN_R0 //+ (LAVA_RUN_FRAMES * 3)
#define LAVA_RUN_R4 LAVA_RUN_R0 //+ (LAVA_RUN_FRAMES * 4)

#define LAVA_THROW_FRAMES 1
#define LAVA_THROW_R0 2355
#define LAVA_THROW_R1 LAVA_THROW_R0 //+ (LAVA_THROW_FRAMES * 1)
#define LAVA_THROW_R2 LAVA_THROW_R0 //+ (LAVA_THROW_FRAMES * 2)
#define LAVA_THROW_R3 LAVA_THROW_R0 //+ (LAVA_THROW_FRAMES * 3)
#define LAVA_THROW_R4 LAVA_THROW_R0 //+ (LAVA_THROW_FRAMES * 4)

#define LAVA_FLAME_FRAMES 1
#define LAVA_FLAME_R0 2355
#define LAVA_FLAME_R1 LAVA_FLAME_R0 //+ (LAVA_FLAME_FRAMES * 1)
#define LAVA_FLAME_R2 LAVA_FLAME_R0 //+ (LAVA_FLAME_FRAMES * 2)
#define LAVA_FLAME_R3 LAVA_FLAME_R0 //+ (LAVA_FLAME_FRAMES * 3)
#define LAVA_FLAME_R4 LAVA_FLAME_R0 //+ (LAVA_FLAME_FRAMES * 4)

#define LAVA_DIE 2355
#define LAVA_DEAD 2355

// 10 frames
#define LAVA_BOULDER 2196

//////////////////////
//
// SKEL
//
//////////////////////

#define SKEL_RUN_FRAMES 6
#define SKEL_RUN_R0 1367
#define SKEL_RUN_R1 SKEL_RUN_R0 + (SKEL_RUN_FRAMES * 1)
#define SKEL_RUN_R2 SKEL_RUN_R0 + (SKEL_RUN_FRAMES * 2)
#define SKEL_RUN_R3 SKEL_RUN_R0 + (SKEL_RUN_FRAMES * 3)
#define SKEL_RUN_R4 SKEL_RUN_R0 + (SKEL_RUN_FRAMES * 4)

#define SKEL_SLASH_FRAMES 3
#define SKEL_SLASH_R0 1326
#define SKEL_SLASH_R1 SKEL_SLASH_R0 + (SKEL_SLASH_FRAMES * 1)
#define SKEL_SLASH_R2 SKEL_SLASH_R0 + (SKEL_SLASH_FRAMES * 2)
#define SKEL_SLASH_R3 SKEL_SLASH_R0 + (SKEL_SLASH_FRAMES * 3)
#define SKEL_SLASH_R4 SKEL_SLASH_R0 + (SKEL_SLASH_FRAMES * 4)

#define SKEL_SPELL_FRAMES 4
#define SKEL_SPELL_R0 1341
#define SKEL_SPELL_R1 SKEL_SPELL_R0 + (SKEL_SPELL_FRAMES * 1)
#define SKEL_SPELL_R2 SKEL_SPELL_R0 + (SKEL_SPELL_FRAMES * 2)
#define SKEL_SPELL_R3 SKEL_SPELL_R0 + (SKEL_SPELL_FRAMES * 3)
#define SKEL_SPELL_R4 SKEL_SPELL_R0 + (SKEL_SPELL_FRAMES * 4)

#define SKEL_PAIN_FRAMES 1
#define SKEL_PAIN_R0 SKEL_SLASH_R0+1 
#define SKEL_PAIN_R1 SKEL_SLASH_R1+1 
#define SKEL_PAIN_R2 SKEL_SLASH_R2+1 
#define SKEL_PAIN_R3 SKEL_SLASH_R3+1 
#define SKEL_PAIN_R4 SKEL_SLASH_R4+1 


#define SKEL_TELEPORT 1361
#define SKEL_DIE 1320

//////////////////////
//
// GORO
//
//////////////////////

#define GORO_RUN_FRAMES 4
#define GORO_RUN_R0 1469
#define GORO_RUN_R1 GORO_RUN_R0 + (GORO_RUN_FRAMES * 1)
#define GORO_RUN_R2 GORO_RUN_R0 + (GORO_RUN_FRAMES * 2)
#define GORO_RUN_R3 GORO_RUN_R0 + (GORO_RUN_FRAMES * 3)
#define GORO_RUN_R4 GORO_RUN_R0 + (GORO_RUN_FRAMES * 4)

#define GORO_CHOP_FRAMES 3
#define GORO_CHOP_R0 1489
#define GORO_CHOP_R1 GORO_CHOP_R0 + (GORO_CHOP_FRAMES * 1)
#define GORO_CHOP_R2 GORO_CHOP_R0 + (GORO_CHOP_FRAMES * 2)
#define GORO_CHOP_R3 GORO_RUN_R3
#define GORO_CHOP_R4 GORO_RUN_R4

#define GORO_STAND_R0 GORO_CHOP_R0
#define GORO_STAND_R1 GORO_CHOP_R1 
#define GORO_STAND_R2 GORO_CHOP_R2 
#define GORO_STAND_R3 GORO_CHOP_R3 
#define GORO_STAND_R4 GORO_CHOP_R4 

#define GORO_SPELL_FRAMES 2
#define GORO_SPELL_R0 1513
#define GORO_SPELL_R1 GORO_SPELL_R0 + (GORO_SPELL_FRAMES * 1)
#define GORO_SPELL_R2 GORO_SPELL_R0 + (GORO_SPELL_FRAMES * 2)
#define GORO_SPELL_R3 GORO_RUN_R3 
#define GORO_SPELL_R4 GORO_RUN_R4 

#define GORO_DIE 1504
#define GORO_DEAD 1504+8

//////////////////////
//
// FIREBALL
//
//////////////////////

#define FIREBALL_FRAMES 4
#define FIREBALL_R0 3192
#define FIREBALL_R1 FIREBALL_R0 + (FIREBALL_FRAMES * 1)
#define FIREBALL_R2 FIREBALL_R0 + (FIREBALL_FRAMES * 2)
#define FIREBALL_R3 FIREBALL_R0 + (FIREBALL_FRAMES * 3)
#define FIREBALL_R4 FIREBALL_R0 + (FIREBALL_FRAMES * 4)

//////////////////////
//
// HORNET
//
//////////////////////

#define HORNET_RUN_FRAMES 2
#define HORNET_RUN_R0 800
#define HORNET_RUN_R1 HORNET_RUN_R0 + (HORNET_RUN_FRAMES * 1)
#define HORNET_RUN_R2 HORNET_RUN_R0 + (HORNET_RUN_FRAMES * 2)
#define HORNET_RUN_R3 HORNET_RUN_R0 + (HORNET_RUN_FRAMES * 3)
#define HORNET_RUN_R4 HORNET_RUN_R0 + (HORNET_RUN_FRAMES * 4)

#define HORNET_DIE 810
#define HORNET_DEAD 811

//////////////////////
//
// SKULL
//
//////////////////////

#define SKULL_FRAMES 1
#define SKULL_R0 820
#define SKULL_R1 SKULL_R0 + (SKULL_FRAMES * 1)
#define SKULL_R2 SKULL_R0 + (SKULL_FRAMES * 2)
#define SKULL_R3 SKULL_R0 + (SKULL_FRAMES * 3)
#define SKULL_R4 SKULL_R0 + (SKULL_FRAMES * 4)

#define SKULL_DIE 825
#define SKULL_EXPLODE 825

#define SKULL_SERP (SKULL_R0 + 2)

// MECHANICAL BETTY VERSION
#define BETTY_FRAMES 3
#define BETTY_R0 817
#define BETTY_R1 BETTY_R0 
#define BETTY_R2 BETTY_R0 
#define BETTY_R3 BETTY_R0 
#define BETTY_R4 BETTY_R0 


//////////////////////
//
// RIPPER
//
//////////////////////
#define RIPPER_RUN_FRAMES 4
#define RIPPER_RUN_R0 1580
#define RIPPER_RUN_R1 RIPPER_RUN_R0 + (RIPPER_RUN_FRAMES * 1)
#define RIPPER_RUN_R2 RIPPER_RUN_R0 + (RIPPER_RUN_FRAMES * 2)
#define RIPPER_RUN_R3 RIPPER_RUN_R0 + (RIPPER_RUN_FRAMES * 3)
#define RIPPER_RUN_R4 RIPPER_RUN_R0 + (RIPPER_RUN_FRAMES * 4)

#define RIPPER_JUMP_FRAMES 2
#define RIPPER_JUMP_R0 1620
#define RIPPER_JUMP_R1 RIPPER_JUMP_R0 + (RIPPER_JUMP_FRAMES * 1)
#define RIPPER_JUMP_R2 RIPPER_JUMP_R0 + (RIPPER_JUMP_FRAMES * 2)
#define RIPPER_JUMP_R3 RIPPER_JUMP_R0 + (RIPPER_JUMP_FRAMES * 3)
#define RIPPER_JUMP_R4 RIPPER_JUMP_R0 + (RIPPER_JUMP_FRAMES * 4)

#define RIPPER_FALL_R0 RIPPER_JUMP_R0+1
#define RIPPER_FALL_R1 RIPPER_JUMP_R1+1 
#define RIPPER_FALL_R2 RIPPER_JUMP_R2+1 
#define RIPPER_FALL_R3 RIPPER_JUMP_R3+1 
#define RIPPER_FALL_R4 RIPPER_JUMP_R4+1 

#define RIPPER_STAND_R0 RIPPER_JUMP_R0
#define RIPPER_STAND_R1 RIPPER_JUMP_R1 
#define RIPPER_STAND_R2 RIPPER_JUMP_R2 
#define RIPPER_STAND_R3 RIPPER_JUMP_R3 
#define RIPPER_STAND_R4 RIPPER_JUMP_R4 

#define RIPPER_HANG_FRAMES 1
#define RIPPER_HANG_R0 1645
#define RIPPER_HANG_R1 1645
#define RIPPER_HANG_R2 1639
#define RIPPER_HANG_R3 1637
#define RIPPER_HANG_R4 1635

#define RIPPER_SWIPE_FRAMES 4
#define RIPPER_SWIPE_R0 1600
#define RIPPER_SWIPE_R1 RIPPER_SWIPE_R0 + (RIPPER_SWIPE_FRAMES * 1)
#define RIPPER_SWIPE_R2 RIPPER_SWIPE_R0 + (RIPPER_SWIPE_FRAMES * 2)
#define RIPPER_SWIPE_R3 RIPPER_SWIPE_R0 + (RIPPER_SWIPE_FRAMES * 3)
#define RIPPER_SWIPE_R4 RIPPER_SWIPE_R0 + (RIPPER_SWIPE_FRAMES * 4)

#define RIPPER_HEART_FRAMES 1
#define RIPPER_HEART_R0 1635
#define RIPPER_HEART_R1 RIPPER_HEART_R0
#define RIPPER_HEART_R2 RIPPER_HEART_R0
#define RIPPER_HEART_R3 RIPPER_HEART_R0
#define RIPPER_HEART_R4 RIPPER_HEART_R0

#define RIPPER_DIE 1640
#define RIPPER_DEAD 1643

// The new Ripper
#define RIPPER2_RUN_FRAMES 4
#define RIPPER2_RUN_R0 4320
#define RIPPER2_RUN_R1 RIPPER2_RUN_R0 + (RIPPER2_RUN_FRAMES * 1)
#define RIPPER2_RUN_R2 RIPPER2_RUN_R0 + (RIPPER2_RUN_FRAMES * 2)
#define RIPPER2_RUN_R3 RIPPER2_RUN_R0 + (RIPPER2_RUN_FRAMES * 3)
#define RIPPER2_RUN_R4 RIPPER2_RUN_R0 + (RIPPER2_RUN_FRAMES * 4)

#define RIPPER2_RUNFAST_FRAMES 4
#define RIPPER2_RUNFAST_R0 4340
#define RIPPER2_RUNFAST_R1 RIPPER2_RUNFAST_R0 + (RIPPER2_RUNFAST_FRAMES * 1)
#define RIPPER2_RUNFAST_R2 RIPPER2_RUNFAST_R0 + (RIPPER2_RUNFAST_FRAMES * 2)
#define RIPPER2_RUNFAST_R3 RIPPER2_RUNFAST_R0 + (RIPPER2_RUNFAST_FRAMES * 3)
#define RIPPER2_RUNFAST_R4 RIPPER2_RUNFAST_R0 + (RIPPER2_RUNFAST_FRAMES * 4)

#define RIPPER2_JUMP_FRAMES 4
#define RIPPER2_JUMP_R0 4374
#define RIPPER2_JUMP_R1 RIPPER2_JUMP_R0 + (RIPPER2_JUMP_FRAMES * 1)
#define RIPPER2_JUMP_R2 RIPPER2_JUMP_R0 + (RIPPER2_JUMP_FRAMES * 2)
#define RIPPER2_JUMP_R3 RIPPER2_JUMP_R0 + (RIPPER2_JUMP_FRAMES * 3)
#define RIPPER2_JUMP_R4 RIPPER2_JUMP_R0 + (RIPPER2_JUMP_FRAMES * 4)

#define RIPPER2_FALL_R0 RIPPER2_JUMP_R0+2
#define RIPPER2_FALL_R1 RIPPER2_JUMP_R1+2 
#define RIPPER2_FALL_R2 RIPPER2_JUMP_R2+2 
#define RIPPER2_FALL_R3 RIPPER2_JUMP_R3+2 
#define RIPPER2_FALL_R4 RIPPER2_JUMP_R4+2 

#define RIPPER2_STAND_R0 RIPPER2_JUMP_R0+3
#define RIPPER2_STAND_R1 RIPPER2_JUMP_R1+3 
#define RIPPER2_STAND_R2 RIPPER2_JUMP_R2+3 
#define RIPPER2_STAND_R3 RIPPER2_JUMP_R3+3 
#define RIPPER2_STAND_R4 RIPPER2_JUMP_R4+3 

#define RIPPER2_HANG_FRAMES 1
#define RIPPER2_HANG_R0 4369
#define RIPPER2_HANG_R1 RIPPER2_HANG_R0 + (RIPPER2_HANG_FRAMES * 1)
#define RIPPER2_HANG_R2 RIPPER2_HANG_R0 + (RIPPER2_HANG_FRAMES * 2)
#define RIPPER2_HANG_R3 RIPPER2_HANG_R0 + (RIPPER2_HANG_FRAMES * 3)
#define RIPPER2_HANG_R4 RIPPER2_HANG_R0 + (RIPPER2_HANG_FRAMES * 4)

#define RIPPER2_SWIPE_FRAMES 4
#define RIPPER2_SWIPE_R0 4394
#define RIPPER2_SWIPE_R1 RIPPER2_SWIPE_R0 + (RIPPER2_SWIPE_FRAMES * 1)
#define RIPPER2_SWIPE_R2 RIPPER2_SWIPE_R0 + (RIPPER2_SWIPE_FRAMES * 2)
#define RIPPER2_SWIPE_R3 RIPPER2_SWIPE_R0 + (RIPPER2_SWIPE_FRAMES * 3)
#define RIPPER2_SWIPE_R4 RIPPER2_SWIPE_R0 + (RIPPER2_SWIPE_FRAMES * 4)

#define RIPPER2_MEKONG_FRAMES 3
#define RIPPER2_MEKONG_R0 4360
#define RIPPER2_MEKONG_R1 RIPPER2_MEKONG_R0 + (RIPPER2_MEKONG_FRAMES * 1)
#define RIPPER2_MEKONG_R2 RIPPER2_MEKONG_R0 + (RIPPER2_MEKONG_FRAMES * 2)
#define RIPPER2_MEKONG_R3 RIPPER2_MEKONG_R0 + (RIPPER2_MEKONG_FRAMES * 3)
#define RIPPER2_MEKONG_R4 RIPPER2_MEKONG_R0 + (RIPPER2_MEKONG_FRAMES * 4)

#define RIPPER2_HEART_FRAMES 2
#define RIPPER2_HEART_R0 4422
#define RIPPER2_HEART_R1 RIPPER2_HEART_R0
#define RIPPER2_HEART_R2 RIPPER2_HEART_R0
#define RIPPER2_HEART_R3 RIPPER2_HEART_R0
#define RIPPER2_HEART_R4 RIPPER2_HEART_R0

#define RIPPER2_DIE 4414    // Has 8 frames now
#define RIPPER2_DEAD 4421

//////////////////////
//
// EEL
//
//////////////////////

#define EEL_RUN_FRAMES 3
#define EEL_RUN_R0 3780
#define EEL_RUN_R1 EEL_RUN_R0 + (EEL_RUN_FRAMES * 1)
#define EEL_RUN_R2 EEL_RUN_R0 + (EEL_RUN_FRAMES * 2)
#define EEL_RUN_R3 EEL_RUN_R0 + (EEL_RUN_FRAMES * 3)
#define EEL_RUN_R4 EEL_RUN_R0 + (EEL_RUN_FRAMES * 4)

#define EEL_FIRE_FRAMES 3
#define EEL_FIRE_R0 3760
#define EEL_FIRE_R1 EEL_FIRE_R0 + (EEL_FIRE_FRAMES * 1)
#define EEL_FIRE_R2 EEL_FIRE_R0 + (EEL_FIRE_FRAMES * 2)
#define EEL_FIRE_R3 EEL_FIRE_R0 + (EEL_FIRE_FRAMES * 3)
#define EEL_FIRE_R4 EEL_RUN_R0  + (EEL_RUN_FRAMES  * 4)

#define EEL_DIE 3795
#define EEL_DEAD 3795

//////////////////////
//
// SUMO
//
//////////////////////

#define SUMO_RUN_FRAMES 4
#define SUMO_RUN_R0 1210
#define SUMO_RUN_R1 SUMO_RUN_R0 + (SUMO_RUN_FRAMES * 1)
#define SUMO_RUN_R2 SUMO_RUN_R0 + (SUMO_RUN_FRAMES * 2)
#define SUMO_RUN_R3 SUMO_RUN_R0 + (SUMO_RUN_FRAMES * 3)
#define SUMO_RUN_R4 SUMO_RUN_R0 + (SUMO_RUN_FRAMES * 4)

#define SUMO_PAIN_FRAMES 1
#define SUMO_PAIN_R0 1265
#define SUMO_PAIN_R1 SUMO_PAIN_R0 //+ (SUMO_PAIN_FRAMES * 1)
#define SUMO_PAIN_R2 SUMO_PAIN_R0 //+ (SUMO_PAIN_FRAMES * 2)
#define SUMO_PAIN_R3 SUMO_PAIN_R0 //+ (SUMO_PAIN_FRAMES * 3)
#define SUMO_PAIN_R4 SUMO_PAIN_R0 //+ (SUMO_PAIN_FRAMES * 4)

#define SUMO_STOMP_FRAMES 3
#define SUMO_STOMP_R0 1230
#define SUMO_STOMP_R1 SUMO_STOMP_R0 + (SUMO_STOMP_FRAMES * 1)
#define SUMO_STOMP_R2 SUMO_STOMP_R0 + (SUMO_STOMP_FRAMES * 2)
#define SUMO_STOMP_R3 SUMO_STOMP_R0 + (SUMO_STOMP_FRAMES * 3)
#define SUMO_STOMP_R4 SUMO_STOMP_R0 + (SUMO_STOMP_FRAMES * 4)

#define SUMO_CLAP_FRAMES 4
#define SUMO_CLAP_R0 1245
#define SUMO_CLAP_R1 SUMO_CLAP_R0 + (SUMO_CLAP_FRAMES * 1)
#define SUMO_CLAP_R2 SUMO_CLAP_R0 + (SUMO_CLAP_FRAMES * 2)
#define SUMO_CLAP_R3 SUMO_CLAP_R0 + (SUMO_CLAP_FRAMES * 3)
#define SUMO_CLAP_R4 SUMO_CLAP_R0 + (SUMO_CLAP_FRAMES * 4)

#define SUMO_FART_FRAMES 4
#define SUMO_FART_R0 1280
#define SUMO_FART_R1 SUMO_FART_R0 
#define SUMO_FART_R2 SUMO_FART_R0 
#define SUMO_FART_R3 SUMO_FART_R0 
#define SUMO_FART_R4 SUMO_FART_R0 

#define SUMO_DIE 1270
#define SUMO_DEAD 1277

#define TRASHCAN 2540

//////////////////////
//
// GIRLS
//
//////////////////////
#define TOILETGIRL_R0 5023
#define WASHGIRL_R0 5032
#define MECHANICGIRL_R0 4590
#define CARGIRL_R0 4594
#define SAILORGIRL_R0 4600
#define PRUNEGIRL_R0 4604

// Pachinko machines
#define PACHINKO1 4768
#define PACHINKO2 4792
#define PACHINKO3 4816
#define PACHINKO4 4840

/////////////////////////////////////////////////////////////////////////////////

//////////////////////
//
// BUNNY
//
//////////////////////
#define BUNNY_RUN_FRAMES 5
#define BUNNY_RUN_R0 4550
#define BUNNY_RUN_R1 BUNNY_RUN_R0 + (BUNNY_RUN_FRAMES * 1)
#define BUNNY_RUN_R2 BUNNY_RUN_R0 + (BUNNY_RUN_FRAMES * 2)
#define BUNNY_RUN_R3 BUNNY_RUN_R0 + (BUNNY_RUN_FRAMES * 3)
#define BUNNY_RUN_R4 BUNNY_RUN_R0 + (BUNNY_RUN_FRAMES * 4)

#define BUNNY_STAND_R0 BUNNY_RUN_R0
#define BUNNY_STAND_R1 BUNNY_RUN_R1 
#define BUNNY_STAND_R2 BUNNY_RUN_R2 
#define BUNNY_STAND_R3 BUNNY_RUN_R3 
#define BUNNY_STAND_R4 BUNNY_RUN_R4 

#define BUNNY_SWIPE_FRAMES 5
#define BUNNY_SWIPE_R0 4575
#define BUNNY_SWIPE_R1 BUNNY_SWIPE_R0 + (BUNNY_SWIPE_FRAMES * 1)
#define BUNNY_SWIPE_R2 BUNNY_SWIPE_R0 + (BUNNY_SWIPE_FRAMES * 1)
#define BUNNY_SWIPE_R3 BUNNY_SWIPE_R0 + (BUNNY_SWIPE_FRAMES * 1)
#define BUNNY_SWIPE_R4 BUNNY_SWIPE_R0 + (BUNNY_SWIPE_FRAMES * 1)

#define BUNNY_DIE 4580
#define BUNNY_DEAD 4584

//////////////////////
//
//  EVIL GIRLNINJA
//
//////////////////////

#define GIRLNINJA_RUN_FRAMES 4
#define GIRLNINJA_RUN_R0 5162
#define GIRLNINJA_RUN_R1 GIRLNINJA_RUN_R0 + (GIRLNINJA_RUN_FRAMES * 1)
#define GIRLNINJA_RUN_R2 GIRLNINJA_RUN_R0 + (GIRLNINJA_RUN_FRAMES * 2)
#define GIRLNINJA_RUN_R3 GIRLNINJA_RUN_R0 + (GIRLNINJA_RUN_FRAMES * 3)
#define GIRLNINJA_RUN_R4 GIRLNINJA_RUN_R0 + (GIRLNINJA_RUN_FRAMES * 4)

#define GIRLNINJA_STAND_FRAMES 1
#define GIRLNINJA_STAND_R0 GIRLNINJA_RUN_R0
#define GIRLNINJA_STAND_R1 GIRLNINJA_RUN_R1
#define GIRLNINJA_STAND_R2 GIRLNINJA_RUN_R2
#define GIRLNINJA_STAND_R3 GIRLNINJA_RUN_R3
#define GIRLNINJA_STAND_R4 GIRLNINJA_RUN_R4

#define GIRLNINJA_CRAWL_FRAMES 1
#define GIRLNINJA_CRAWL_R0 5211
#define GIRLNINJA_CRAWL_R1 GIRLNINJA_CRAWL_R0 + (GIRLNINJA_CRAWL_FRAMES * 1)
#define GIRLNINJA_CRAWL_R2 GIRLNINJA_CRAWL_R0 + (GIRLNINJA_CRAWL_FRAMES * 2)
#define GIRLNINJA_CRAWL_R3 GIRLNINJA_CRAWL_R0 + (GIRLNINJA_CRAWL_FRAMES * 3)
#define GIRLNINJA_CRAWL_R4 GIRLNINJA_CRAWL_R0 + (GIRLNINJA_CRAWL_FRAMES * 4)

#define GIRLNINJA_THROW_FRAMES 3
#define GIRLNINJA_THROW_R0 5246
#define GIRLNINJA_THROW_R1 GIRLNINJA_THROW_R0 + (GIRLNINJA_THROW_FRAMES * 1)
#define GIRLNINJA_THROW_R2 GIRLNINJA_THROW_R0 + (GIRLNINJA_THROW_FRAMES * 2)

// don't have rotations for pain frames currently

#if 1
#define GIRLNINJA_PAIN_FRAMES 1
#define GIRLNINJA_PAIN_R0 5192
#define GIRLNINJA_PAIN_R1 GIRLNINJA_PAIN_R0
#define GIRLNINJA_PAIN_R2 GIRLNINJA_PAIN_R0
#define GIRLNINJA_PAIN_R3 GIRLNINJA_PAIN_R0
#define GIRLNINJA_PAIN_R4 GIRLNINJA_PAIN_R0
#endif

#define GIRLNINJA_JUMP_FRAMES 4
#define GIRLNINJA_JUMP_R0 5226
#define GIRLNINJA_JUMP_R1 GIRLNINJA_JUMP_R0 + (GIRLNINJA_JUMP_FRAMES * 1)
#define GIRLNINJA_JUMP_R2 GIRLNINJA_JUMP_R0 + (GIRLNINJA_JUMP_FRAMES * 2)
#define GIRLNINJA_JUMP_R3 GIRLNINJA_JUMP_R0 + (GIRLNINJA_JUMP_FRAMES * 3)
#define GIRLNINJA_JUMP_R4 GIRLNINJA_JUMP_R0 + (GIRLNINJA_JUMP_FRAMES * 4)

#define GIRLNINJA_FALL_R0 GIRLNINJA_JUMP_R0+2
#define GIRLNINJA_FALL_R1 GIRLNINJA_JUMP_R1+2
#define GIRLNINJA_FALL_R2 GIRLNINJA_JUMP_R2+2
#define GIRLNINJA_FALL_R3 GIRLNINJA_JUMP_R3+2
#define GIRLNINJA_FALL_R4 GIRLNINJA_JUMP_R4+2

#define GIRLNINJA_LAND_R0 GIRLNINJA_JUMP_R0+3
#define GIRLNINJA_LAND_R1 GIRLNINJA_JUMP_R1+3
#define GIRLNINJA_LAND_R2 GIRLNINJA_JUMP_R2+3
#define GIRLNINJA_LAND_R3 GIRLNINJA_JUMP_R3+3
#define GIRLNINJA_LAND_R4 GIRLNINJA_JUMP_R4+3

#define GIRLNINJA_KNEEL_R0 GIRLNINJA_CRAWL_R0
#define GIRLNINJA_KNEEL_R1 GIRLNINJA_CRAWL_R1
#define GIRLNINJA_KNEEL_R2 GIRLNINJA_CRAWL_R2
#define GIRLNINJA_KNEEL_R3 GIRLNINJA_CRAWL_R3
#define GIRLNINJA_KNEEL_R4 GIRLNINJA_CRAWL_R4

#define GIRLNINJA_FIRE_FRAMES 2
#define GIRLNINJA_FIRE_R0 5182
#define GIRLNINJA_FIRE_R1 GIRLNINJA_FIRE_R0 + (GIRLNINJA_FIRE_FRAMES * 1)
#define GIRLNINJA_FIRE_R2 GIRLNINJA_FIRE_R0 + (GIRLNINJA_FIRE_FRAMES * 2)
#define GIRLNINJA_FIRE_R3 GIRLNINJA_FIRE_R0 + (GIRLNINJA_FIRE_FRAMES * 3)
#define GIRLNINJA_FIRE_R4 GIRLNINJA_FIRE_R0 + (GIRLNINJA_FIRE_FRAMES * 4)

#define GIRLNINJA_STAB_FRAMES 1
#define GIRLNINJA_STAB_R0 5206
#define GIRLNINJA_STAB_R1 GIRLNINJA_STAB_R0 + (GIRLNINJA_STAB_FRAMES * 1)
#define GIRLNINJA_STAB_R2 GIRLNINJA_STAB_R0 + (GIRLNINJA_STAB_FRAMES * 2)
#define GIRLNINJA_STAB_R3 GIRLNINJA_STAB_R0 + (GIRLNINJA_STAB_FRAMES * 3)
#define GIRLNINJA_STAB_R4 GIRLNINJA_STAB_R0 + (GIRLNINJA_STAB_FRAMES * 4)

#define GIRLNINJA_DIE 5197
#define GIRLNINJA_DEAD GIRLNINJA_DIE+8

#define GIRLNINJA_SLICED 4227
#define GIRLNINJA_DEAD_SLICED GIRLNINJA_SLICED+9

//////////////////////
//
// ZILLA
//
//////////////////////

#define ZILLA_RUN_FRAMES 4
#define ZILLA_RUN_R0 5426
#define ZILLA_RUN_R1 ZILLA_RUN_R0 - (ZILLA_RUN_FRAMES * 1)
#define ZILLA_RUN_R2 ZILLA_RUN_R0 - (ZILLA_RUN_FRAMES * 2)
#define ZILLA_RUN_R3 ZILLA_RUN_R0 - (ZILLA_RUN_FRAMES * 3)
#define ZILLA_RUN_R4 ZILLA_RUN_R0 - (ZILLA_RUN_FRAMES * 4)

#define ZILLA_PAIN_FRAMES 1
#define ZILLA_PAIN_R0 5524
#define ZILLA_PAIN_R1 ZILLA_PAIN_R0 - (ZILLA_PAIN_FRAMES * 1)
#define ZILLA_PAIN_R2 ZILLA_PAIN_R0 - (ZILLA_PAIN_FRAMES * 2)
#define ZILLA_PAIN_R3 ZILLA_PAIN_R0 - (ZILLA_PAIN_FRAMES * 3)
#define ZILLA_PAIN_R4 ZILLA_PAIN_R0 - (ZILLA_PAIN_FRAMES * 4)

#define ZILLA_ROCKET_FRAMES 4
#define ZILLA_ROCKET_R0 5446
#define ZILLA_ROCKET_R1 ZILLA_ROCKET_R0 - (ZILLA_ROCKET_FRAMES * 1)
#define ZILLA_ROCKET_R2 ZILLA_ROCKET_R0 - (ZILLA_ROCKET_FRAMES * 2)
#define ZILLA_ROCKET_R3 ZILLA_ROCKET_R0 - (ZILLA_ROCKET_FRAMES * 3)
#define ZILLA_ROCKET_R4 ZILLA_ROCKET_R0 - (ZILLA_ROCKET_FRAMES * 4)

#define ZILLA_RAIL_FRAMES 4
#define ZILLA_RAIL_R0 5466
#define ZILLA_RAIL_R1 ZILLA_RAIL_R0 - (ZILLA_RAIL_FRAMES * 1)
#define ZILLA_RAIL_R2 ZILLA_RAIL_R0 - (ZILLA_RAIL_FRAMES * 2)
#define ZILLA_RAIL_R3 ZILLA_RAIL_R0 - (ZILLA_RAIL_FRAMES * 3)
#define ZILLA_RAIL_R4 ZILLA_RAIL_R0 - (ZILLA_RAIL_FRAMES * 4)

#define ZILLA_SHOOT_FRAMES 4
#define ZILLA_SHOOT_R0 5506
#define ZILLA_SHOOT_R1 ZILLA_SHOOT_R0 - (ZILLA_SHOOT_FRAMES * 1)
#define ZILLA_SHOOT_R2 ZILLA_SHOOT_R0 - (ZILLA_SHOOT_FRAMES * 2)
#define ZILLA_SHOOT_R3 ZILLA_SHOOT_R0 - (ZILLA_SHOOT_FRAMES * 3)
#define ZILLA_SHOOT_R4 ZILLA_SHOOT_R0 - (ZILLA_SHOOT_FRAMES * 4)

#define ZILLA_RECHARGE_FRAMES 4
#define ZILLA_RECHARGE_R0 5486
#define ZILLA_RECHARGE_R1 ZILLA_RECHARGE_R0 - (ZILLA_RECHARGE_FRAMES * 1)
#define ZILLA_RECHARGE_R2 ZILLA_RECHARGE_R0 - (ZILLA_RECHARGE_FRAMES * 2)
#define ZILLA_RECHARGE_R3 ZILLA_RECHARGE_R0 - (ZILLA_RECHARGE_FRAMES * 3)
#define ZILLA_RECHARGE_R4 ZILLA_RECHARGE_R0 - (ZILLA_RECHARGE_FRAMES * 4)

#define ZILLA_DIE 5510
#define ZILLA_DEAD 5518

////////////////////////////////////
#define TRASHCAN 2540

#define SCROLL 516
#define SCROLL_FIRE 524

#endif
