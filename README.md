# cpp-utils
## Project Description
This repository aims to group in one place all the common C++ classes, structs & functions that I
often re-use in different projects.

## To-Do
- [ ] Matrix2, Matrix3, Matrix4
- [ ] ansi
- [ ] Color
- [ ] HSL
- [ ] LifetimeLogger
- [ ] constants
- [ ] geometry
- [ ] trigonometry

## Setup
### Dependencies
On a Debian system you can install the needed dependencies using:
```shell
sudo apt install g++ cmake make
```

### Clone Repository
```shell
git clone https://github.com/llikian/cpp-utils
cd cpp-utils
```

### Build
To build you can simply run the `release.sh` script at the root of the project using:
```shell
bash release.sh
```

You can also manually build it using:
```shell
cmake -B build && \
cmake --build build -j
```

Then you can run it using:
```shell
bin/cpp-utils
```

## Credits
