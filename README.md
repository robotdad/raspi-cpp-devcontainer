# raspi-cpp-devcontainer
This project demonstartes using a dev container for cross compiling and deploying a C++ app to a Raspberry Pi.

The main.cpp simply prints the name of the host system to the output and waits a few seconds before continuing. Using CMakePresets.json we have provided a linux-debug configuration for building the app to run on the Linux host machine. There are also pi3-debug and pi4-debug configurations that use the cross compilers for those devices. The output from those configurations will only run on the Raspberry Pi they are configured for.

To ensure the correct compilers are available the Dockerfile used with the Dev Container has all of the dependencies specified. It also uses Ubuntu 20.04 as the Raspberry Pi OS we are using is based off of Debian Buster. This ensures that we have a glibc version for our build machine that matches the target machine which is necessary to debug the application.

[This post](https://devblogs.microsoft.com/cppblog/deploy-and-debug-apps-on-remote-targets) describes how to use this proejct with VS and VS Code. 
