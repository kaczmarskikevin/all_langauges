FROM kaczmarskikevin/rust

COPY . .

RUN apt-get update && \
    apt-get install -y cmake && \
    cargo build

CMD ["cargo", "run"]