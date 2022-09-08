build:
	c++ -o dog dog.cpp
	chmod +x dog
clean:
	rm dog
install:
	cp dog /usr/bin
uninstall:
	rm /usr/bin/dog