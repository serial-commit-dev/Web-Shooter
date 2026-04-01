#  Web-Shooter
> A wrist-mounted electromagnetic web-shooter powered by an ESP32 and magnetic induction.

---

##  How It Works

This project uses the principle of **Electromagnetic Induction** — when current flows through a coiled conductor, it generates a magnetic field. That field is used to launch an iron rod which is attached to the thread (the "web") forward at high speed when a trigger button is pressed.

```
[Initializes all physical comopnents(motor, solenoids and button)] --> [provides current to solenoids one by one with 5 second delay] --> [Iron rod gains tendency to move forward] --> [Motor is turned on to let the projectile to be thrown outside from the device]
```

---

##  Components

| Component | Purpose |
|---|---|
| **ESP32** | Brain of the device — handles GPIO trigger and controls the launch sequence |
| **Iron Rod** | The projectile — launched via electromagnetic force |
| **Non-Magnetic Rod** | Guide rail — keeps the iron rod aligned during launch |
| **Solenoid(coiled wire)** | Wound around the barrel — generates the magnetic field when energized |
| **Breadboard** | Used to attach the button onto it |
| **Trigger Button** | GPIO input — initiates the launch sequence |
| **Cardboard/Box Chassis** | Main body housing all components |
| **motor axle** | Used to un-wind the thread to enable the projectile to move forward (since the length of the thread is the only limit in exiting the device)|

---

##  Diagram

<!-- Schematic based on hand-drawn design -->

![Web-Shooter Diagram](./diagram.svg) !NOT UPDATED

---

## 🔌 Basic Principle — Electromagnetic Induction

When electric current passes through a **solenoid** (a coil of wire), it creates a concentrated magnetic field along its axis. A ferromagnetic object (like an iron rod) placed inside the coil experiences a strong attractive force toward the center of the field.

By controlling the **duration and timing** of the current pulse via the ESP32, the rod is accelerated and ejected — mimicking a railgun-style launch mechanism in a compact, wrist-mounted form.

---

## 💻 Firmware

Written in **Arduino-style C++** compiled and flashed via the **Arduino IDE with ESP32 board support**.

> ✅ v1 firmware complete — Launch_Sequence.ino

---

•Concept inspired from **electromagnetic induction**

•Idea Inspired from the movie: **Spiderman: into the Spider Verse**
