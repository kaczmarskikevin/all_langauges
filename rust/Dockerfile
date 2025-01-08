FROM debian:bookworm

WORKDIR /usr/src/myapp

RUN  apt-get update && \
     apt-get install -y curl cmake binutils binutils-common binutils-x86-64-linux-gnu cmake cmake-data cpp cpp-12 fontconfig-config fonts-dejavu-core gcc gcc-12 libabsl20220623 libaom3 \
     libarchive13 libasan8 libatomic1 libavif15 libbinutils libbsd0 libc-dev-bin libc-devtools libc6-dev libcc1-0 libcrypt-dev libctf-nobfd0 libctf0 libdav1d6 \
     libde265-0 libdeflate0 libexpat1 libfontconfig1 libfreetype6 libgav1-1 libgcc-12-dev libgd3 libgomp1 libgpm2 libgprofng0 libheif1 libicu72 libisl23 \
     libitm1 libjansson4 libjbig0 libjpeg62-turbo libjsoncpp25 liblerc4 liblsan0 libmpc3 libmpfr6 libncursesw6 libnsl-dev libnsl2 libnuma1 libpng16-16 \
     libproc2-0 libquadmath0 librav1e0 librhash0 libsvtav1enc1 libtiff6 libtirpc-common libtirpc-dev libtirpc3 libtsan2 libubsan1 libuv1 libwebp7 libx11-6 \
     libx11-data libx265-199 libxau6 libxcb1 libxdmcp6 libxml2 libxpm4 libyuv0 linux-libc-dev make manpages manpages-dev procps psmisc rpcsvc-proto && \
     curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs > sh.rustup.rs && \
     chmod 777 ./sh.rustup.rs && \
     ./sh.rustup.rs -y