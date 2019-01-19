<!-- -*- mode: markdown; fill-column: 8192 -*- -->

SIMAK Layout
======================

This is a [Colemak][colemak] keyboard layout for the [Keyboardio][keyboardio]. The layout is refined and tuned according to the demands of a SimCorp Anaylst working in a Windows environment. This layout is heavily influenced by the greatest keyboard firmware hacker of our time - [algernon][algernon] - and his thrilling [blog][blog]. This layout mirrors design principles in my [SIMAK ergodox-ez layout][simak]

[colemak]: https://en.wikipedia.org/wiki/Colemak
[keyboardio]: https://shop.keyboard.io/
[algernon]: https://github.com/algernon/ergodox-layout
[blog]: https://asylum.madhouse-project.org/blog/tags/ergodox/
[simak]: https://github.com/joshuabragge/ergodox-layout

## Table of Contents

* [Layouts](#layouts)
    - [Base layer](#base-layer)
* [Changelog](https://github.com/joshuabragge/keyboardio-layout/blob/master/NEWS.md#readme)

# Layouts

## Base layer

[![Base layer](https://github.com/joshuabragge/keyboardio-layout/blob/master/images/base-layer.png)](http://www.keyboard-layout-editor.com/#/gists/f1683f93631cd87dadabe46272652edb)

Features:
* Tapping the `ESC` key once yields `ESC`. Double-tapping the `ESC` key triggers `ALT`+`F4`,
* Dedicated screen lock button (ScrLCK) sends `LGUI`+`L`.
* Dedicated unlock screen button sends `CTRL`+`ALT`+`DEL`.
* Tapping the `:` key once yields `:`, tapping it twice yields `;` - credit [algernon][algernon].
* Tapping the `[{(`/`)}]` keys once yields `[` (or `{` when shifted), tapping them twice yields `(` - credit [algernon][algernon].
    - `LEAD m e h` types `¯\_(ツ)_/¯`
    - `LEAD s` types "[SCD]"
    - `LEAD j b` types "joshua.bragge"
    - `LEAD d b` types "joshua.bragge.db"
    - `LEAD s v r` types "joshua.bragge.svr"
    - `LEAD f` types "from:"
    - `LEAD w m` maximizes the current window
    - `LEAD l` sends `LGUI` + `L` locking the computer
    - `LEAD u` sends `LCTRL` + `LALT` + `DEL` unlocking the computer

# Building

```
$ git clone https://github.com/joshuabragge/keyboardio-layout
$ cd keyboardio-layout
$ make flash
```