# robot-arm-
halflife week 2!!! this is my cad project for week 2 of halflife 
<img width="1273" height="1220" alt="Hacklife week 2 _ Assembly 1 - Google Chrome 10_17_2026 10_02_13 PM" src="https://github.com/user-attachments/assets/b8be080e-ea00-461f-b2ba-e6f6eafef553" />

## Why a robot arm 
I new from the start of the is project that I didn't want to do the beginer merble run because I have a lot of experiance with onshape. I choice to do a robotic arm because I thought that it would be hard because of the complexity of the ellbow joint but it's quite hackneyed so there is plenty of reffences to look to if I get stuck 
## Details of the arm 
my robot arm has 3 joints, a sholder joint, an ellbow joint, and a manipulator joint. it uses three servos to move the parts and a stick plus a knob to control it. all the parts can be snaped together or screwed on with the screws that are provided in the pack of servos. (I haven't put it together yet so I will update if glue is needed). It uses an ardenio uno as the brain and source of power.
## My goal with the robotic arm 
I wanted to not only further my cad ablitys in genral, but mostly I wanted to learn how to make parts that don't require any glue because most of my past projects that I have caded have required glue. 
## Author 
Me! EveyKay: https://github.com/EveyKay 
## Files and links
- BOM: [`BOM.csv`](BOM.csv)
- Code(Currently prototype): [`robotic_arm_prototype1.ino `](robotic_arm_prototype1.ino )
- 3d step: [`robotic arm parts.step`](robotic arm parts.step ) 
- Onshape link: https://cad.onshape.com/documents/7578056127f9b35309dac334/w/92838ea42e14d4ceb1386002/e/095b8977167108deb00a51a3?renderMode=0&uiState=6ad4281e276830b495d9a6ae
- bamboo plate: [`robotic arm parts.3mf`](robotic arm parts.3mf)
## Bill of Materials

| Item | Qty | Supplier | Cost/item | Total Cost | Link |
|------|-----|----------|-----------|------------|------|
| Servo motors | 3 | Miuzei | $2.00 | $6.00 | [Link](https://a.co/d/061kzFds) |
| Arduino Nano (brain) | 1 | Luirsay | $6.00 | $6.00 | [Link](https://a.co/d/061kzFds) |
| Joysticks | 1 | Diyables | $3.50 | $3.50 | [Link](https://a.co/d/061kzFds) |
| Estimated shipping (free shipping) | 1 | | | $0.00 | |
| **Total** | | | | **$15.50** | |

**Note:** The servo motors and the Arduino Nano (the brain) both come in large packs, so the packs themselves cost more than the per-item prices listed.
## Printing
I printed the part for the robot arm with a bambu printer using bambu studios, leave all the setting on the basic settings but make sure to enable supports
## Assembly
Parts, shown bellow: <img width="1898" height="1574" alt="Hacklife week 2 _ Part Studio 1 - Google Chrome 10_22_2026 1_42_08 PM" src="https://github.com/user-attachments/assets/dfdc1411-cc7b-49af-aac2-d927c1042350" />
To Assemble, Use the first image as a reference if needed 
- place and screw in servos in both of the spots for servos in the base, there are pilot holes so you can screw straight into the plastic
- screw on the 2 pronged attachment to one of the servos
- take the two stick pieces that have a rod coming out at the end and place them in the holes on either side of the 2 pronged servo connector so that the rods are going through the hold and facing out
- place one of the little C clips on the part of the rod that is sticking out on both sides
- take the last long stick and screw it on to the servo on the otherside
- next move one to the claw, take the two claw pieces and clip them onto the clips on the end of the robots forarm
- take your last servo and screw it onto the servo spot on the forearm hand area of the robot, make sure that the end of the servo in connecter to the claw piece that has a hole in it
- take the three axis and put them through the holes on the end of the forearm
- take the sticks that are now hanging of of the servos and slip them on the axis too, there should be 2 on one side and 1 on the other.
- take the remaining  C Clips and clip them on either side of each axis.
## Wireing 
- the shoulder servo is connected to pin 9 on the driver 
- the elbow servo is connected to pin 10 on the driver 
- the grabber servo is connected to pin 11 on the driver 
- the sticks are connected to pins A0 and A1
- The driver is connected to the uno
- the servos and whole robot is powered through the uno so the uno has to be pluged into power to work 
  
