
Debian
====================
This directory contains files used to package SLTCd/SLTC-qt
for Debian-based Linux systems. If you compile SLTCd/SLTC-qt yourself, there are some useful files here.

## SLTC: URI support ##


SLTC-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install SLTC-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your SLTCqt binary to `/usr/bin`
and the `../../share/pixmaps/SLTC128.png` to `/usr/share/pixmaps`

SLTC-qt.protocol (KDE)

