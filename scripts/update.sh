#!/bin/bash

CHANGES=$(git diff-index --name-only HEAD --);
if [ ! -z $CHANGES ]; then
    echo "Saving changes..."
    git add .;
    git commit -m "checkpoint";
    echo "Updating code..."
    git rebase master topic;
else
    echo "No changes made..."
    echo "Updating code..."
fi
