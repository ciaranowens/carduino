# Mega Control Unit
An open source, Arduino Mega-based control unit set, aimed towards classic restomods and kit cars. You can teach an old dog new tricks.

## Rationale and Principles
This unit was originally conceptualised during the redesign of a TVR, where the goal was to modernise it with features such as climate
control and home lighting. It then became apparent that a substantial amount of weight in wiring could be saved if a lot of the clunky and 
complicated electrical system could be digitised in software, allowing customisation of how the car could behave.

So then it started, a few theories in how this could be achieved using an Arduino, some schematics, and off-the-shelf components, controlled
by some eloquently laid out variables in a Yaml configuration file. As such, the project aims to maintain the following principles:

- Control units should be specific and independent
- Functions should be easily customisable
- Wiring should be simple and ideally follow the BS Au7 colour standard where possible

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
This unit controls the heating, ventilation and air conditioning, including heated seats.

## body-mega-control-unit
This unit controls various body functions including interior and exterior lighting, power windows, and electric mirrors.

