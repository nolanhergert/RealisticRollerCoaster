# A Realistic Roller Coaster!

Wiki with lots of notes: https://github.com/nolanhergert/realistic-roller-coaster/wiki


## Software Things
  * Turn off power after motion with no bumps or changes for ... 10 seconds? Can tweak, don't need physical switch I think. Pushbutton turns it back on
  * Can make music by compressing normal STEP toggles to arbitrary frequencies (maybe two freqs at once?) and changing M0/M1 to slow down frequency if needed.
  * Control stepper motor current from microcontroller. Should scale to gravity direction, but might need to detect skips or something and adjust.
  
## Track bump scripts functions
  * Save to memory slot, restore from memory
  * Go set speed until top of hill, then halt for a little? Various things to program
