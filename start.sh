#!/bin/bash

cd $1
docker build -t kaczmarskikevin/$1 .
cd $2
docker build -t kaczmarskikevin/$1-$2 .

argarr=( "${$[@]:1}" )

echo $(docker run kaczmarskikevin/$1-$2 $argarr)