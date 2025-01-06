#!/bin/bash

cd $1
docker build -t kaczmarskikevin/$1 .
cd $2
docker build -t kaczmarskikevin/$1-$2 .

LANG="$1"
PROG="$2"

shift 2

mkdir -p /tmp/kkaczmarski-container

echo $(docker run -v /tmp/kkaczmarski-container:/tmp kaczmarskikevin/$LANG-$PROG $@)