FROM debian:bookworm

WORKDIR /usr/src/myapp

COPY . .

RUN  apt-get update && \
     apt-get install -y curl cmake && \
     curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs > sh.rustup.rs && \
     chmod 777 ./sh.rustup.rs && \
     ./sh.rustup.rs -y

CMD ["cargo", "build", "&&", "cargo", "run"]