FROM debian:bookworm-slim

WORKDIR /usr/src/myapp

RUN apt-get update && \
    apt-get install -y curl cmake && \
    curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs > sh.rustup.rs && \
    chmod 777 ./sh.rustup.rs && \
    ./sh.rustup.rs -y