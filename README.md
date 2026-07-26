<div align="center">

# 🔒 Smart Acoustic Protection System

**AI-driven speech detection and selective ultrasonic masking using TinyML and ESP32 for real-time acoustic privacy protection.**

[![License](https://img.shields.io/badge/License-MIT-green.svg)](#-license)
[![Platform](https://img.shields.io/badge/Platform-ESP32-blue)](#-technologies-used)
[![TinyML](https://img.shields.io/badge/TinyML-Enabled-orange)](#-technologies-used)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)](#-technologies-used)

</div>

---

## 📖 Overview

The **Smart Acoustic Protection System** is an embedded AI project designed to enhance speech privacy in environments containing voice-enabled devices such as smartphones and smart speakers.

By continuously monitoring environmental audio using a lightweight **TinyML model** running on an **ESP32**, the system selectively activates an ultrasonic masking module when human speech is detected. This interferes with unauthorized microphone recordings while remaining completely inaudible to humans.

Unlike conventional continuous jamming techniques, this adaptive approach significantly improves both **privacy protection** and **energy efficiency**.

---

## ✨ Features

| Feature | Description |
| :--- | :--- |
| 🎙️ **Real-time Detection** | Employs TinyML for instantaneous speech recognition. |
| ⚡ **Edge AI** | Fully processed locally on an ESP32 for absolute data privacy. |
| 🔊 **Selective Masking** | Triggers ultrasonic interference only when necessary. |
| 🔋 **Energy-efficient** | Adaptive activation conserves power compared to continuous jamming. |
| 📟 **Visual Feedback** | Integrated OLED display and LED indicators for real-time system status. |

---

## 🛠 Hardware Components

* **Microcontroller:** ESP32 Development Board
* **Input:** Microphone Module
* **Output (Masking):** Ultrasonic Transducer
* **Output (Status):** OLED Display & LED Indicator
* **Power:** Standard Power Supply

---

## 💻 Technologies Used

| Category | Technologies |
| :--- | :--- |
| **Hardware Platform** | ESP32 |
| **AI / Machine Learning** | TinyML |
| **Development** | Arduino IDE, Embedded C++ |
| **Signal Processing** | Digital Signal Processing (DSP) |

---

## 📊 Applications

* 🏠 **Smart Home Privacy:** Prevent smart speakers from recording private conversations.
* 🏢 **Secure Meeting Rooms:** Ensure confidential discussions remain private.
* 🛡️ **IoT Privacy:** Protect against unauthorized audio surveillance by compromised devices.
* 🔬 **Research & Edge Computing:** A platform for embedded AI research.

---

## 📜 License

This project is licensed under the **MIT License**.

---

## ⭐ Support

If you found this project interesting or helpful, consider giving it a ⭐ on GitHub!
