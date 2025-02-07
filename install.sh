#!/bin/sh
DEST=${PREFIX=/usr/local}

mansource/create.sh

# Compile the one tiny C program
cc src/dosdecode.c -o bin/dosdecode

mkdir -p "$DEST/bin"
mkdir -p "$DEST/share/man/man1"
install -t "$DEST/bin" bin/*
install -t "$DEST/share/man/man1" man/*
