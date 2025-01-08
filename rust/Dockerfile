FROM debian:bookworm

WORKDIR /usr/src/myapp

RUN curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs && \
    chmod 777 ./sh.rustup.rs && \
    ./sh.rustup.rs