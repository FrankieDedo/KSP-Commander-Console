# KSP-Commander-Console

![tmp-1675457922770_copy](https://user-images.githubusercontent.com/124438778/216780635-c427c906-e4ed-4c4a-bd7d-50c5fe471046.jpg)

The entire project for my button box created for playing with Kerbal Space Program

This button box has been made using 2 Arduinos, a Pro Micro (for the displays) and a Mega 2560 R3 (for all the controls).
I used two of them for three reasons:

- I didn't want to write a execute everything on a single Arduino, to have more flexibility, stability and it also allowed me to work on a section at a time, without minding to other sections of code. Also, i later discovered that even the Mega 2560 didn't have enough pins for what i wanted to do.

- MegaJoy basically transform the Arduino in a joystick, and it uses the Serial connection, just like Simpit, so it wasn't something viable for me on a single Arduino

- The Arduino Mega 2560 doesn't support the Arduino Joystick Library and i completely forgot that so when i remembered this (too late) i had to throw in another Arduino.

#######################################################################################

The features of this console are very basic:

- 4x 7-segment 8 digits displays
- 1x LCD 16x2 dot-matrix display
- 46x buttons
  - 4x big spring buttons
  - 5x big spring buttons activated by their respective switch
  - 12x small spring buttons
  - 19x clicky buttons, eight of them arranged in a dpad/abxy configuration (xbox layout)
  - 2x joystick buttons
- 2x 3-axis joysticks (i don't know the actual name, they are the crane/camera controls type)
- 1x slider
- 5x switches with LED (that turns on when the switch is on)

I also used a small 4-port USB hub to send just one cable to the PC and have some spare ports for any other peripheral i want to attach in the future.

#######################################################################################

Here you can find all the stuff i used in order to create the shell, design the electrical circuit and develop the Arduino software.

There are 4 folders:

3D printing -> These are the original .f3z files from Fusion 360 that you can modify and then convert in STL files. I haven't shared the STL yet because lost some of those i have used for the first print and i want to rebuild them because of some changes i made to the original after printing it. I will put them here and on Thingiverse as well. 

Arduino -> There are 3 folders in here, the KSPCC_ folders contain the sketches for both microcontrollers and the libraries folder contains the third-party libraries i used for the displays.

MegaJoy -> This folder contains the batches that turn the Mega2560 in a joystick and back in an Arduino. There is also the project i used to build the hex file that is flashed to turn it into a joystick. 

Schematics -> Here you will find the KiCad files for the electrical circuit project and a .pdf file with the circuit itself.

#######################################################################################

Notes for 3D printing:

The teal central supports are meant to be placed in order to support panels at their seams, but you can jiggle arount based on the actual place of the components. Don't do like me, that i built the shell two years ago and now the panels won't fit because some stuff is too wide so i had to melt the sides of the supports. For this reason i created two different types of supports, one with a narrower plate that should accomodate better especially the top switches and the dpad/abxy brackets.

Also in teal, the brackets for the buttons are made that way so you can glue them or maybe melt the base with a soldering iron or whatever, the base should be big enough for any technique of attaching them to the back of the panel. I preferred to fix them with a small melted dot and then i secured everything with hot glue. Once i soldered all buttons to their cables, i put a dot of hot glue below every switch in order to stiffen everything

![tmp-1675533608702_copy](https://user-images.githubusercontent.com/124438778/216782858-02fddd08-daee-4f06-8118-60e319156947.jpg)

The side and corner support should be glued after a first fit test so you can slide them properly based on your build. I found that moving them a little towards the back of the shell was better when gluing them with hot glue, but if you use superglue you probably want them the closest possible to the panels.

The silver/white bezels are purely aestethic, so do what you want with them. I also created a fake screw head pattern on the vertical lines, but i couldn't print it well so i used the plain ones.

The rest of the shell is pretty easy to print. They are 4 parts of shell with very 3d printer-friendly shapes and 8 individual panels with even simpler shapes.

I have printed them on a Ender 3 Pro, so a classic 235x235 bed should be enought for you. Also, i think that scaling a bit the shell and cutting something on the panels should be possible as i have been very generous with the size of the panels and the clearance of every component.

#######################################################################################

Some pictures of the console (i am going to probably post more of them later)

![tmp-1675533608852_copy](https://user-images.githubusercontent.com/124438778/216782916-dd169a53-74e5-400c-85a5-386b28787aad.jpg)

![tmp-1675533608779_copy](https://user-images.githubusercontent.com/124438778/216782924-7ea61fc1-cf72-4ac5-96d3-645e5d4d8ae6.jpg)

![tmp-1675534424711_copy](https://user-images.githubusercontent.com/124438778/216782990-124ef302-9653-453b-9e8d-6ba630aea03d.jpg)


