#!/bin/bash

git status --ignored -s | awk '/^!!/ { print $2 }'
