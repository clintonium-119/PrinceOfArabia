#pragma once

/**** FX data header generated by fxdata-build.py tool version 1.13 ****/

using uint24_t = __uint24;

// Initialize FX hardware using  FX::begin(FX_DATA_PAGE); in the setup() function.

constexpr uint16_t FX_DATA_PAGE  = 0xf4fc;
constexpr uint24_t FX_DATA_BYTES = 717762;

constexpr uint16_t FX_SAVE_PAGE  = 0xfff0;
constexpr uint24_t FX_SAVE_BYTES = 2;

namespace Levels
{
  constexpr uint24_t Invaders_Items = 0x000000;
  constexpr uint24_t Level1_FG = 0x000189;
  constexpr uint24_t Level1_BG = 0x0004B3;
  constexpr uint24_t level1_Data = 0x0007DD;
  constexpr uint24_t Level1_Items = 0x0007FA;
  constexpr uint24_t Level2_FG = 0x00095B;
  constexpr uint24_t Level2_BG = 0x000F73;
  constexpr uint24_t level2_Data = 0x00158B;
  constexpr uint24_t Level2_Items = 0x0015C6;
  constexpr uint24_t Level3_FG = 0x0016C7;
  constexpr uint24_t Level3_BG = 0x001C0D;
  constexpr uint24_t level3_Data = 0x002153;
  constexpr uint24_t Level3_Items = 0x002166;
  constexpr uint24_t Level4_FG = 0x002217;
  constexpr uint24_t Level4_BG = 0x00264F;
  constexpr uint24_t level4_Data = 0x002A87;
  constexpr uint24_t Level4_Items = 0x002AC2;
  constexpr uint24_t Level5_FG = 0x002C23;
  constexpr uint24_t Level5_BG = 0x003169;
  constexpr uint24_t level5_Data = 0x0036AF;
  constexpr uint24_t Level5_Items = 0x0036E0;
  constexpr uint24_t Level6_FG = 0x003811;
  constexpr uint24_t Level6_BG = 0x003A87;
  constexpr uint24_t level6_Data = 0x003CFD;
  constexpr uint24_t Level6_Items = 0x003D1A;
  constexpr uint24_t Level7_FG = 0x003D7B;
  constexpr uint24_t Level7_BG = 0x0041B3;
  constexpr uint24_t level7_Data = 0x0045EB;
  constexpr uint24_t Level7_Items = 0x004612;
  constexpr uint24_t Level8_FG = 0x00479B;
  constexpr uint24_t Level8_BG = 0x004CC3;
  constexpr uint24_t level8_Data = 0x0051EB;
  constexpr uint24_t Level8_Items = 0x00521C;
  constexpr uint24_t Level9_FG = 0x00535D;
  constexpr uint24_t Level9_BG = 0x00571D;
  constexpr uint24_t level9_Data = 0x005ADD;
  constexpr uint24_t Level9_Items = 0x005B0E;
  constexpr uint24_t Level10_FG = 0x005C77;
  constexpr uint24_t Level10_BG = 0x005F47;
  constexpr uint24_t level10_Data = 0x006217;
  constexpr uint24_t Level10_Items = 0x006248;
  constexpr uint24_t Level11_FG = 0x0063A9;
  constexpr uint24_t Level11_BG = 0x0067E1;
  constexpr uint24_t level11_Data = 0x006C19;
  constexpr uint24_t Level11_Items = 0x006C40;
  constexpr uint24_t Level12_FG = 0x006DC1;
  constexpr uint24_t Level12_BG = 0x007451;
  constexpr uint24_t level12_Data = 0x007AE1;
  constexpr uint24_t Level12_Items = 0x007AFE;
  constexpr uint24_t Level13_FG = 0x007C47;
  constexpr uint24_t Level13_BG = 0x007CFB;
  constexpr uint24_t level13_Data = 0x007DAF;
  constexpr uint24_t Level13_Items = 0x007DB8;
  constexpr uint24_t Level14_StandingJumps_FG = 0x007E09;
  constexpr uint24_t Level14_StandingJumps_BG = 0x007EF9;
  constexpr uint24_t Level14_StandingJumps_Data = 0x007FE9;
  constexpr uint24_t Level14_StandingJumps_Items = 0x007FF2;
  constexpr uint24_t Level15_RunningJumps_FG = 0x007FF3;
  constexpr uint24_t Level15_RunningJumps_BG = 0x0081B5;
  constexpr uint24_t Level15_RunningJumps_Data = 0x008377;
  constexpr uint24_t Level15_RunningJumps_Items = 0x008380;
  constexpr uint24_t Level16_RunningJumps_FG = 0x008381;
  constexpr uint24_t Level16_RunningJumps_BG = 0x008543;
  constexpr uint24_t Level16_RunningJumps_Data = 0x008705;
  constexpr uint24_t Level16_RunningJumps_Items = 0x00870E;
  constexpr uint24_t Level17_RunningJumps_FG = 0x00870F;
  constexpr uint24_t Level17_RunningJumps_BG = 0x0088D1;
  constexpr uint24_t Level17_RunningJumps_Data = 0x008A93;
  constexpr uint24_t Level17_RunningJumps_Items = 0x008A9C;
  constexpr uint24_t Level18_RunningJumps_FG = 0x008A9D;
  constexpr uint24_t Level18_RunningJumps_BG = 0x008C5F;
  constexpr uint24_t Level18_RunningJumps_Data = 0x008E21;
  constexpr uint24_t Level18_RunningJumps_Items = 0x008E2A;
  constexpr uint24_t Level19_RunningJumps_FG = 0x008E2B;
  constexpr uint24_t Level19_RunningJumps_BG = 0x008FED;
  constexpr uint24_t Level19_RunningJumps_Data = 0x0091AF;
  constexpr uint24_t Level19_RunningJumps_Items = 0x0091B8;
  constexpr uint24_t Level20_RunningJumps_FG = 0x0091B9;
  constexpr uint24_t Level20_RunningJumps_BG = 0x00942F;
  constexpr uint24_t Level20_RunningJumps_Data = 0x0096A5;
  constexpr uint24_t Level20_RunningJumps_Items = 0x0096AE;
  constexpr uint24_t Level21_RunningJumps_FG = 0x0096AF;
  constexpr uint24_t Level21_RunningJumps_BG = 0x009925;
  constexpr uint24_t Level21_RunningJumps_Data = 0x009B9B;
  constexpr uint24_t Level21_RunningJumps_Items = 0x009BA4;
  constexpr uint24_t Level22_RunningJumps_FG = 0x009BA5;
  constexpr uint24_t Level22_RunningJumps_BG = 0x009E1B;
  constexpr uint24_t Level22_RunningJumps_Data = 0x00A091;
  constexpr uint24_t Level22_RunningJumps_Items = 0x00A09A;
  constexpr uint24_t Level23_RunningJumps_FG = 0x00A09B;
  constexpr uint24_t Level23_RunningJumps_BG = 0x00A311;
  constexpr uint24_t Level23_RunningJumps_Data = 0x00A587;
  constexpr uint24_t Level23_RunningJumps_Items = 0x00A590;
  constexpr uint24_t Level24_RunningJumps_FG = 0x00A591;
  constexpr uint24_t Level24_RunningJumps_BG = 0x00A807;
  constexpr uint24_t Level24_RunningJumps_Data = 0x00AA7D;
  constexpr uint24_t Level24_RunningJumps_Items = 0x00AA86;
  constexpr uint24_t Level25_RunningJumps_FG = 0x00AA87;
  constexpr uint24_t Level25_RunningJumps_BG = 0x00ACFD;
  constexpr uint24_t Level25_RunningJumps_Data = 0x00AF73;
  constexpr uint24_t Level25_RunningJumps_Items = 0x00AF7C;
  constexpr uint24_t Level26_RunningJumps_FG = 0x00AF7D;
  constexpr uint24_t Level26_RunningJumps_BG = 0x00B1F3;
  constexpr uint24_t Level26_RunningJumps_Data = 0x00B469;
  constexpr uint24_t Level26_RunningJumps_Items = 0x00B472;
  constexpr uint24_t level_FG = 0x00B473;
  constexpr uint24_t Level_BG = 0x00B4C4;
  constexpr uint24_t level_Data = 0x00B515;
  constexpr uint24_t Level_Items = 0x00B566;
}

