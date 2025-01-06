#!/bin/bash

cd $1
docker build -t kaczmarskikevin/$1 .
cd $2
docker build -t kaczmarskikevin/$1-$2 .

LANG="$1"
PROG="$2"

shift 2

mkdir -p /tmp/base64_to_binary

echo $(docker run -v /tmp/base64_to_binary:/tmp kaczmarskikevin/$LANG-$PROG $@)