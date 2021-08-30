# youtubedl-gui
A simple-to-use, cross-platform graphical interface for youtube-dl.<br/><br/>
![youtubedl-gui-screenshot.png](https://github.com/JaGoLi/ytdl-gui/raw/master/resources/youtubedl-gui-screenshot-3.0.png)<br/>


## Installation Instructions
I maintain packages for arch-based linux distros (using the aur) and for ubuntu-based distros (using a ppa).
### Arch linux and Manjaro
On any arch system with an aur helper such as ```yay```:<br/>
```yay -S youtubedl-gui```<br/>
Everything required to compile and install the application from source should be done automatically.

To try out the beta branch of this project, you can download the package ```youtubedl-gui-git``` as such:<br/>
```yay -S youtubedl-gui-git```
### Ubuntu
For a system based on Ubuntu 18.04 Bionic Beaver, 20.04 Focal Fossa or 21.04 Hirsute Hippo, simply add my ppa and install the application:<br/>
```sudo add-apt-repository ppa:mordec13/youtubedl-gui```<br/>
```sudo apt update && sudo apt install youtubedl-gui```<br/><br/>
Then, you have to install the latest ```youtube-dl``` version using pip. Do the following:<br/>
```sudo pip3 install youtube-dl```
### Debian
For a system running Debian 12 Bookworm (Testing as of now) or later, the application is in the distribution's standard repositories.<br/>
Simply run ```sudo apt install youtubedl-gui``` to install the GUI interface.<br/><br/>
Then, make sure ```ffmpeg``` and ```python3-pip``` are on your system too.<br/>
Finally, execute ```sudo pip3 install youtube-dl``` to get the latest version of ```youtube-dl``` on your system.
### Flatpak
It is also possible to install the application via Flatpak if there is no package for your distrubition.<br/>
However, be aware that I am not responsible for its maintenance and that the install size will be an order of magnitude bigger than simply using a package or building from source.<br/><br/>
To install the application, run ```flatpak install flathub io.github.JaGoLi.ytdl_gui```

## HiDPI Support
This application does support HiDPI displays even though its size is fixed.
### Gnome and GTK based desktops
In order to the application to scale properly, the variable ```QT_AUTO_SCREEN_SCALE_FACTOR=1``` needs to be set.<br/>
You can set it in either ```/etc/environment```, or in your local ```.profile```, ```.bash_profile``` or ```.zshenv```
### KDE and QT based desktops
The application will scale automatically with the scaling factor chosen by the desktop environment.

## Build From Source
### Dependencies
To build this application from source, you need the basic development tools for the Qt5 framework, and a recent version of the ```youtube-dl``` binary for the application to compile and run on your system.<br/><br/>
Here is a list of build and runtime dependencies for arch linux:<br/>
```base-devel qt5-base ffmpeg youtube-dl```<br/>

For debian-based systems (including ubuntu) here is a list of dependencies:<br/>
```build-essential cmake qtbase5-dev ffmpeg youtube-dl```<br/><br/>
Since the version of ```youtube-dl``` is often not current on debian and ubuntu distros, I recommend you install it through ```pip3```.

### Installing
To install after having installed the correct dependencies:<br/><br/>
```git clone https://github.com/JaGoLi/ytdl-gui.git && cd ytdl-gui```<br/>
```mkdir build && cd build```<br/>
```cmake .. && make```<br/>
```sudo make install```<br/>
