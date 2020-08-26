#!/bin/bash

blih -u adrien.moreau@epitech.eu repository create $1

blih -u adrien.moreau@epitech.eu repository setacl $1 ramassage-tek r

blih -u adrien.moreau@epitech.eu repository getacl $1

git clone git@git.epitech.eu:/adrien.moreau@epitech.eu/$1
