FROM debian:bookworm

WORKDIR /usr/src/myapp

RUN apt-get update && \
    apt-get install -y python3

ENTRYPOINT ["python3", "main.py"]