namespace Sounds
{
  constexpr uint24_t Dead = 0x00B5B7;
  constexpr uint24_t Grab1 = 0x00B5D5;
  constexpr uint24_t Grab2 = 0x00B5FF;
  constexpr uint24_t Grab3 = 0x00B629;
  constexpr uint24_t Grab4 = 0x00B663;
  constexpr uint24_t Seque = 0x00B6B9;
  constexpr uint24_t Tada = 0x00B733;
  constexpr uint24_t Theme = 0x00B751;
  constexpr uint24_t Triumph = 0x00B91F;
  constexpr uint24_t Victory = 0x00B93D;
  constexpr uint24_t Ending = 0x00B9AF;
  constexpr uint24_t OutOfTime = 0x00BC2D;
  constexpr uint24_t GateGoingDown = 0x00BC73;
  constexpr uint24_t GateGoingUp = 0x00BCB1;
  constexpr uint24_t ChopChop = 0x00BCEF;
  constexpr uint24_t Thump = 0x00BD01;
  constexpr uint24_t Strike = 0x00BD13;
  constexpr uint24_t Invader_Wave_Start = 0x00BD21;
  constexpr uint24_t Invader_Wave_Success = 0x00BD4F;
  constexpr uint24_t Invader_End_of_Game = 0x00BDF5;
  constexpr uint24_t Invader_Player_Fires_Bullet = 0x00BE3B;
  constexpr uint24_t Invader_Enemy_Fires_Bullet = 0x00BE49;
  constexpr uint24_t Invader_Player_Explosion = 0x00BE57;
  constexpr uint24_t Invader_Enemy_Explosion = 0x00BEA1;
  constexpr uint24_t Invader_Hit_Barrier = 0x00BEEB;
}

