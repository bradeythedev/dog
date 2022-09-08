# dog
The reverse of cat. Literally.

Dog is a command line utility designed for Unix-like systems, which reverses the text piped into it.

## Installation

### Releases
**Note: to install Dog to your system globally, as instructed below, you will need to have access to root privileges.**
To download a specific release, head to the releases tab and download `dog` and `README.md` from your preferred release. When those files have been downloaded into a common location, open a terminal in their parent folder and run `chmod +x dog && sudo cp dog /usr/bin` to install Dog on your system. If you use an operating system that does not use `sudo`, such as a BSD, you may need to use an alternative command, like `doas`. If you are unsure of your OS's equivalent, you could alternatively run `su` then `cp dog /usr/bin`.

### Build from source
To build from source, open a terminal and run `git clone https://github.com/bradeythedev/dog` to download this repository. Now run `cd dog` to enter the repo's directory, and then `make` to build it. If you do not wish to install Dog to your `$PATH`, you are done. However, if you want to be able to use the `dog` command from anywhere or anyone on your system, you will need to install it globally by running `sudo make install`. If your system does not use `sudo`, you may need to use an equivalent in its place, or log in as root with `su`.

If you want to build another version of Dog, you can use the `make clean` command in the same directory, and `sudo make uninstall` to remove all Dog binaries from your system, ready for a fresh build.

## Using Dog
`dog` does not take any arguments, so using it is as simple as piping text into it via the command line.

### Examples
The example below prints the contents of 'file.txt' in reverse.
```cat file.txt | dog```

The example below prints the text 'hello world' in reverse, resulting in 'dlrow olleh'
```echo "hello world" | dog```

## The future of Dog
Dog was intended to be nothing more than a quick C/C++ project (that ended up with me having to learn C++ vectors >:( ), so I do not have any future plans for it beyond creating this Github repository. If you spot a bug, you're more than welcome to make a pull request. Remember, Dog is licensed under the MIT license, so if you want to *borrow it*, feel free (just remember to credit who wrote this piece of junk in the first place ;) ). Oh- and don't forget to give me a star because *woo a star!*