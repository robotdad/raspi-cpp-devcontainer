FROM mcr.microsoft.com/devcontainers/base:ubuntu-20.04

ENV DEBIAN_FRONTEND=noninteractive 
RUN apt-get update -y && \
    apt-get upgrade -y && \
    apt-get install -y --no-install-recommends \
        build-essential \
        gcc-arm-linux-gnueabihf \
        g++-arm-linux-gnueabihf \
        gcc-aarch64-linux-gnu \
        g++-aarch64-linux-gnu \
        gdb-multiarch \
        ninja-build \
        openssh-client \
        ca-certificates \
        pgp \
        wget 
# Get latest CMake for CMakePresets support
RUN (wget -O - https://apt.kitware.com/keys/kitware-archive-latest.asc 2>/dev/null | \
     gpg --dearmor - | \
     tee /usr/share/keyrings/kitware-archive-keyring.gpg >/dev/null) && \
    (echo 'deb [signed-by=/usr/share/keyrings/kitware-archive-keyring.gpg] https://apt.kitware.com/ubuntu/ focal main' | \
     tee /etc/apt/sources.list.d/kitware.list >/dev/null) && \
    apt-get update -y && \
    rm /usr/share/keyrings/kitware-archive-keyring.gpg && \
    apt-get install -y kitware-archive-keyring && \
    apt-get install -y cmake