namespace Images
{
  constexpr uint24_t PPOT = 0x00BEF5;
  constexpr uint16_t PPOT_WIDTH  = 65;
  constexpr uint16_t PPOTHEIGHT  = 31;
  constexpr uint8_t  PPOT_FRAMES = 4;

  constexpr uint24_t Title_PoP = 0x00C309;
  constexpr uint16_t Title_PoP_width  = 128;
  constexpr uint16_t Title_PoP_height = 33;

  constexpr uint24_t Title_Main_NoHigh = 0x00C80D;
  constexpr uint16_t Title_Main_NoHigh_width  = 128;
  constexpr uint16_t Title_Main_NoHigh_height = 88;

  constexpr uint24_t Title_Main_WithHigh = 0x00CD91;
  constexpr uint16_t Title_Main_WithHigh_width  = 128;
  constexpr uint16_t Title_Main_WithHigh_height = 88;

  constexpr uint24_t Title_Cursor = 0x00D315;
  constexpr uint16_t Title_Cursor_width  = 5;
  constexpr uint16_t Title_Cursor_height = 5;

  constexpr uint24_t Title_Credits = 0x00D31E;
  constexpr uint16_t Title_Credits_width  = 73;
  constexpr uint16_t Title_Credits_height = 136;

  constexpr uint24_t TimeRemaining = 0x00D7FB;
  constexpr uint16_t TimeRemainingWidth  = 81;
  constexpr uint16_t TimeRemainingHeight = 15;

  constexpr uint24_t LevelNumber = 0x00D943;
  constexpr uint16_t LevelNumberWidth  = 81;
  constexpr uint16_t LevelNumberHeight = 15;

  constexpr uint24_t GameOver = 0x00DA8B;
  constexpr uint16_t GameOverWidth  = 49;
  constexpr uint16_t GameOverHeight = 15;

  constexpr uint24_t PressA = 0x00DB53;
  constexpr uint16_t PressAWidth  = 79;
  constexpr uint16_t PressAHeight = 15;

  constexpr uint24_t TimeOut = 0x00DC93;
  constexpr uint16_t TimeOutWidth  = 86;
  constexpr uint16_t TimeOutHeight = 114;

  constexpr uint24_t IntroGame_1A = 0x00E1A1;
  constexpr uint16_t IntroGame_1A_width  = 118;
  constexpr uint16_t IntroGame_1A_height = 96;

  constexpr uint24_t IntroGame_1B = 0x00E72D;
  constexpr uint16_t IntroGame_1B_width  = 123;
  constexpr uint16_t IntroGame_1B_height = 96;

  constexpr uint24_t IntroGame_9 = 0x00ECF5;
  constexpr uint16_t IntroGame_9_width  = 123;
  constexpr uint16_t IntroGame_9_height = 160;

