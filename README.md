# Prince of Arabia

Inspired by a timeless classic, PPOT presents 'Prince of Arabia'!
Escape the dungeons and free the princess!


This game is only compatible with an *FX* enabled Arduboy.

---

## Controls

<kbd>🅐</kbd>
<kbd>🅑</kbd>
<kbd>▲</kbd>
<kbd>▼</kbd>
<kbd>◄</kbd>
<kbd>►</kbd>

### Running

### Jumping
Press <kbd>🅐</kbd> to jump over obstacles.
For longer jumps, run and jump <kbd>🅐</kbd>+<kbd>◄</kbd>/<kbd>►</kbd>.

### Climbing

### Dropping
Drop and pull-up.

### Squatting
Ducking down.
Shuffling along.

### In game menu
Press <kbd>🅑</kbd> to select the in game menu. This allows you to...

## Objects

### Sword
Crouch down and pickup with <kbd>🅐</kbd> to collect the sword.
When an enemy appears, press <kbd>🅑</kbd> to unsheathe the sword and start fighting. It is not possible to bring-up the menu (or save the game!) during a fight.
During a fight, press <kbd>🅐</kbd> to sheath sword. It is not possible to jump while the sword is drawn.


### Potions
Crouch down and pickup with 'A' to drink. Some give life, but some may take life!

## Navigating the palace

### Floor switches
Open/ closing. To activate stand on a tile, or some weight must be applied. Switches may reset after a certain amount of time.

### Falling tiles
Step on (from above).
Can be triggered from below.

### Deadly spikes
Jump over these traps or move very carefully to avoid a spiky end!

### Leaps of faith


## Enemies

### Guards

### Skeletons

### Shadowy figures
Legend tells, that these forbidden corridors will reveal our darkest side.

## @clintonium-119 planned updates and fixes

### Fixes
- ~~Always start new games with 3 health/max health~~
  - ~~If a game was saved with more health available, this was carrying forward on new games~~
- ~~Always start new games with no sword~~
  - ~~If a game was saved with sword available, this was carrying forward on new games~~


### `USE_CLASSIC_CONTROLS` flag
- ~~A + B to open menu~~
- ~~Down to sheathe sword~~
- ~~A or UP to block~~
- ~~B to pick up items~~
- ~~Require B to grab ledges while jumping, and only hang when dropping levels if B is held as well~~
  - TBD: Done, though the kid still grabs on for a frame before dropping.
  - Other issue: the counter before the kid drops never reaches zero, so he can currently hang forever if the button is held
  - This is because, at the start of the jump, the distance determines whether to use a `GrabLedge` jump sequence.
  - To disable, I imagine I'd need to pull the hang frame from the jump sequence if the button is not pressed by the time the frame arrives
### Movement Tweaks
- ~~No longer automatically grabbing ledges while jumping - need B button pressed~~
- Can always grab and hang on a 3 tile standing jump
  - This works when there's a wall, but not if there's a safe landing, such as the first 3-tile jump opportunity in level 2
- ~~Can trigger tile by hanging~~
- Doors close slowly rather than abruptly, if possible, allowing to crouch hop through if there's still space
- Careful steps will not walk off the edge the first time an edge is reached
  - Also, if possible, when close to edge, but not quite there, last careful step will only take kid to edge

### Combat Tweaks
- Different AI patterns for different enemies, following original source code pattern
- Determine if more knockback is needed for strikes
- Investigate blocking -- seems hard to tell if it's successful, and harder to pull off than in original

### Misc Tweaks (if memory allows)
- Add a 'fat' enemy - he's kind of a classic staple, with a unique fighting style
- Add Jaffar as final fighter (haven't checked if this is implemented or not)
- ~~Spikes should trigger (without harm) when jumping over them~~
- Require pushing up to exit level
- Reduce time for tiles falling when hitting from below
- Ensure 1 minute time penalty is in play for dying and restarting level
- Additional sounds
  - tiles rattling
  - tiles falling to floor
  - Different sound for player vs enemy hits to make it clearer how the battle is going - can be hard to tell on the small display who hit who
  - blocking sound

---

## Credits

Concept: Jordan Mechner.
Development: @filmote, @MrBlinky (/Mr.Blinky), @ace-dent (/acedent)
Graphics: /clintonium-119, @vampirics
Music: @ajsaucier (/raspberrybrain)

