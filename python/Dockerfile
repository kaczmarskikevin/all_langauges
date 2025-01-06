FROM debian:bookworm

WORKDIR /

RUN apt-get update && \
    apt-get install -y python3

ENTRYPOINT ["python3", "main.py"]