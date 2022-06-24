FROM ubuntu:jammy-20220421

# Create build user
RUN useradd -u 1000 -U -G sudo -m build

# Update and get programs
RUN apt-get -qq update
RUN apt-get install -y \
            sudo \
            vim \
            wget \
            python3.10 \
            python3-pip \
            stlink-tools=1.7.0+ds-1 \
            openocd=0.11.0-1

# allow sudo group to use sudo command without password
RUN echo "%sudo   ALL=(ALL:ALL) NOPASSWD: ALL" > /etc/sudoers.d/sudoers

ARG COMPILER="https://developer.arm.com/-/media/Files/downloads/gnu-rm/10.3-2021.10/gcc-arm-none-eabi-10.3-2021.10-x86_64-linux.tar.bz2"
ARG COMPILER_TAR=/opt/toolchains/gcc-arm-none-eabi.tar.xz
ARG COMPILER_DIR=/opt/toolchains/gcc-arm-none-eabi/

RUN mkdir -p $COMPILER_DIR
RUN wget $COMPILER -O $COMPILER_TAR
RUN tar -xf $COMPILER_TAR -C $COMPILER_DIR --strip-components 1
# delete the tar to save space in the image
RUN rm $COMPILER_TAR

# install python dependencies
COPY requirements.txt /tmp/requirements.txt
RUN pip3 install -r /tmp/requirements.txt

COPY entrypoint.sh /opt/entrypoint.sh
RUN chown build:build /opt/entrypoint.sh
RUN chmod u+x /opt/entrypoint.sh

# switch to non-root user
USER build

# define default dir when entering shell to be dir of project 
WORKDIR /firmware

ENTRYPOINT /opt/entrypoint.sh

# keep container running for debugging
#ENTRYPOINT ["tail", "-f", "/dev/null"]