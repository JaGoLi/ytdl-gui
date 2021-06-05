# youtubedl-gui
A simple-to-use, cross-platform graphical interface for youtube-dl.<br/><br/>
![youtubedl-gui-screenshot.png](https://github.com/JaGoLi/ytdl-gui/raw/master/resources/youtubedl-gui-screenshot.png)<br/>


## Installation Instructions
I maintain packages for arch-based linux distros (using the aur) and for ubuntu-based distros (using a ppa).
### Arch linux
On any arch system with an aur helper such as ```yay```:<br/>
```yay -S youtubedl-gui```<br/>
Everything required to compile and install the application from source should be done automatically.

To try out the beta branch of this project, you can download the package ```youtubedl-gui-beta``` as such<br/>
```yay -S youtubedl-gui-beta```
### Ubuntu
For a system based on Ubuntu 18.04 Bionic Beaver, 20.04 Focal Fossa or 20.10 Groovy Gorilla, simply add my ppa and install the application:<br/>
```sudo add-apt-repository ppa:mordec13/youtubedl-gui```<br/>
```sudo apt update && sudo apt install youtubedl-gui```<br/><br/>
Then, you have to install the latest ```youtube-dl``` version using pip. Do the following:<br/>
```sudo pip3 install youtube-dl```

## Build From Source
### Dependencies
To build this application from source, you need the basic development tools for the Qt5 framework, and a recent version of the ```youtube-dl``` binary for the application to compile and run on your system.<br/>
Here is a list of build dependencies for arch linux:<br/>
```base-devel qt5-base ffmpeg youtube-dl```<br/>

For debian-based systems (including ubuntu) here is a list of dependencies:<br/>
```build-essential qt5-default qtdeclarative5-dev ffmpeg```<br/>
Since the version of ```youtube-dl``` is often not current on debian, I recommend you install it through ```pip3```.

### Installing
To install after having installed the correct dependencies:<br/>
```git clone https://github.com/JaGoLi/ytdl-gui.git && cd ytdl-gui```<br/>
```mkdir build && cd build```<br/>
```cmake .. && make```<br/>
```sudo make install```<br/>
