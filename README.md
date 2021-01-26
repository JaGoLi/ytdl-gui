# youtubedl-gui
A simple-to-use, cross-platform graphical interface for youtube-dl.  
![youtubedl-gui-screenshot.png](https://github.com/JaGoLi/ytdl-gui/raw/main/resources/youtubedl-gui-screenshot.png)
## Installation Instructions
I maintain packages for Arch and Arch-based distros (via the AUR) and for Ubuntu and Ubuntu-based distros (using a PPA).
### Arch Linux
On any Arch or Arch-based system with an AUR helper such as `yay` or `paru`, get the [`youtubedl-gui`](https://aur.archlinux.org/packages/youtubedl-gui) package as such:  
```# yay -S youtubedl-gui```  
Everything required to compile and install the application from source should be done automatically.

To try out the beta branch of this project, you can get the [`youtubedl-gui-beta`](https://aur.archlinux.org/packages/youtubedl-gui-beta/) package instead as such:  
```# yay -S youtubedl-gui-beta```
### Ubuntu
For a system based on Ubuntu 18.04, 20.04, or 20.10, add my PPA and install the application:  
```sudo add-apt-repository ppa:mordec13/youtubedl-gui```  
```sudo apt update && sudo apt install youtubedl-gui```  

## Build From Source
### Dependencies
To build this application from source, you need the basic development tools for the Qt5 framework, and a recent version of the `youtube-dl` binary.  
Here is a list of build dependencies for Arch Linux:  
```ffmpeg qt5-base youtube-dl qt5-quickcontrols```  

Here is a list of dependencies for Debian-based systems (including Ubuntu):  
```build-essential qt5-default qtdeclarative5-dev ffmpeg```  
Since the version of `youtube-dl` is often not current on debian, I recommend you install it through `pip3`.

### Installing
To install after having installed the correct dependencies:  
```git clone https://github.com/JaGoLi/ytdl-gui.git && cd ytdl-gui```
```make && sudo make install```