  constexpr uint24_t Chambers_BG = 0x00F695;
  constexpr uint16_t Chambers_BG_width  = 128;
  constexpr uint16_t Chambers_BG_height = 64;

  constexpr uint24_t Chambers_BG_01 = 0x00FA99;
  constexpr uint16_t Chambers_BG_01_width  = 128;
  constexpr uint16_t Chambers_BG_01_height = 55;

  constexpr uint24_t Chambers_BG_02 = 0x00FE1D;
  constexpr uint16_t Chambers_BG_02_width  = 128;
  constexpr uint16_t Chambers_BG_02_height = 9;

  constexpr uint24_t Chambers_FG = 0x00FF21;
  constexpr uint16_t Chambers_FG_width  = 128;
  constexpr uint16_t Chambers_FG_height = 64;

  constexpr uint24_t Credits_BG = 0x010725;
  constexpr uint16_t Credits_BG_width  = 128;
  constexpr uint16_t Credits_BG_height = 9;

  constexpr uint24_t Eeek = 0x010829;
  constexpr uint16_t EeekWidth  = 43;
  constexpr uint16_t EeekHeight = 19;

  constexpr uint24_t LevelRect = 0x01092F;
  constexpr uint16_t LevelRectWidth  = 16;
  constexpr uint16_t LevelRectHeight = 8;

  constexpr uint24_t Mouse = 0x010943;
  constexpr uint16_t MouseWidth  = 16;
  constexpr uint16_t MouseHeight = 16;
  constexpr uint8_t  MouseFrames = 3;

  constexpr uint24_t HourGlasses = 0x010A07;
  constexpr uint16_t HourGlassesWidth  = 19;
  constexpr uint16_t HourGlassesHeight = 23;
  constexpr uint8_t  HourGlassesFrames = 6;

  constexpr uint24_t Menu = 0x010CB7;
  constexpr uint16_t MenuWidth  = 42;
  constexpr uint16_t MenuHeight = 64;
  constexpr uint8_t  MenuFrames = 3;

  constexpr uint24_t Sword_Cursor = 0x0110AB;
  constexpr uint16_t Sword_Cursor_width  = 8;
  constexpr uint16_t Sword_Cursor_height = 10;

  constexpr uint24_t HUD_Backgrounds = 0x0110BF;
  constexpr uint16_t HUD_Backgrounds_width  = 8;
  constexpr uint16_t HUD_Backgrounds_height = 64;
  constexpr uint8_t  HUD_Backgrounds_frames = 3;

  constexpr uint24_t Numbers_Upright = 0x011183;
  constexpr uint16_t Numbers_Upright_width  = 7;
  constexpr uint16_t Numbers_Upright_height = 5;
  constexpr uint8_t  Numbers_Upright_frames = 60;

  constexpr uint24_t Numbers = 0x01132B;
  constexpr uint16_t NumbersWidth  = 11;
  constexpr uint16_t NumbersHeight = 7;
  constexpr uint8_t  NumbersFrames = 60;

  constexpr uint24_t Numbers_Large = 0x0115C3;
  constexpr uint16_t Numbers_Large_width  = 22;
  constexpr uint16_t Numbers_Large_height = 14;
  constexpr uint8_t  Numbers_Large_frames = 60;

  constexpr uint24_t Numbers_Small = 0x012017;
  constexpr uint16_t Numbers_Small_width  = 5;
  constexpr uint16_t Numbers_Small_height = 7;
  constexpr uint8_t  Numbers_Small_frames = 100;

  constexpr uint24_t Numbers_Divider = 0x01220F;
  constexpr uint16_t Numbers_Divider_width  = 4;
  constexpr uint16_t Numbers_Divider_height = 8;

  constexpr uint24_t Healths = 0x012217;
  constexpr uint16_t HealthsWidth  = 5;
  constexpr uint16_t HealthsHeight = 3;
  constexpr uint8_t  HealthsFrames = 2;

  constexpr uint24_t Sword_HUD = 0x012225;
  constexpr uint16_t Sword_HUD_width  = 5;
  constexpr uint16_t Sword_HUD_height = 5;

  constexpr uint24_t Potion_Float_HUD = 0x01222E;
  constexpr uint16_t Potion_Float_HUD_width  = 5;
  constexpr uint16_t Potion_Float_HUD_height = 5;

