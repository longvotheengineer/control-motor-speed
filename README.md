# STM32F4 DC Motor PID Control System
[![Language](https://img.shields.io/badge/Language-C%2FEmbedded-blue.svg)](https://www.st.com/en/embedded-software/stm32cube-mcu-packages.html)
[![C++](https://img.shields.io/badge/Language-C++-00599C.svg?logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Qt](https://img.shields.io/badge/Framework-Qt-41CD52.svg?logo=qt&logoColor=white)](https://www.qt.io/)
[![Hardware](https://img.shields.io/badge/Hardware-STM32F407-green.svg)](https://www.st.com/en/evaluation-tools/stm32f4discovery.html)
[![License](https://img.shields.io/badge/License-MIT-orange.svg)](LICENSE)
[![Status](https://img.shields.io/badge/Status-Completed-success.svg)]()

> **Comprehensive implementation of a digital speed control system for DC motors using the STM32F407VGT6 microcontroller. The system features a robust PID algorithm, non-blocking UART/DMA communication, and a desktop interface for real-time monitoring and control.**

---

## Table of Contents
- [Project Overview](#-project-overview)
- [System Architecture](#-system-architecture)
- [Module 1: Hardware Design](#-module-1-hardware-design)
- [Module 2: Firmware & Resource Allocation](#-module-2-firmware--resource-allocation)
- [Module 3: Control Algorithm (PID)](#-module-3-control-algorithm-pid)
- [Module 4: PC Interface & Communication](#-module-4-pc-interface--communication)
- [Results & Performance](#-results--performance)
- [Authors & Acknowledgments](#-authors--acknowledgments)

---

## Project Overview

This repository contains the source code and documentation for the **EE3067 Embedded Control Systems** assignment. The project addresses the challenge of precise motor speed regulation under varying loads by implementing a digital feedback loop.

**Key Features:**
* **Closed-Loop Control:** Real-time speed adjustment using an Incremental Encoder.
* **High-Performance Communication:** Utilizes **DMA (Direct Memory Access)** to handle data streams without CPU intervention, ensuring the PID loop remains strictly timed.
* **Dynamic Tuning:** Modify $K_p, K_i, K_d$ parameters on-the-fly via the PC GUI.
* **Safety Mechanisms:** Integrated "Connection Lost" detection for both TX and RX lines.

---

## System Architecture

The system operates on a dual-power supply model (5V USB for logic, 12V Battery for power) and is divided into three main interaction blocks:

| Block | Component | Function |
| :--- | :--- | :--- |
| **Control Unit** | **STM32F407G-DISC1** | Central processing, PID calculation, and PWM generation. |
| **Power Stage** | **L298N H-Bridge** | Modulates 12V power based on PWM signals to drive the motor. |
| **Feedback** | **Incremental Encoder** | Provides quadrature pulse signals (Phase A/B) to measure RPM. |

---

## Module 1: Hardware Design

The hardware setup ensures signal integrity and component isolation:
* **Signal Buffering:** Uses the **74HC245** buffer to shift logic levels (3.3V $\to$ 5V) and protect the STM32 GPIOs.
* **Noise Filtering:** RC Low-pass filters are applied to Encoder lines to eliminate high-frequency glitches caused by motor brushes.
* **Power Management:** Dedicated AMS1117-5.0 regulator provides a stable reference voltage.

---

## Module 2: Firmware & Resource Allocation

The STM32F407 resources are optimized to support multi-tasking (Motor Control + Data Transmission) without latency.

### Pin Mapping & Timer Configuration
| Resource | Pin | Function | Configuration |
| :--- | :--- | :--- | :--- |
| **TIM1** | PE9 | **PWM Generation** | Controls motor speed via Duty Cycle. |
| **TIM3** | PC6, PC7 | **Encoder Mode** | Reads Phase A/B to calculate rotation. |
| **TIM2** | Internal | **PID Loop** | Interrupt timer set to $T_s = 10ms$. |
| **USART2** | PA2, PA3 | **Communication** | 115200 bps, linked with DMA1. |

---

## Module 3: Control Algorithm (PID)

The core control logic is executed inside the **TIM2 Interrupt Service Routine** every 10ms.

**Discrete PID Formula:**
$$u(t) = K_p e(t) + K_i \int_{0}^{t} e(\tau)d\tau + K_d \frac{de(t)}{dt}$$

**Operational Flow:**
1.  **Read Encoder:** Calculate current RPM based on pulse delta.
2.  **Compute Error:** $e(t) = \text{Setpoint} - \text{Actual Speed}$.
3.  **Compute Output:** Apply PID formula and saturate output (Anti-windup).
4.  **Actuate:** Update TIM1 PWM register and L298N direction pins.

---

## Module 4: PC Interface & Communication

### Protocol Design
The system uses a **Fixed-Length Frame (30 Bytes)** architecture to maximize DMA efficiency.
* **Circular Buffer:** DMA automatically transfers incoming UART data to a RAM buffer, eliminating CPU overhead for individual byte reception.
* **Command Structure**:
    * `M_STR`: Start Motor with parameters ($K_p, K_i, K_d$, Speed).
    * `M_STP`: Stop Motor.
    * `M_PLT`: Plotting Data (Sent from STM32 to PC).

### Desktop GUI
A graphical interface allows users to:
* Visualize **Setpoint vs. Response** in real-time.
* Monitor specific error values and connection status.
* Log debug data (Transmit/Receive packets).

---

## Results & Performance

Testing with the DC Servo Motor yielded the following performance metrics:
* **Response Time:** The system reaches the setpoint in **< 0.5 seconds**.
* **Steady State:** Near-zero static error due to the Integral ($K_i$) term.
* **Overshoot:** Slight overshoot observed (~160 RPM for 150 Setpoint) but quickly dampened by the Derivative ($K_d$) term.

---

## Authors & Acknowledgments

**Group 6 - Embedded Control Systems (EE3067)**
* **Instructor:** PhD. Nguyen Vinh Hao
* **Institution:** Ho Chi Minh City University of Technology (HCMUT)

**Team Members**:

| No. | Full Name | Student ID | Assignment |
| :--- | :--- | :---: | :---: |
| 1 | **Long Vo** | `2211910` | Firmware |
| 2 | **Uy Le Gia** | `2212438` | Software |
| 3 | **Vinh Nguyen** | `2213968` | Hardware |
| 4 | **Nhi Nguyen Ngoc Quynh** | `2213895` | Compilation |

---
*December 2025*
