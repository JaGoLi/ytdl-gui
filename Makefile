DESTDIR=/

build:
	cd src; \
	qmake; \
	make -j`nproc`

clean:
	cd src; \
	make clean; \
	rm -f youtubedl-gui

install:
	#create directories
	mkdir -p $$DESTDIR/usr/bin
	mkdir -p $$DESTDIR/usr/share/applications
	for i in 16 32 64 128 256 512; do \
		mkdir -p $$DESTDIR/usr/share/icons/hicolor/$${i}x$${i}/apps; \
	done
	cp src/youtubedl-gui $$DESTDIR/usr/bin
	cp resources/ytdl-gui.desktop $$DESTDIR/usr/share/applications
	for i in 16 32 64 128 256 512; do \
		cp icons/$${i}x$${i}.png $$DESTDIR/usr/share/icons/hicolor/$${i}x$${i}/apps/ytdl-gui.png; \
	done

uninstall:
	rm -f $$DESTDIR/usr/bin/youtubedl-gui
	rm -f $$DESTDIR/usr/share/applications/ytdl-gui.desktop
	for i in 16 32 64 128 256 512; do \
		rm -f $$DESTDIR/usr/share/icons/hicolor/$${i}x$${i}/apps/ytdl-gui.png; \
	done
