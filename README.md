# A Realistic Roller Coaster!
The invention is a cross between a Hot Wheels style track and a scale model of a roller coaster. Why care?
  * This demo looks cool!
  * [![3D Printed Powered Roller Coaster](https://img.youtube.com/vi/jkkf6wcAqkc/0.jpg)](https://youtu.be/jkkf6wcAqkc?t=412).
    *  It's cool because it's scaling gravity too, unlike a hot wheels car or using a "push and go" method that ignores the orientation of the car relative to gravity.
  * Visualize / feel / hear the sound of / play with a "real" roller coaster in real life. [Hands Feel Things!](http://worrydream.com/ABriefRantOnTheFutureOfInteractionDesign/)
    * Hard to emulate with a computer game, of which there are *many* for roller coaster design
  * Play with visualizing g-forces while held onto a track (not free floating like a plane). Maybe characters have hair / other things to show it?
  * Discover interesting roller coaster formations quickly.
  * Maybe uncover why triangles are the strongest shape! https://youtu.be/Ofol8YG_uz8

## Where I'm At
  * Concluded on using magnets and embedded wire as traction method and course following. Made prototypes with cheap iron wire taped onto Hot Wheels track. 
    * The supplier below was able to overmold track onto some flexible metal tape, which is easier to use and manufacture. Want to play with it to see how flexible it is.
    * I might need to increase traction, especially if there are more cars. Planning on using rubbery tires or rubber "treads" and gluing/taping rough sandpaper to track if needed, can be in isolated spots. Surprised that suppliers solution works so well, it must be really light!
  * Designing an easy-to-build scaffolding for mounting track
    * Trying to go cheap for poles. 12mm boba straws or smaller might work well
    * Foundation is currently LEGO base plates. Cheap, able to be packed very flat and allow many unique strong mounting points as long as there's not too much diagonal upward force. If you need more strength in a spot, just make the mounting blocks bigger.
      * Sort of similar design is the CDX Blocks roller coaster system. An example of what they can do is here: https://twitter.com/coaster_nation/status/1133577981669117952?lang=he
    * Designed a ball joint coupling between boba straws and LEGO base plates that allow rotation of pole while staying solidly fixed to the base plate. Have more improvements in mind (use 2X2 brick for easier alignment), but have a 3D printed prototype on hand. Current design I think is impossible to injection mold, but pretty easy to 3D print.
    * ![straw_baseplate_coupling](https://github.com/nolanhergert/realistic-roller-coaster/assets/377502/ebc0e187-9980-4845-8b3c-e45043ca668d)
    * Designed coupling between Hot Wheels track and boba straws, also 3D printed.
  * Designed a compact "car" PCB that:
    * Is approximately the width of a Hot Wheels car and is 1/3 the length. Allows for chaining cars like a roller coaster, which has unique visual effects not able to be seen with one car and allows better traction through corkscrews.
    * Uses 2 or 4 8mm micro stepper motors for precise strong slow motion. Not sure how many I need yet
      * Unfortunately one dollar in quantity?! but 20 cents on occasional closeout.
      * Mechanical stability, etc is untested, but current design is similar to this:
![image](https://github.com/nolanhergert/realistic-roller-coaster/assets/377502/fa3c49d4-e380-4ff9-9fed-140593c863a0), from https://youtu.be/l_EwxWTXwfc?si=Ew6i_0cxCUXHYGoc&t=148
      * Need to get a source for cheap but good axles and gear that fits onto it. Have metal ones now that work though. Planning on asking supplier
      * It will fit a LEGO person to scale on it too!
      * Uses an on board accelerometer to respond appropriately to the track angles
      * Uses lithium ion capacitor that should power the car for >3 minutes while charging in <15s and lasting for 50,000 charging cycles
      * Allows for non-touch automatic charging of the device when it returns to the beginning.
      * BOM: $<10

![image](https://github.com/nolanhergert/realistic-roller-coaster/assets/377502/605ad466-fdf5-4c36-be92-3e8b96d1d16a)

  * Designed "charging" PCB that:
    * Mounts to underside of Hot Wheels track
    * Accepts a USB C charger, plan on leveraging a family's existing laptop or phone charger. Will handle charging current negotation in firmware.
    * BOM: <$1-2
  * Talking with a great supplier that has a good chunk of the mass production part of a similar design figured out already. https://www.alibaba.com/product-detail/2022-Inertial-Anti-Gravity-Magnetic-Rail_1600449581996.html?spm=a27aq.27095423.6993085110.2.61f331c8wX29eq
  * Professional firmware developer and have done my own PCB microcontroller projects before. Should not be a problem to write the firmware.

## Headwinds
  * Not familiar with mass manufacturing, reliable PCB design and testing,  Area of growth but I think I can learn and prototype quick.
  * Not sure if it's a toy that people will buy yet. Need to test market and pricing more before committing to mass manufacturing. I would enjoy playing with it though, so I'm building it for myself for now.
  * Don't yet have many of the other skills required for making a successful product. I do have *some* free time and funding though, planning on Crowd Supply or Kickstarter to evalutate demand and raise funds for production and outsourcing work.
  * Working on another project too in a completely unrelated field! https://github.com/nolanhergert/HeadlightBlocker

## "Competition"
  * Several, but they tend to stay in their domains. No one is combining it all.

## Additional Features
  * "Program" actions into the track by clipping bumpy items on the side of the track for acceleration, braking, etc. So you can do cool tricks like in Deja-Vu https://www.youtube.com/watch?v=QqHQvBDnXYw or other modern coasters