  constexpr uint24_t HighScore = 0x012237;
  constexpr uint16_t HighScoreWidth  = 52;
  constexpr uint16_t HighScoreHeight = 5;

  constexpr uint24_t Sword = 0x01226F;
  constexpr uint16_t SwordWidth  = 14;
  constexpr uint16_t SwordHeight = 5;

  constexpr uint24_t Skeleton = 0x01228F;
  constexpr uint16_t SkeletonWidth  = 15;
  constexpr uint16_t SkeletonHeight = 12;

  constexpr uint24_t Gates = 0x0122CF;
  constexpr uint16_t GatesWidth  = 9;
  constexpr uint16_t GatesHeight = 28;
  constexpr uint8_t  GatesFrames = 10;

  constexpr uint24_t Blades = 0x0125A3;
  constexpr uint16_t BladesWidth  = 9;
  constexpr uint16_t BladesHeight = 28;
  constexpr uint8_t  BladesFrames = 6;

  constexpr uint24_t ExitDoors = 0x012757;
  constexpr uint16_t ExitDoorsWidth  = 25;
  constexpr uint16_t ExitDoorsHeight = 33;
  constexpr uint8_t  ExitDoorsFrames = 13;

  constexpr uint24_t Potions_Small = 0x012DB4;
  constexpr uint16_t Potions_Small_width  = 6;
  constexpr uint16_t Potions_Small_height = 15;
  constexpr uint8_t  Potions_Small_frames = 2;

  constexpr uint24_t Potions_Large = 0x012DE8;
  constexpr uint16_t Potions_Large_width  = 6;
  constexpr uint16_t Potions_Large_height = 15;
  constexpr uint8_t  Potions_Large_frames = 2;

  constexpr uint24_t Potions_Poison = 0x012E1C;
  constexpr uint16_t Potions_Poison_width  = 6;
  constexpr uint16_t Potions_Poison_height = 15;
  constexpr uint8_t  Potions_Poison_frames = 6;

  constexpr uint24_t Potions_Float = 0x012EB0;
  constexpr uint16_t Potions_Float_width  = 6;
  constexpr uint16_t Potions_Float_height = 15;
  constexpr uint8_t  Potions_Float_frames = 7;

  constexpr uint24_t DecorativeDoor = 0x012F5C;
  constexpr uint16_t DecorativeDoorWidth  = 23;
  constexpr uint16_t DecorativeDoorHeight = 40;

  constexpr uint24_t CollapsedFloor = 0x012FD3;
  constexpr uint16_t CollapsedFloorWidth  = 21;
  constexpr uint16_t CollapsedFloorHeight = 13;

  constexpr uint24_t CollapsingFloors = 0x01302B;
  constexpr uint16_t CollapsingFloorsWidth  = 21;
  constexpr uint16_t CollapsingFloorsHeight = 31;
  constexpr uint8_t  CollapsingFloorsFrames = 4;

  constexpr uint24_t FloorButtons_0and1 = 0x0132CF;
  constexpr uint16_t FloorButtons_0and1_width  = 21;
  constexpr uint16_t FloorButtons_0and1_height = 32;
  constexpr uint8_t  FloorButtons_0and1_frames = 4;

  constexpr uint24_t FloorButtons_2 = 0x013573;
  constexpr uint16_t FloorButtons_2_width  = 12;
  constexpr uint16_t FloorButtons_2_height = 31;
  constexpr uint8_t  FloorButtons_2_frames = 2;

  constexpr uint24_t Torches = 0x013637;
  constexpr uint16_t TorchesWidth  = 3;
  constexpr uint16_t TorchesHeight = 11;
  constexpr uint8_t  TorchesFrames = 5;

  constexpr uint24_t Mirrors = 0x013677;
  constexpr uint16_t MirrorsWidth  = 12;
  constexpr uint16_t MirrorsHeight = 31;
  constexpr uint8_t  MirrorsFrames = 2;

  constexpr uint24_t Spikes_FG_Full = 0x0136DB;
  constexpr uint16_t Spikes_FG_Full_width  = 19;
  constexpr uint16_t Spikes_FG_Full_height = 18;
  constexpr uint8_t  Spikes_FG_Full_frames = 5;

