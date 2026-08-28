# GUI Client for ft_irc

[English](./README.md) | [한국어](./README.ko.md)

![IRC GUI Client preview](./video.gif)

## Overview

GUI Client for ft_irc is a small IRC client created to learn **Qt Widgets**,
event-driven GUI programming, and TCP communication with **QTcpSocket**.

The project focuses on building a desktop interface with Qt Designer, connecting
widget events to application logic through Qt's Signal/Slot mechanism, and
displaying raw IRC traffic exchanged with a server. It is a separate learning
project from the [ft_irc server](https://github.com/hoysong/ft_irc).

## Learning Goals

- Build a desktop interface with Qt Widgets and Qt Designer
- Understand event-driven programming with Signals and Slots
- Handle asynchronous socket events with QTcpSocket
- Separate UI responsibilities from network communication
- Build a Qt application with CMake

## Features

- Connect to an IRC server using an IP address and port
- Configure the server password, username, and nickname through the GUI
- Automatically send `PASS`, `NICK`, and `USER` after a connection succeeds
- Send raw IRC commands by pressing Enter
- Append the IRC `\r\n` delimiter before transmitting a command
- Display connection status, outgoing messages, and incoming messages separately
- Show connection errors through both the status view and a warning dialog

## Structure

| Component | Responsibility |
| --- | --- |
| `MainWindow` | Reads user input, updates the interface, and connects widget events to application actions |
| `IRCGuiControlClient` | Manages the QTcpSocket connection and emits connection, message, and error events |
| `mainwindow.ui` | Defines the Qt Widgets interface created with Qt Designer |

## Tech Stack

- C++17
- Qt 5 or Qt 6
- Qt Widgets
- Qt Network / QTcpSocket
- Qt Designer
- CMake

## Requirements

- CMake 3.5 or later
- A C++17-compatible compiler
- Qt 5 or Qt 6 with the Widgets, Network, and LinguistTools components

## Build and Run

```bash
git clone https://github.com/hoysong/GUI-Client-for-ft_irc.git
cd GUI-Client-for-ft_irc
cmake -S . -B build
cmake --build build
./build/gui_control_client
```

The executable path can differ when using a multi-configuration generator or
Qt Creator.

## Usage

1. Start an IRC server such as [ft_irc](https://github.com/hoysong/ft_irc).
2. Enter the server IP address, port, password, username, and nickname.
3. Select **Connect**. The client sends the registration commands automatically.
4. Enter a raw IRC command and press Enter.
5. Check the status, outgoing message, and incoming message panels.

Example commands:

```text
JOIN #test
PRIVMSG #test :Hello from Qt
PART #test
QUIT :Goodbye
```

## Scope

This is a learning project centered on Qt Widgets and socket event handling. It
shows raw IRC commands and responses rather than providing the channel tabs,
user lists, and parsed chat views of a full-featured IRC client.
