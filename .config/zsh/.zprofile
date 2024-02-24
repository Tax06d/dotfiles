#!/bin/sh

# zsh profile file. Runs on login. Environmental variables are set here.

sync_theme() {
    dest=$(ls $1/*.sync)
    yes | cp -f $dest ${dest::-5}
    sed -i "s/ICON_THEME/$ICON_THEME/g" ${dest::-5}
}

export XDG_CONFIG_HOME="$HOME/.config"
export XDG_DATA_HOME="$HOME/.local/share"
export XDG_CACHE_HOME="$HOME/.cache"
export ZDOTDIR="${XDG_CONFIG_HOME:-$HOME/.config}/zsh"
export ZSHCFG="$ZDOTDIR/zshcfg"
export ZSH="$ZSHCFG/OMZ"
export HISTFILE="${XDG_DATA_HOME:-$HOME/.local/share}/history"

export ICON_THEME="Papirus-Dark"
export SYNC_ROFI="${XDG_CONFIG_HOME:-$HOME/.config}/rofi" && sync_theme $SYNC_ROFI
export SYNC_GTK="${XDG_CONFIG_HOME:-$HOME/.config}/gtk-3.0" && sync_theme $SYNC_GTK

export LD_LIBRARY_PATH="$LD_LIBRARY_PATH:/usr/local/lib"

# Adds `~/.local/bin` to $PATH
export SCRIPTS="$(du "$HOME/.local/bin" | cut -f2 | paste -sd ':')"
export PATH="$PATH:$GOPATH/bin:$SCRIPTS"
export PASSWORD_STORE_DIR="${XDG_DATA_HOME:-$HOME/.local/share}/pass-store"
