![CMake](https://github.com/AdityaGupta150/Ludo-The_Game/workflows/CMake/badge.svg)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/af9190f3627842869828fb1c8307b818)](https://app.codacy.com/manual/AdityaGupta150/Ludo-The_Game?utm_source=github.com&utm_medium=referral&utm_content=AdityaGupta150/Ludo-The_Game&utm_campaign=Badge_Grade_Dashboard)
[![deepcode](https://www.deepcode.ai/api/gh/badge?key=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJwbGF0Zm9ybTEiOiJnaCIsIm93bmVyMSI6IkFkaXR5YUd1cHRhMTUwIiwicmVwbzEiOiJMdWRvLVRoZV9HYW1lIiwiaW5jbHVkZUxpbnQiOmZhbHNlLCJhdXRob3JJZCI6MjIzMzksImlhdCI6MTYwMDg5MDE2NH0.bip9zdSe9te0vQIgIyzTOp_Ga4j2dmkWRlmpt7oC4Gc)](https://www.deepcode.ai/app/gh/AdityaGupta150/Ludo-The_Game/_/dashboard?utm_content=gh%2FAdityaGupta150%2FLudo-The_Game)
[![CodeFactor](https://www.codefactor.io/repository/github/adityagupta150/ludo-the_game/badge)](https://www.codefactor.io/repository/github/adityagupta150/ludo-the_game)
[![Build Status](https://travis-ci.org/AdityaGupta150/Ludo-The_Game.svg?branch=master)](https://travis-ci.org/AdityaGupta150/Ludo-The_Game)

The repo is open for beginners to contribute during the **Hacktoberfest** :tada:

# Ludo - The Game v2.0

Ludo, our popular Indian board game, completely implemented in C++

<img src=./extras/ludoScreen.png
raw=true alt=“ScreenShot”>

_Do put your suggestions, ideas, and any problem (even if why g++ main.cpp doesn't work). I will be thankful to you for trying it out :D_

## Features

* Easy and Powerful **customisability** *(More in developer notes)*
* **Variable number of inputs** at all input fields
* **Shortcuts, Keywords, _Cheat codes_**
* **Two robot modes** -
  * RandomRobo
  * ThinkerRobo (it will chose the best possible move at a time, from almost 30-90 possibilities)
* Display **adaptive** to width of screen
* Memory-safe (using smart_pointers, and uncounted for 'new' statements)
* **Multi-threaded** (for ThinkerRobo execution)
* **0 dependencies** outside stdc++
* Plus all basic ludo game features, and my own *custom* keywords _(you can create yours too :D )_

## Building

### On Linux -

```sh
mkdir build -p && cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build .
```

### For Windows -

```sh
mkdir build -p
cd build
cmake ..
cmake --build . --config Release
```

> After building you will have a `ludo.exe` inside build/Release or build/Debug etc, as per your build type, that's your executable 😃

## Files in the Project

```
.
├── extras
│   ├── CommentFetcher.cpp
│   ├── Comments.md
│   └── debugFlagsChecker.py
├── includes
│   ├── boardPrinter.hpp
│   ├── die.hpp
│   ├── enumerations.hpp
|   ├── exceptions.hpp
|   ├── game.hpp
|   ├── keywords.hpp
|   ├── ludo_box.hpp
|   ├── ludo_coords.hpp
|   ├── ludo_goti.hpp
|   ├── ludo_state.hpp
│   ├── simpleTuple.hpp
│   └── thinker.hpp
├── src
|   ├── exceptions.cpp
|   ├── game.cpp
|   ├── ludo_box.cpp
|   ├── ludo_coords.cpp
|   ├── ludo_goti.cpp
|   ├── ludo_state.cpp
|   ├── thinker.cpp
|   └── main.cpp
├── util    //my utility library
├── CMakeLists.txt
├── LICENSE.md
└── README.md
```

## DEVELOPER NOTE -

1. Even though, the codebase may seem big, or confusing, to understand how, you should see the "name of the functions" that gets called inside these, in this order -

    * main.cpp
    * board.cpp::Init_Game()
    * board.cpp::play()

2. I think only seeing the names of functions calls in these, you would get the workflow of this(the functions have been named such)... then if you want to dive more, see the `includes` directory first, and then `src` to know how a particular function works.

3. `//!` or `/**/` -> This syntax for comments has been used for giving info of the code.

4. The whole structure of the code is such that most things can be easily changed, to be able to show effect elsewehere too, some of which for eg.

    * To change **Order of Gameplay**, you only need to change one vector, ie. `colourOrder<>`
    * Different **Players can be bound to different gotis**, as you want, just update the `colourMap` and `playerMap`
    * To change **Number of Gotis**, just update the `goti_per_user`, and _internally_ it just got implemented! No fuss
        * And, for display on output : In the updateDisplay(), may use if conditions to add an additional type2() row, for each +2 gotis of goti_per_user
    * In most apps, even if you get a 6, you have to decide your move then, but at our _gaon_, we could proceed to roll the die, till its not 6, YOU can opt any of those ways, for that, replace `dieNumbers<>` to a single integer!

5. Many more if when you search (yaar please consider point 1, if that's the case :-)

## Contribution -

Start an issue for whatever feature you believe should be good here.

And, in case you want to be a contributer here, and work on it together, do ask.

Do sugggest any other feature you would like, i do claim the codebase to be quite modular, and easily customisable.

## Future Plans -

Currently, I am learning more of the 'web thing' ;D, and I have completed ALL i wanted in this initially, so lesser chance i will work much on it, but as i say, if you ask of something in it, I do consider.

* Creating a _web version_ of this, probably using Angular
* Have an API endpoint, that connects the web version, the cli version, and the GUI. (API basically done, will be customised, when i go for the web version)
* Add more sensible cheatCodes

> Thanks ! :D
