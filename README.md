# Mega Control Unit
An open source, Arduino Mega-based control unit set, aimed towards classic restomods and kit cars. You can teach an old dog new tricks.

## Rationale and Principles
This unit was originally conceptualised during the redesign of a TVR, where the goal was to modernise it with features such as climate
control and home lighting. It then became apparent that a substantial amount of weight in wiring could be saved if a lot of the clunky and 
complicated electrical system could be digitised in software, allowing customisation of how the car could behave.

So then it started, a few theories in how this could be achieved using an Arduino, some schematics, and off-the-shelf components, controlled
by some eloquently laid out variables in a Yaml configuration file. As such, the project aims to maintain the following principles:

- Control units should be specific and independent
   - People should have the choice as to whether they augment their existing electrical system with individual modules, or fit an entire system
- Functions should be easily customisable
   - People should be able to contribute custom functionality for their car, with relative ease
- Wiring should be simple and ideally follow the BS Au7 colour standard where possible
   - This makes it relatively straightforward for the "old school mechanic" to understand the system and install, fault find, etc
- Everything I/O should remain as low voltage signalling until it needs to be a higher voltage
   - This reduces the wire thickenesses and helps reduce the weight in the loom, as well as wear and tear on the wire

## The kit and kaboodle
This project is organised into various subfolders, of which each forms an individual control unit.
Each unit is designed to be small and specialised, so individual functions can be easily adapted into cars, without requiring an entire system to be installed.

As such, the structure is as follows:

mega-control-unit/
|- xxxx-mega-control-unit
   |- hardware
      |- components
      |- schematics
      |- wiring loom
   |- source
   |- example-conf.yaml
|- README.md

Each control unit will include KiCad schematics, code and an example reference configuration.

## hvac-mega-control-unit
This unit controls the heating, ventilation and air conditioning, including heated seats. Will contain functionality for
- Climate control (dual zone)
- Heated Seats (multiple heat settings)
- Air conditioning (including output interface for an ECU)
- Temperature control
- Fan speed control

## body-mega-control-unit
This unit controls various body functions including interior and exterior lighting, power windows, and electric mirrors. Will contain functionality for 
- Automatic window drop on door opening (useful in convertibles to preserve the seals, found in Late 90s TVRs and Audis)
- "Home Lighting" - Light up your driveway when you unlock the car - with either your main beams, fogs or position lamps
- Interior lighting
- Indicators
- Brake Lights
- Fog Lights
- Active Aero spoiler (manual or automatic with speed)

## instrument-mega-control-unit
This unit controls the instrument cluster - designed to digitise an analogue cluster! Will contain functionality for
- Dashboard indicators (i.e. warning lamps, indicators)
- Digital tachometer control (useful for standalone ECUs in classic cars that previously worked from coil drive)
- Digital speedometer control (for modern classics that don't use a speedometer cable)
- PWM based lighting (dim the dashboard controls)
- PWM based inputs (i.e. modern classic fan dials found in TVRs)
- Steering wheel controls
- Pressure and Temperature gauges
