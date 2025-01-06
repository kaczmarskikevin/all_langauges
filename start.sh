#!/bin/bash

cd $1
docker build -t kaczmarskikevin/$1 .
cd $2
docker build -t kaczmarskikevin/$1-$2 .

ARGS=`$@/$1`
$ARGS=`$ARGS/$2`

echo $(docker run kaczmarskikevin/$1-$2 $ARGS)