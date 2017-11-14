#!/bin/bash

BRANCH=$(git rev-parse --abrev-ref HEAD)
if [[ "$BRANCH" != "develop"]]; then
        echo "Switching to develop branch...";
        git checkout -b develop;
fi
