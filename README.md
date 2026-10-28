# Electro-Pneumatic Pick-and-Place Arm

An electro-pneumatic automation project combining mechanical design, pneumatic actuation, and electronic control to develop a pick-and-place mechanism.

## Project Overview

The objective is to develop a pneumatic arm capable of performing controlled mechanical movements for object handling. The project combines a fabricated mechanical structure, pneumatic cylinders, directional control valves, and Arduino-based control experimentation.

<p align="center">
  <img src="images/prototype-overview.jpg" alt="Assembled pneumatic pick-and-place prototype" width="80%">
</p>

<p align="center"><em>Physical prototype developed and tested in a workshop environment.</em></p>

## Key Features

- Pneumatic actuation using cylinders and directional control valves.
- Mechanical components designed in FreeCAD.
- Arduino-based relay control experimentation using Tinkercad.
- Native CAD models and STEP exports.
- Scope for future robotic simulation and digital-twin development.

## System Architecture

```text
Arduino Control
      |
      v
Relay Interface
      |
      v
Solenoid Valves
      |
      v
Pneumatic Cylinders
      |
      v
Arm and Gripper
      |
      v
Object Handling
```

The control system is intended to operate the pneumatic valves through electrical switching. The final actuator sequence and physical control implementation should be verified against the assembled prototype.

## Mechanical Design

The arm uses a fabricated support structure and pneumatic cylinders to generate its mechanical movements. The CAD work was developed using FreeCAD, with STEP exports available for geometry exchange and further analysis.

<p align="center">
  <img src="images/arm-mechanism.jpg" alt="Close-up of the pneumatic arm and cylinder arrangement" width="75%">
</p>

### CAD reference views

The following external reference renders illustrate a related pneumatic-arm concept. They are included for design reference and are **not presented as original CAD renders of this prototype**.

<p align="center">
  <img src="images/reference-cad-1.jpg" alt="External reference render of a pneumatic arm" width="75%">
  <br>
  <img src="images/reference-cad-2.jpg" alt="External reference render of a pneumatic arm and gripper" width="75%">
</p>

<sub>Reference images: Nevon Projects. Original source and applicable attribution/licensing should be confirmed before redistribution.</sub>

## Hardware and Control

| Subsystem | Main components |
|---|---|
| Mechanical | Fabricated frame, arm components, mounting structure |
| Pneumatic | Cylinders, directional control valves, pneumatic tubing |
| Electronics | Arduino Uno, relay modules, wiring |
| Air supply | Compressed-air source and pneumatic connections |

### Relay-control experiment

A three-channel relay-sequencing experiment was created in Tinkercad to explore timed digital output switching using an Arduino Uno.

<p align="center">
  <img src="images/relay-test.png" alt="Arduino Uno relay-sequencing simulation in Tinkercad" width="90%">
</p>

The simulation demonstrates basic sequential relay switching. It is a separate control experiment and does not, by itself, verify the final firmware or wiring used on the physical prototype.

## Prototype Development

<p align="center">
  <img src="images/prototype-electronics.jpg" alt="Electronics and relay hardware used during prototype development" width="80%">
</p>

<p align="center">
  <img src="images/prototype-workshop.jpg" alt="Pneumatic prototype and control setup in the workshop" width="80%">
</p>


These photographs show the physical mechanism, pneumatic connections, and electronics used during development.

## Project Status

- Mechanical prototype assembled.
- FreeCAD models and STEP exports created.
- Basic Arduino relay-sequencing simulation completed.
- Physical control firmware and the complete operating sequence remain to be verified.

## Future Prototypes and Improvements

1. **Automated pick-and-place:** Verify and refine the actuator sequence and control logic.
2. **Digital twin:** Recreate the mechanism digitally and study its movement.
3. **ROS 2 simulation:** Develop a URDF model and simulate the mechanism in a robotics environment.
4. **Vision-assisted handling:** Explore camera-based object detection and position estimation.

## Technologies

`FreeCAD` · `Pneumatics` · `Arduino Uno` · `Relay Control` · `Tinkercad` · `STEP CAD`

