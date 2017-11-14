#!/bin/bash

CHANGES=$(git diff-index --name-only HEAD --)
if [ ! -z "$CHANGES" ]
then
    echo "Saving changes..."
    git add .
    git commit -m "checkpoint"
else
    echo "No changes made..."
fi
echo "Updating code..."
git checkout master
git fetch
git pull
git checkout develop
git rebase master develop