  constexpr uint24_t Spikes_BG_Full = 0x013919;
  constexpr uint16_t Spikes_BG_Full_width  = 19;
  constexpr uint16_t Spikes_BG_Full_height = 18;
  constexpr uint8_t  Spikes_BG_Full_frames = 5;

  constexpr uint24_t Spikes_FG_Half = 0x013B57;
  constexpr uint16_t Spikes_FG_Half_width  = 11;
  constexpr uint16_t Spikes_FG_Half_height = 18;
  constexpr uint8_t  Spikes_FG_Half_frames = 5;

  constexpr uint24_t Spikes_BG_Half = 0x013CA5;
  constexpr uint16_t Spikes_BG_Half_width  = 11;
  constexpr uint16_t Spikes_BG_Half_height = 18;
  constexpr uint8_t  Spikes_BG_Half_frames = 5;

  constexpr uint24_t Flashes = 0x013DF3;
  constexpr uint16_t FlashesWidth  = 22;
  constexpr uint16_t FlashesHeight = 20;
  constexpr uint8_t  FlashesFrames = 4;

  constexpr uint24_t Tiles_Dungeon = 0x014007;
  constexpr uint16_t Tiles_Dungeon_width  = 12;
  constexpr uint16_t Tiles_Dungeon_height = 31;
  constexpr uint8_t  Tiles_Dungeon_frames = 100;

  constexpr uint24_t Tile_Dungeon_97 = 0x01658B;
  constexpr uint16_t Tile_Dungeon_97_width  = 21;
  constexpr uint16_t Tile_Dungeon_97_height = 31;

  constexpr uint24_t Tile_Dungeon_98 = 0x016637;
  constexpr uint16_t Tile_Dungeon_98_width  = 12;
  constexpr uint16_t Tile_Dungeon_98_height = 31;

  constexpr uint24_t Tiles_Dungeon_Torch = 0x01669B;
  constexpr uint16_t Tiles_Dungeon_Torch_width  = 12;
  constexpr uint16_t Tiles_Dungeon_Torch_height = 31;
  constexpr uint8_t  Tiles_Dungeon_Torch_frames = 60;

  constexpr uint24_t Princess = 0x017D1F;
  constexpr uint16_t PrincessWidth  = 32;
  constexpr uint16_t PrincessHeight = 32;
  constexpr uint8_t  PrincessFrames = 40;

  constexpr uint24_t Princess_Bounce = 0x01A523;
  constexpr uint16_t Princess_Bounce_width  = 48;
  constexpr uint16_t Princess_Bounce_height = 32;
  constexpr uint8_t  Princess_Bounce_frames = 20;

  constexpr uint24_t Hearts = 0x01C327;
  constexpr uint16_t HeartsWidth  = 7;
  constexpr uint16_t HeartsHeight = 6;
  constexpr uint8_t  HeartsFrames = 4;

  constexpr uint24_t Zaffar = 0x01C347;
  constexpr uint16_t ZaffarWidth  = 32;
  constexpr uint16_t ZaffarHeight = 32;
  constexpr uint8_t  ZaffarFrames = 30;

  constexpr uint24_t Prince_Left = 0x01E14B;
  constexpr uint16_t Prince_Left_width  = 36;
  constexpr uint16_t Prince_Left_height = 36;
  constexpr uint8_t  Prince_Left_frames = 225;

  constexpr uint24_t Prince_Right = 0x031DB7;
  constexpr uint16_t Prince_Right_width  = 36;
  constexpr uint16_t Prince_Right_height = 36;
  constexpr uint8_t  Prince_Right_frames = 225;

  constexpr uint24_t Mirror_Right = 0x045A23;
  constexpr uint16_t Mirror_Right_width  = 36;
  constexpr uint16_t Mirror_Right_height = 36;
  constexpr uint8_t  Mirror_Right_frames = 225;

  constexpr uint24_t Mirror_Left = 0x05968F;
  constexpr uint16_t Mirror_Left_width  = 36;
  constexpr uint16_t Mirror_Left_height = 36;
  constexpr uint8_t  Mirror_Left_frames = 225;

  constexpr uint24_t Enemy_Right = 0x06D2FB;
  constexpr uint16_t Enemy_Right_width  = 36;
  constexpr uint16_t Enemy_Right_height = 36;
  constexpr uint8_t  Enemy_Right_frames = 225;

