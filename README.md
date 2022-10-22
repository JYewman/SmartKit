# SmartKit
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]

## About The Project

SmartKit is a library that facilitates a standardised communication platform between IoT devices. This includes the discovery, identification and communication of IoT
devices on a LAN (Local Area Network)

SmartKit works with any Ethernet or WiFi connected arduino compatible devices. To identify the IoT device on the network this library implements SSDP (Simple Service Discovery Protocol)(https://en.wikipedia.org/wiki/Simple_Service_Discovery_Protocol). A REST API interface can then be constructed allowing communication with the device and control of
it's functions.

When used with ESP devices (ESP8266 or ESP32) this library incorporates the WiFiManager library to facilitate a WiFi connection. When used with ethernet, this library uses the
arduino ethernet library to facilitate LAN connection and communication.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Getting Started

To get started with this library, download the latest version of this repository and include the SmartKit.h file in your arduino sketch.

## Usage

This is a work in progress...

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again! You can also become a member of the team by request and publish directly to new branches.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## License

Distributed under the Creative Commons License. See `LICENSE.txt` for more information.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

[contributors-shield]: https://img.shields.io/github/contributors/JYewman/SmartKit.svg?style=for-the-badge
[contributors-url]: https://github.com/JYewman/SmartKit/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/JYewman/SmartKit.svg?style=for-the-badge
[forks-url]: https://github.com/JYewman/SmartKit/network/members
[stars-shield]: https://img.shields.io/github/stars/JYewman/SmartKit.svg?style=for-the-badge
[stars-url]: https://github.com/JYewman/SmartKit/stargazers
[issues-shield]: https://img.shields.io/github/issues/JYewman/SmartKit.svg?style=for-the-badge
[issues-url]: https://github.com/JYewman/SmartKit/issues
[license-shield]: https://img.shields.io/github/license/JYewman/SmartKit.svg?style=for-the-badge
[license-url]: https://github.com/JYewman/SmartKit/LICENSE.txt
