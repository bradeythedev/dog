build:
	c++ -o dog dog.cpp
clean:
	rm dog
install:
	cp dog /usr/bin
uninstall:
	rm /usr/bin/dog