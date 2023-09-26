#!/bin/bash
git log -n 5 | awk '/^commit/ { print $2 }'
