<h1 align="center">
  Seven segment customer password display with PIC Microcontroller
</h1>

<p align="center">
    This project is part of the Microprocessor in Automation and Robotics Course from the department of Mechatronics of the University of São Paulo (USP).
    Assuming the store can only 9 customers (rules in the covid pandemic), each customer will get a password raging from 1-9, and the password will be displayed
    when the customer is the first 4 customers in line. When a customer leaves, another enters the display (actually 4 seven segment displays) by the left, and the rest of the customers get shifted to the right. The number that enters in the left is the number typed by the manager in the keypad. The main goals of the project were to design the hardware and software for the implementation of a dynamic 7 segment display with the PIC Microcontroller. The software was built in MPLAB X IDE and was simulated in SimulIDE.
</p>

## Requirements

- MPLAB X IDE — an expandable, highly configurable software program that incorporates powerful tools to help you discover, configure, develop, debug and qualify embedded designs for most of Microchip’s microcontrollers and digital signal controllers

- SimulIDE —  a simple real time electronic circuit simulator.

## Getting Started

Open **project.simu** in SimulIDE and load **SevenSegmentPic.X** into the PIC Microcontroller, then run.

## Additional Material

For additional material you can check [images](https://github.com/BrunoScaglione/Seven-Segment-Display-PIC-Microcontroller/tree/main/images_simulide) and [video](https://github.com/BrunoScaglione/Seven-Segment-Display-PIC-Microcontroller/tree/main/video_simulide)
of the project running on SimulIDE. You can also see a summary and code in pdf [here](https://github.com/BrunoScaglione/Seven-Segment-Display-PIC-Microcontroller/blob/main/code_and_summary.pdf) (in Portuguese)

## Hardware choices

You can see [here](https://github.com/BrunoScaglione/Seven-Segment-Display-PIC-Microcontroller/tree/main/images_datasheet_mosfet) (in Portuguese) the chosen MOSFET transistor, the important properties are highlighted. To see the jusfication of why this MOSFET and other harware choices: look [here](https://github.com/BrunoScaglione/Seven-Segment-Display-PIC-Microcontroller/blob/main/Hardware_choices.pdf) (in Portuguese)
