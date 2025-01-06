FROM kaczmarskikevin/python

WORKDIR /

COPY main.py main.py

RUN apt-get update && \
    apt-get install -y python3

CMD ["python3", "main.py"]