  constexpr uint24_t Enemy_Left = 0x080F67;
  constexpr uint16_t Enemy_Left_width  = 36;
  constexpr uint16_t Enemy_Left_height = 36;
  constexpr uint8_t  Enemy_Left_frames = 225;

  constexpr uint24_t Invaders = 0x094BD3;
  constexpr uint16_t InvadersWidth  = 25;
  constexpr uint16_t InvadersHeight = 23;
  constexpr uint8_t  InvadersFrames = 18;

  constexpr uint24_t Barriers = 0x095663;
  constexpr uint16_t BarriersWidth  = 4;
  constexpr uint16_t BarriersHeight = 2;
  constexpr uint8_t  BarriersFrames = 16;

  constexpr uint24_t Barrier = 0x0956E7;
  constexpr uint16_t BarrierWidth  = 16;
  constexpr uint16_t BarrierHeight = 4;

  constexpr uint24_t Player = 0x0956FB;
  constexpr uint16_t PlayerWidth  = 25;
  constexpr uint16_t PlayerHeight = 25;
  constexpr uint8_t  PlayerFrames = 5;

  constexpr uint24_t Bullet = 0x095AE7;
  constexpr uint16_t BulletWidth  = 1;
  constexpr uint16_t BulletHeight = 3;

  constexpr uint24_t HUD_Spaceship = 0x095AEC;
  constexpr uint16_t HUD_Spaceship_width  = 4;
  constexpr uint16_t HUD_Spaceship_height = 5;

  constexpr uint24_t Levels = 0x095AF4;
  constexpr uint16_t LevelsWidth  = 57;
  constexpr uint16_t LevelsHeight = 13;
  constexpr uint8_t  LevelsFrames = 4;

}

namespace Constants
{
  constexpr uint24_t StanceToImageXRefFX = 0x095E88;
  constexpr uint24_t Stance_XYOffsetsFX = 0x09615E;
  constexpr uint24_t VertAdjustments = 0x096708;
  constexpr uint24_t Prince_ImageDetails = 0x09679E;
}

constexpr uint24_t splashScreen_Frame = 0x0969E7;
constexpr uint24_t Title_Intro_Frame_NoHigh = 0x096A0B;
constexpr uint24_t Title_Intro_Last_Frame_NoHigh = 0x096E8B;
constexpr uint24_t Title_Intro_Frame_WithHigh = 0x096E9D;
constexpr uint24_t Title_Intro_Last_Frame_WithHigh = 0x09731D;
constexpr uint24_t Title_Main_Frame_NoHigh = 0x09732F;
constexpr uint24_t Title_Main_Last_Frame_NoFrame = 0x0974BB;
constexpr uint24_t Title_Main_Frame_WithHigh = 0x0974CD;
constexpr uint24_t Title_Main_Last_Frame_WithHigh = 0x097659;
constexpr uint24_t Title_Main_Game_Frame_NoHigh = 0x09766B;
constexpr uint24_t Title_Main_Game_Frame_WithHigh = 0x097686;
constexpr uint24_t Title_Main_Credits_Frame_NoHigh = 0x0976A1;
constexpr uint24_t Title_Main_Credits_Frame_WithHigh = 0x0976BC;
constexpr uint24_t Title_Main_High_Frame_WithHigh = 0x0976D7;
constexpr uint24_t Title_Credits_Frame = 0x0976F2;
constexpr uint24_t Title_TimeOut_Frame = 0x09A869;
constexpr uint24_t Title_High_Frame = 0x09D4EB;
constexpr uint24_t Title_IntroGame_1A_Frame = 0x09D572;
constexpr uint24_t Title_CutScene_1_Frame = 0x09DB48;
constexpr uint24_t Title_IntroGame_1B_Frame = 0x0A1055;
constexpr uint24_t Title_CutScene_2_Frame = 0x0A162B;
constexpr uint24_t Title_CutScene_3_Frame = 0x0A2A6B;
constexpr uint24_t Title_CutScene_4_Frame = 0x0A3EAB;
constexpr uint24_t Title_CutScene_5_Frame = 0x0A48CB;
constexpr uint24_t Title_CutScene_6_Frame = 0x0A5E4F;
constexpr uint24_t Title_CutScene_7_Frame = 0x0A8918;
constexpr uint24_t Title_CutScene_End_Frame = 0x0AD106;
constexpr uint24_t Title_IntroGame_End_Frame = 0x0AEB76;
